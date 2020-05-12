class DZ_storage_base : Land_A_tent {
	scope = public;
	armor = 5;
	displayname = $STR_VEH_NAME_STASH;
	icon = "";
	mapsize = 3;
	transportMaxMagazines = 0;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;	
	constructioncount = 1;
	requireplot = 0;
	nounderground = 0;
	offset[] = {0,3,1};
};

class StashSmall_base : DZ_storage_base {
	displayname = $STR_VEH_NAME_STASH;
	icon = "\Ca\misc3\data\Icons\icon_Atent_ca.paa";
	mapsize = 3;
	model = "\z\addons\dayz_communityassets\models\stash_small.p3d";
	scope = public;
	vehicleClass = "DayZ Epoch Buildings";
	transportMaxMagazines = 12;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;
	upgradeBuilding[] = {};
};

class StashSmall : StashSmall_base {
	displayname = $STR_VEH_NAME_STASH;
	transportMaxMagazines = 12;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;
	upgradeBuilding[] = {"StashSmall1",{"ItemShovel"},{{"PartWoodPile",1}}};
};
class StashSmall1 : StashSmall_base {
	armor = 10;
	displayname = $STR_VEH_NAME_STASH1;
	transportMaxMagazines = 14;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;
	upgradeBuilding[] = {"StashSmall2",{"ItemShovel"},{{"PartWoodPile",1}}};
};
class StashSmall2 : StashSmall_base {
	armor = 15;
	displayname = $STR_VEH_NAME_STASH2;
	transportMaxMagazines = 16;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;
	upgradeBuilding[] = {"StashSmall3",{"ItemShovel"},{{"PartWoodPile",1}}};
};
class StashSmall3 : StashSmall_base {
	armor = 20;
	displayname = $STR_VEH_NAME_STASH3;
	transportMaxMagazines = 18;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;
	upgradeBuilding[] = {"StashSmall4",{"ItemShovel"},{{"ItemLog",1}}};
};
class StashSmall4 : StashSmall_base {
	armor = 25;
	displayname = $STR_VEH_NAME_STASH4;
	transportMaxMagazines = 20;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;
	upgradeBuilding[] = {"StashMedium",{"ItemShovel"},{{"ItemLog",1}}};
};

class StashMedium_base : DZ_storage_base {
	armor = 50;
	displayname = $STR_VEH_NAME_STASH_MED;
	icon = "\Ca\misc3\data\Icons\icon_Atent_ca.paa";
	mapsize = 3;
	model = "\z\addons\dayz_communityassets\models\dirt_stash_reinforced.p3d";
	scope = public;
	vehicleClass = "DayZ Epoch Buildings";
	transportMaxMagazines = 25;
	transportMaxWeapons = 1;
	transportMaxBackpacks = 0;
};
class StashMedium : StashMedium_base {
	armor = 50;
	displayname = $STR_VEH_NAME_STASH_MED;
	transportMaxMagazines = 25;
	transportMaxWeapons = 1;
	transportMaxBackpacks = 0;
	upgradeBuilding[] = {"StashMedium1",{"ItemShovel"},{{"ItemPlank",1}}};
};
class StashMedium1 : StashMedium_base {
	armor = 75;
	displayname = $STR_VEH_NAME_STASH_MED1;
	transportMaxMagazines = 50;
	transportMaxWeapons = 2;
	transportMaxBackpacks = 0;
	upgradeBuilding[] = {"StashMedium2",{"ItemShovel"},{{"ItemPlank",1}}};
};
class StashMedium2 : StashMedium_base {
	armor = 100;
	displayname = $STR_VEH_NAME_STASH_MED2;
	transportMaxMagazines = 75;
	transportMaxWeapons = 4;
	transportMaxBackpacks = 0;
	upgradeBuilding[] = {"StashMedium3",{"ItemToolbox","ItemShovel"},{{"ItemPlank",1},{"equip_nails",2}}};
};
class StashMedium3 : StashMedium_base {
	armor = 125;
	displayname = $STR_VEH_NAME_STASH_MED3;
	transportMaxMagazines = 100;
	transportMaxWeapons = 8;
	transportMaxBackpacks = 1;
	upgradeBuilding[] = {"StashMedium4",{"ItemToolbox","ItemShovel"},{{"PartWoodPlywood",1},{"equip_nails",2}}};
};
class StashMedium4 : StashMedium_base {
	armor = 150;
	displayname = $STR_VEH_NAME_STASH_MED4;
	transportMaxMagazines = 125;
	transportMaxWeapons = 16;
	transportMaxBackpacks = 1;
};

