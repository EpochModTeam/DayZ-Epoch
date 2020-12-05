class StashSmall_base : DZ_storage_base {
	displayname = $STR_VEH_NAME_STASH;
	icon = "\Ca\misc3\data\Icons\icon_Atent_ca.paa";
	mapsize = 3;
	model = "\z\addons\dayz_communityassets\models\stash_small.p3d";
	scope = 2;
	vehicleClass = "DayZ Epoch Buildables";
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
	scope = 2;
	vehicleClass = "DayZ Epoch Buildables";
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
	upgradeBuilding[] = {"StashMedium3",{"ItemToolbox","ItemShovel","Hammer_DZE"},{{"ItemPlank",1},{"equip_nails",2}}};
};
class StashMedium3 : StashMedium_base {
	armor = 125;
	displayname = $STR_VEH_NAME_STASH_MED3;
	transportMaxMagazines = 100;
	transportMaxWeapons = 8;
	transportMaxBackpacks = 1;
	upgradeBuilding[] = {"StashMedium4",{"ItemToolbox","ItemShovel","Hammer_DZE"},{{"PartWoodPlywood",1},{"equip_nails",2}}};
};
class StashMedium4 : StashMedium_base {
	armor = 150;
	displayname = $STR_VEH_NAME_STASH_MED4;
	transportMaxMagazines = 125;
	transportMaxWeapons = 16;
	transportMaxBackpacks = 1;
};