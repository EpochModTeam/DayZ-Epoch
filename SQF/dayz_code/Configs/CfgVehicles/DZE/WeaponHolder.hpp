class WeaponHolder_ItemHatchet_DZE: WeaponHolderBase {
	scope = public;
	displayName = $STR_EQUIP_NAME_41;
	model = "\dayz_equip\models\hatchet.p3d";
	class eventHandlers {
		init = "[(_this select 0),'cfgWeapons','ItemHatchet_DZE'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemMachete: WeaponHolderBase {
	scope = public;
	displayName = "Machete";
	model="\z\addons\dayz_communityassets\models\machete.p3d";
	class eventHandlers {
		init = "[(_this select 0),'cfgWeapons','ItemMachete'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};
class WeaponHolder_MeleeCrowbar: WeaponHolderBase {
	scope = public;
	displayName = "Crowbar";
	model = "\dayz_equip\models\crowbar.p3d";
	class eventHandlers {
		init = "[(_this select 0),'cfgWeapons','ItemCrowbar'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};