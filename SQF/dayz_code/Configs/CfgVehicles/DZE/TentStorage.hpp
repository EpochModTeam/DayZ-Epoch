class TentStorage: Land_A_tent {
	vehicleClass = "Survival";
	transportMaxMagazines = 50;
	transportMaxWeapons = 10;
	transportMaxBackpacks = 5;
	create = "WeaponHolder_ItemTentOld";
	constructioncount = 1;
	offset[] = {0,2.5,0};
	requireplot = 0;
	nounderground = 0;
};
class TentStorageDomed: TentStorage {
	displayName = "Digital Camo Tent";
	vehicleClass = "Survival";
	model = "\dayz_epoch_b\models\astan.p3d";
	transportMaxMagazines = 75;
	transportMaxWeapons = 12;
	transportMaxBackpacks = 7;
	create = "WeaponHolder_ItemTentDomed";
	offset[] = {0,2.5,0};
};
class TentStorageDomed2: TentStorage {
	displayName = "Green Domed Tent";
	vehicleClass = "Survival";
	model = "\ca\Misc_E\Astan_ep1.p3d"; 
	transportMaxMagazines = 75;
	transportMaxWeapons = 12;
	transportMaxBackpacks = 7;
	create = "WeaponHolder_ItemTentDomed2";
	offset[] = {0,2.5,0};
};

class WeaponHolder_ItemTentOld: WeaponHolder {
	scope = 2;
	displayName = $STR_EQUIP_NAME_20;
	class transportmagazines {
		class _xx_ItemTentOld {
			magazine = "ItemTentOld";
			count = 1;
		};
	};
};
class WeaponHolder_ItemTentDomed: WeaponHolder {
	scope = 2;
	displayName = "Domed Desert Tent";
	class transportmagazines {
		class _xx_ItemTentDomed {
			magazine = "ItemTentDomed";
			count = 1;
		};
	};
};
class WeaponHolder_ItemTentDomed2: WeaponHolder {
	scope = 2;
	displayName = "Domed Green Tent";
	class transportmagazines {
		class _xx_ItemTentDomed2 {
			magazine = "ItemTentDomed2";
			count = 1;
		};
	};
};