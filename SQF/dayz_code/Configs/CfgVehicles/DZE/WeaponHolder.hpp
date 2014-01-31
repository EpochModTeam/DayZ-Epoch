class ReammoBox;
class WeaponHolderBase: ReammoBox {
	scope = 0;
	accuracy = 1000;
	vehicleClass = "Survival";
	displayName = "Weapon";
	memoryPointSupply = "collect";
	supplyRadius = 3;
	transportMaxWeapons = 0;
	transportMaxMagazines = 0;
	transportMaxBackpacks = 0;
	transportAmmo = 0;
	transportRepair = 0;
	transportFuel = 0;
};
class WoodenArrowF : WeaponHolderBase {
	scope = public;
	displayName = "Arrow";
	model = "\dayz_weapons\models\bolt";
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','WoodenArrow'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemHatchet_DZE: WeaponHolderBase {
	scope = 2;
	displayName = $STR_EQUIP_NAME_41;
	model = "\dayz_equip\models\hatchet.p3d";
	class eventHandlers {
		init = "[(_this select 0),'cfgWeapons','ItemHatchet_DZE'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemMachete: WeaponHolderBase {
	scope = 2;
	displayName = "Machete";
	model="\z\addons\dayz_communityassets\models\machete.p3d";
	class eventHandlers {
		init = "[(_this select 0),'cfgWeapons','ItemMachete'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};
class WeaponHolder_MeleeCrowbar: WeaponHolderBase {
	scope = 2;
	displayName = "Crowbar";
	model = "\dayz_equip\models\crowbar.p3d";
	class eventHandlers {
		init = "[(_this select 0),'cfgWeapons','ItemCrowbar'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemJerrycanEmpty: WeaponHolderBase {
	scope = 2;
	displayName = $STR_EQUIP_NAME_39;
	model = "\dayz_equip\proxy\jerrycan.p3d";
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemJerrycanEmpty'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};