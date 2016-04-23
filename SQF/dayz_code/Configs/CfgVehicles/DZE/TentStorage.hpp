// DayZ tents are defined in \dayz_equip\configs\Storage.hpp
class DomeTentStorage_base;

class DesertTentStorage: DomeTentStorage_base {
	armor = 50;
	displayname = $STR_VEH_NAME_DESERT_TENT;
	model = "\dayz_epoch_b\models\astan.p3d";
	transportMaxMagazines = 75;
	transportMaxWeapons = 15;
	transportMaxBackpacks = 5;
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"equip_crate","PartWoodPile"};
		create = "DesertTentStorage0";
	};
};

class DesertTentStorage0: DomeTentStorage_base {
	armor = 60;
	displayname = $STR_VEH_NAME_DESERT_TENT1;
	model = "\dayz_epoch_b\models\astan.p3d";
	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"equip_crate","PartWoodPile"};
		create = "DesertTentStorage1";
	};
};

class DesertTentStorage1: DomeTentStorage_base {
	armor = 70;
	displayname = $STR_VEH_NAME_DESERT_TENT2;
	model = "\dayz_epoch_b\models\astan.p3d";
	transportMaxMagazines = 125;
	transportMaxWeapons = 25;
	transportMaxBackpacks = 7;
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"equip_crate","PartWoodPile"};
		create = "DesertTentStorage2";
	};
};

class DesertTentStorage2: DomeTentStorage_base {
	armor = 80;
	displayname = $STR_VEH_NAME_DESERT_TENT3;
	model = "\dayz_epoch_b\models\astan.p3d";
	transportMaxMagazines = 150;
	transportMaxWeapons = 30;
	transportMaxBackpacks = 8;
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"equip_crate","PartWoodPile"};
		create = "DesertTentStorage3";
	};
};

class DesertTentStorage3: DomeTentStorage_base {
	armor = 90;
	displayname = $STR_VEH_NAME_DESERT_TENT4;
	model = "\dayz_epoch_b\models\astan.p3d";
	transportMaxMagazines = 175;
	transportMaxWeapons = 35;
	transportMaxBackpacks = 9;
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"equip_crate","PartWoodPile"};
		create = "DesertTentStorage4";
	};
};

class DesertTentStorage4 : DomeTentStorage_base {
	armor = 100;
	displayname = $STR_VEH_NAME_DESERT_TENT5;
	model = "\dayz_epoch_b\models\astan.p3d";
	transportMaxMagazines = 200; //same as ural
	transportMaxWeapons = 40;
	transportMaxBackpacks = 10;
};