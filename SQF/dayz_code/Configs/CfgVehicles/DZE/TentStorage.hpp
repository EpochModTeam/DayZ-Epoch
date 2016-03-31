// DayZ tents are defined in \dayz_equip\configs\Storage.hpp

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

class WeaponHolder_ItemTentOld: WeaponHolderBase {
	scope = public;
	displayName = $STR_EQUIP_NAME_20;
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemTentOld'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemTentDomed: WeaponHolderBase {
	scope = public;
	displayName = "Domed Desert Tent";

	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemTentDomed'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemTentDomed2: WeaponHolderBase {
	scope = public;
	displayName = "Domed Green Tent";

	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemTentDomed2'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};