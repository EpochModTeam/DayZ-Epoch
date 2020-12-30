class TentStorage_base : DZ_storage_base {	
	scope = 2;
	model = "\z\addons\dayz_communityassets\models\tent_a.p3d";
	destrType = DestructTent;
	displayName = $STR_VEH_NAME_TENT;
	vehicleClass = "DayZ Epoch Tents";
	pack = "WeaponHolder_ItemTent";
	transportMaxMagazines = 130;
	transportMaxWeapons = 10;
	transportMaxBackpacks = 5;
	icon = "\Ca\buildings\Icons\i_Astan_CA.paa";
};

class TentStorage : TentStorage_base {
	model = "\z\addons\dayz_communityassets\models\tent_a.p3d";
	displayName = $STR_VEH_NAME_TENT;
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

class TentStorageWinter_base: TentStorage_base {
	pack = "WeaponHolder_ItemTentWinter";
	model = "\z\addons\dayz_epoch_v\base_building\storage\tents\dze_a_tent.p3d";
};

class TentStorageWinter : TentStorageWinter_base {
	displayName = $STR_VEH_NAME_TENTWINTER;
	transportMaxMagazines = 130;
	transportMaxWeapons = 10;
	transportMaxBackpacks = 5;
	upgradeBuilding[] = {"TentStorageWinter0",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",1}}};	
};
class TentStorageWinter0 : TentStorageWinter_base {
	displayName = $STR_VEH_NAME_TENTWINTER1;
	armor = 20;
	transportMaxMagazines = 140;
	transportMaxWeapons = 12;
	transportMaxBackpacks = 5;
	upgradeBuilding[] = {"TentStorageWinter1",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",1},{"equip_tent_poles",1}}};
};
class TentStorageWinter1 : TentStorageWinter_base {
	displayName = $STR_VEH_NAME_TENTWINTER2;
	armor = 30;
	transportMaxMagazines = 150;
	transportMaxWeapons = 14;
	transportMaxBackpacks = 5;
	upgradeBuilding[] = {"TentStorageWinter2",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",2},{"equip_tent_poles",2}}};
};
class TentStorageWinter2 : TentStorageWinter_base {
	displayName = $STR_VEH_NAME_TENTWINTER3;
	armor = 40;
	transportMaxMagazines = 160;
	transportMaxWeapons = 16;
	transportMaxBackpacks = 5;
	upgradeBuilding[] = {"TentStorageWinter3",{"ItemToolbox","ItemKnife"},{{"equip_string",2},{"ItemBurlap",1},{"equip_tent_poles",1}}};
};
class TentStorageWinter3 : TentStorageWinter_base {
	displayName = $STR_VEH_NAME_TENTWINTER4;
	armor = 50;
	transportMaxMagazines = 170;
	transportMaxWeapons = 18;
	transportMaxBackpacks = 5;
	upgradeBuilding[] = {"TentStorageWinter4",{"ItemToolbox","ItemKnife"},{{"equip_rope",2},{"ItemBurlap",2},{"equip_tent_poles",4}}};
};
class TentStorageWinter4 : TentStorageWinter_base {
	displayName = $STR_VEH_NAME_TENTWINTER5;
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

class DesertTentStorageBase: DomeTentStorage_base {
	model = "\dayz_epoch_b\models\astan.p3d";
	pack = "WeaponHolder_ItemDesertTent";	
};

class DesertTentStorage: DesertTentStorageBase {
	armor = 50;
	displayname = $STR_VEH_NAME_DESERT_TENT;
	transportMaxMagazines = 75;
	transportMaxWeapons = 15;
	transportMaxBackpacks = 5;
	upgradeBuilding[] = {"DesertTentStorage0",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",1}}};	
};

class DesertTentStorage0: DesertTentStorageBase {
	armor = 60;
	displayname = $STR_VEH_NAME_DESERT_TENT1;
	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	upgradeBuilding[] = {"DesertTentStorage1",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",1},{"equip_tent_poles",1}}};
};

class DesertTentStorage1: DesertTentStorageBase {
	armor = 70;
	displayname = $STR_VEH_NAME_DESERT_TENT2;
	transportMaxMagazines = 125;
	transportMaxWeapons = 25;
	transportMaxBackpacks = 7;
	upgradeBuilding[] = {"DesertTentStorage2",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",2},{"equip_tent_poles",2}}};
};

class DesertTentStorage2: DesertTentStorageBase {
	armor = 80;
	displayname = $STR_VEH_NAME_DESERT_TENT3;
	transportMaxMagazines = 150;
	transportMaxWeapons = 30;
	transportMaxBackpacks = 8;
	upgradeBuilding[] = {"DesertTentStorage3",{"ItemToolbox","ItemKnife"},{{"equip_string",2},{"ItemBurlap",1},{"equip_tent_poles",1}}};
};

class DesertTentStorage3: DesertTentStorageBase {
	armor = 90;
	displayname = $STR_VEH_NAME_DESERT_TENT4;
	transportMaxMagazines = 175;
	transportMaxWeapons = 35;
	transportMaxBackpacks = 9;
	upgradeBuilding[] = {"DesertTentStorage4",{"ItemToolbox","ItemKnife"},{{"equip_rope",2},{"ItemBurlap",2},{"equip_tent_poles",4}}};
};

class DesertTentStorage4 : DesertTentStorageBase {
	armor = 100;
	displayname = $STR_VEH_NAME_DESERT_TENT5;
	transportMaxMagazines = 200;
	transportMaxWeapons = 40;
	transportMaxBackpacks = 10;
};

class WinterDomeTentStorageBase: DomeTentStorage_base {
	model = "\z\addons\dayz_epoch_v\base_building\storage\tents\dze_dome_tent.p3d";
	pack = "WeaponHolder_ItemWinterDomeTent";	
};

class WinterDomeTentStorage: WinterDomeTentStorageBase {
	armor = 50;
	displayname = $STR_VEH_NAME_WINTER_DOME_TENT;
	transportMaxMagazines = 75;
	transportMaxWeapons = 15;
	transportMaxBackpacks = 5;
	upgradeBuilding[] = {"WinterDomeTentStorage0",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",1}}};	
};

class WinterDomeTentStorage0: WinterDomeTentStorageBase {
	armor = 60;
	displayname = $STR_VEH_NAME_WINTER_DOME_TENT1;
	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	upgradeBuilding[] = {"WinterDomeTentStorage1",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",1},{"equip_tent_poles",1}}};
};

class WinterDomeTentStorage1: WinterDomeTentStorageBase {
	armor = 70;
	displayname = $STR_VEH_NAME_WINTER_DOME_TENT2;
	transportMaxMagazines = 125;
	transportMaxWeapons = 25;
	transportMaxBackpacks = 7;
	upgradeBuilding[] = {"WinterDomeTentStorage2",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",2},{"equip_tent_poles",2}}};
};

class WinterDomeTentStorage2: WinterDomeTentStorageBase {
	armor = 80;
	displayname = $STR_VEH_NAME_WINTER_DOME_TENT3;
	transportMaxMagazines = 150;
	transportMaxWeapons = 30;
	transportMaxBackpacks = 8;
	upgradeBuilding[] = {"WinterDomeTentStorage3",{"ItemToolbox","ItemKnife"},{{"equip_string",2},{"ItemBurlap",1},{"equip_tent_poles",1}}};
};

class WinterDomeTentStorage3: WinterDomeTentStorageBase {
	armor = 90;
	displayname = $STR_VEH_NAME_WINTER_DOME_TENT4;
	transportMaxMagazines = 175;
	transportMaxWeapons = 35;
	transportMaxBackpacks = 9;
	upgradeBuilding[] = {"WinterDomeTentStorage4",{"ItemToolbox","ItemKnife"},{{"equip_rope",2},{"ItemBurlap",2},{"equip_tent_poles",4}}};
};

class WinterDomeTentStorage4 : WinterDomeTentStorageBase {
	armor = 100;
	displayname = $STR_VEH_NAME_WINTER_DOME_TENT5;
	transportMaxMagazines = 200;
	transportMaxWeapons = 40;
	transportMaxBackpacks = 10;
};