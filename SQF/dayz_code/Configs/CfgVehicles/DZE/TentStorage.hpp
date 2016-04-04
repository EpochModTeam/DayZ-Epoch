// DayZ tents are defined in \dayz_equip\configs\Storage.hpp
class DomeTentStorage_base;

class DesertTentStorage: DomeTentStorage_base {
	armor = 50;
	displayName = "Desert Dome Tent";
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
	displayName = "Desert Dome Tent +";
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
	displayName = "Desert Dome Tent ++";
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
	displayName = "Desert Dome Tent +++";
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
	displayName = "Desert Dome Tent ++++";
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
	displayName = "Desert Dome Tent +++++";
	model = "\dayz_epoch_b\models\astan.p3d";
	transportMaxMagazines = 200; //same as ural
	transportMaxWeapons = 40;
	transportMaxBackpacks = 10;
};