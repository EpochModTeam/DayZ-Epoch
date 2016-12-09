class WeaponHolderBase;
class WoodenArrowF : WeaponHolderBase {
	scope = public;
	displayName = $STR_ITEMWOODENARROW_CODE_NAME;
	model = "\dayz_weapons\models\bolt";
	destrType = "DestructNo";

	class eventHandlers
	{
		init = "[(_this select 0),'cfgMagazines','1Rnd_Arrow_Wood'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemCrowbar: WeaponHolderBase
{
	scope=2;
	displayName=$STR_EQUIP_NAME_CROWBAR;
	model="\dayz_equip\models\crowbar.p3d";
	destrType = "DestructNo";
	
	class eventHandlers
	{
		init="[(_this select 0),'cfgWeapons','ItemCrowbar'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemSledge : WeaponHolderBase { // Epoch class. Needed for player_dropWeapon
	scope = public;
	displayName = $STR_EQUIP_NAME_SledgeHammer;
	model="\z\addons\dayz_epoch\models\sledge_mag.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgWeapons','ItemSledge'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};
/*
class WeaponHolder_MeleeBaseBallBat: WeaponHolderBase
{
	scope=2;
	displayName=$STR_EQUIP_NAME_BASEBALLBAT;
	model="\z\addons\dayz_communityassets\models\baseball_bat.p3d";
	destrType = "DestructNo";
	
	class eventHandlers
	{
		init="[(_this select 0),'cfgWeapons','MeleeBaseBallBat'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};
class WeaponHolder_MeleeBatBarbed: WeaponHolderBase
{
	scope=2;
	displayName=$STR_CRAFT_NAME_BaseBallBatBarbed;
	model="\z\addons\dayz_communityassets\models\baseball_bat.p3d";
	destrType = "DestructNo";
	
	class eventHandlers
	{
		init="[(_this select 0),'cfgWeapons','MeleeBaseBallBatBarbed'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};
class WeaponHolder_MeleeBaseBallBatNails: WeaponHolderBase
{
	scope=2;
	displayName=$STR_CRAFT_NAME_NailedBaseballBat;
	model="\z\addons\dayz_communityassets\models\baseball_bat_nails.p3d";
	destrType = "DestructNo";
	
	class eventHandlers
	{
		init="[(_this select 0),'cfgWeapons','MeleeBaseBallBatNails'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};
*/
class WeaponHolder_MeleeMachete: WeaponHolderBase
{
	scope=2;
	displayName=$STR_EQUIP_NAME_MACHETE;
	model="\z\addons\dayz_communityassets\models\machete.p3d";
	destrType = "DestructNo";
	
	class eventHandlers
	{
		init="[(_this select 0),'cfgWeapons','MeleeMachete'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemJerrycanEmpty : WeaponHolderBase {
	scope = public;
	displayName = "$STR_EQUIP_NAME_39";
	model = "\dayz_equip\proxy\jerrycan_side.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemJerrycanEmpty'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemFuelcanEmpty : WeaponHolderBase {
	scope = public;
	displayName = $STR_ITEM_NAME_FUELCAN_EMPTY;
	model = "z\addons\dayz_communityassets\models\fuelcan.p3d";
	destrType = "DestructNo";

	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemFuelcanEmpty'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemFuelcan : WeaponHolderBase {
	scope = public;
	displayName = $STR_ITEM_NAME_FUELCAN;
	model = "z\addons\dayz_communityassets\models\fuelcan.p3d";
	destrType = "DestructNo";

	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemFuelcan'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemCamoNet : WeaponHolderBase {
	scope = public;
	displayName = $STR_ITEM_NAME_CAMONET;
//	model = "dayz_equip\proxy\tentbag.p3d"; // was models\tentbag_gear.prd ...
	model = "z\addons\dayz_communityassets\models\packed_net_green.p3d"; // was models\tentbag_gear.prd ...
	destrType = "DestructNo";

	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','forest_net_kit'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemDomeTent : WeaponHolderBase {
	scope = public;
	displayName = $STR_VEH_NAME_DOME_TENT;
	model = "\dayz_equip\proxy\tentbag.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemDomeTent'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemDesertTent : WeaponHolderBase {
	scope = public;
	displayName = $STR_VEH_NAME_DESERT_TENT;
	model = "\dayz_equip\proxy\tentbag.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemDesertTent'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemCrate : WeaponHolderBase {
	scope = public;
	displayName = $STR_ITEM_NAME_equip_crate;
	model = "\z\addons\dayz_communityassets\models\crate.p3d";
	destrType = "DestructNo";
		
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','equip_crate'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};