class TentStorage_base : DZ_storage_base {	
	model = "\z\addons\dayz_communityassets\models\tent_a.p3d";
	destrType = DestructTent;
	displayName = $STR_VEH_NAME_TENT;
	vehicleClass = "DayZ Epoch Buildings";
	pack = "WeaponHolder_ItemTent";
	transportMaxMagazines = 130;
	transportMaxWeapons = 10;
	transportMaxBackpacks = 5;
};

class TentStorage : TentStorage_base {
	displayName = $STR_VEH_NAME_TENT;
	pack = "WeaponHolder_ItemTent";
	transportMaxMagazines = 130;
	transportMaxWeapons = 10;
	transportMaxBackpacks = 5;
	upgradeBuilding[] = {"TentStorage0",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",1}}};	
};
class TentStorage0 : TentStorage_base {
	displayName = $STR_VEH_NAME_TENT1;
	armor = 20;
	transportMaxMagazines = 140;
	transportMaxWeapons = 12;
	transportMaxBackpacks = 5;
	upgradeBuilding[] = {"TentStorage1",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",1},{"equip_tent_poles",1}}};
};
class TentStorage1 : TentStorage_base {
	displayName = $STR_VEH_NAME_TENT2;
	armor = 30;
	transportMaxMagazines = 150;
	transportMaxWeapons = 14;
	transportMaxBackpacks = 5;
	upgradeBuilding[] = {"TentStorage2",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",2},{"equip_tent_poles",2}}};
};
class TentStorage2 : TentStorage_base {
	displayName = $STR_VEH_NAME_TENT3;
	armor = 40;
	transportMaxMagazines = 160;
	transportMaxWeapons = 16;
	transportMaxBackpacks = 5;
	upgradeBuilding[] = {"TentStorage3",{"ItemToolbox","ItemKnife"},{{"equip_string",2},{"ItemBurlap",1},{"equip_tent_poles",1}}};
};
class TentStorage3 : TentStorage_base {
	displayName = $STR_VEH_NAME_TENT4;
	armor = 50;
	transportMaxMagazines = 170;
	transportMaxWeapons = 18;
	transportMaxBackpacks = 5;
	upgradeBuilding[] = {"TentStorage4",{"ItemToolbox","ItemKnife"},{{"equip_rope",2},{"ItemBurlap",2},{"equip_tent_poles",4}}};
};
class TentStorage4 : TentStorage_base {
	displayName = $STR_VEH_NAME_TENT5;
	armor = 60;
	transportMaxMagazines = 180;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 5;
	create = "";
};

class DomeTentStorage_base : TentStorage_base {
	armor = 50;
	model = "\z\addons\dayz_communityassets\models\tent_dome.p3d";
	displayname = $STR_VEH_NAME_DOME_TENT;
	vehicleClass = "DayZ Epoch Buildings";
	icon = "\Ca\buildings\Icons\i_Astan_CA.paa";
	pack = "WeaponHolder_ItemDomeTent";
	transportMaxMagazines = 150;
	transportMaxWeapons = 15;
	transportMaxBackpacks = 5;
};

class DomeTentStorage : DomeTentStorage_base {
	armor = 50;
	displayname = $STR_VEH_NAME_DOME_TENT;
	transportMaxMagazines = 75;
	transportMaxWeapons = 15;
	transportMaxBackpacks = 5;
	upgradeBuilding[] = {"DomeTentStorage0",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",1}}};	
};
class DomeTentStorage0 : DomeTentStorage_base {
	armor = 60;
	displayname = $STR_VEH_NAME_DOME_TENT1;
	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	upgradeBuilding[] = {"DomeTentStorage1",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",1},{"equip_tent_poles",1}}};
};
class DomeTentStorage1 : DomeTentStorage_base {
	armor = 70;
	displayname = $STR_VEH_NAME_DOME_TENT2;
	transportMaxMagazines = 125;
	transportMaxWeapons = 25;
	transportMaxBackpacks = 7;
	upgradeBuilding[] = {"DomeTentStorage2",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",2},{"equip_tent_poles",2}}};
};
class DomeTentStorage2 : DomeTentStorage_base {
	armor = 80;
	displayname = $STR_VEH_NAME_DOME_TENT3;
	transportMaxMagazines = 150;
	transportMaxWeapons = 30;
	transportMaxBackpacks = 8;
	upgradeBuilding[] = {"DomeTentStorage3",{"ItemToolbox","ItemKnife"},{{"equip_string",2},{"ItemBurlap",1},{"equip_tent_poles",1}}};
};
class DomeTentStorage3 : DomeTentStorage_base {
	armor = 90;
	displayname = $STR_VEH_NAME_DOME_TENT4;
	transportMaxMagazines = 175;
	transportMaxWeapons = 35;
	transportMaxBackpacks = 9;
	upgradeBuilding[] = {"DomeTentStorage4",{"ItemToolbox","ItemKnife"},{{"equip_rope",2},{"ItemBurlap",2},{"equip_tent_poles",4}}};
};

class DomeTentStorage4 : DomeTentStorage_base {
	armor = 100;
	displayname = $STR_VEH_NAME_DOME_TENT5;
	transportMaxMagazines = 200;
	transportMaxWeapons = 40;
	transportMaxBackpacks = 10;
};

class DesertTentStorage: DomeTentStorage_base {
	armor = 50;
	displayname = $STR_VEH_NAME_DESERT_TENT;
	vehicleClass = "DayZ Epoch Buildings";
	model = "\dayz_epoch_b\models\astan.p3d";
	pack = "WeaponHolder_ItemDesertTent";	
	transportMaxMagazines = 75;
	transportMaxWeapons = 15;
	transportMaxBackpacks = 5;
	upgradeBuilding[] = {"DesertTentStorage0",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",1}}};	
};

class DesertTentStorage0: DomeTentStorage_base {
	armor = 60;
	displayname = $STR_VEH_NAME_DESERT_TENT1;
	model = "\dayz_epoch_b\models\astan.p3d";
	pack = "WeaponHolder_ItemDesertTent";
	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	upgradeBuilding[] = {"DesertTentStorage1",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",1},{"equip_tent_poles",1}}};
};

class DesertTentStorage1: DomeTentStorage_base {
	armor = 70;
	displayname = $STR_VEH_NAME_DESERT_TENT2;
	model = "\dayz_epoch_b\models\astan.p3d";
	pack = "WeaponHolder_ItemDesertTent";
	transportMaxMagazines = 125;
	transportMaxWeapons = 25;
	transportMaxBackpacks = 7;
	upgradeBuilding[] = {"DesertTentStorage2",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",2},{"equip_tent_poles",2}}};
};

class DesertTentStorage2: DomeTentStorage_base {
	armor = 80;
	displayname = $STR_VEH_NAME_DESERT_TENT3;
	model = "\dayz_epoch_b\models\astan.p3d";
	pack = "WeaponHolder_ItemDesertTent";
	transportMaxMagazines = 150;
	transportMaxWeapons = 30;
	transportMaxBackpacks = 8;
	upgradeBuilding[] = {"DesertTentStorage3",{"ItemToolbox","ItemKnife"},{{"equip_string",2},{"ItemBurlap",1},{"equip_tent_poles",1}}};
};

class DesertTentStorage3: DomeTentStorage_base {
	armor = 90;
	displayname = $STR_VEH_NAME_DESERT_TENT4;
	model = "\dayz_epoch_b\models\astan.p3d";
	pack = "WeaponHolder_ItemDesertTent";
	transportMaxMagazines = 175;
	transportMaxWeapons = 35;
	transportMaxBackpacks = 9;
	upgradeBuilding[] = {"DesertTentStorage4",{"ItemToolbox","ItemKnife"},{{"equip_rope",2},{"ItemBurlap",2},{"equip_tent_poles",4}}};
};

class DesertTentStorage4 : DomeTentStorage_base {
	armor = 100;
	displayname = $STR_VEH_NAME_DESERT_TENT5;
	model = "\dayz_epoch_b\models\astan.p3d";
	pack = "WeaponHolder_ItemDesertTent";
	transportMaxMagazines = 200;
	transportMaxWeapons = 40;
	transportMaxBackpacks = 10;
};
