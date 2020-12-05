class WeaponHolderBase: ReammoBox {
	vehicleClass = "DayZ Epoch Weaponholder";
};

class WoodenArrowF : WeaponHolderBase {
	scope = 2;
	displayName = $STR_ITEMWOODENARROW_CODE_NAME;
	model = "\dayz_weapons\models\bolt";
	destrType = "DestructNo";

	class eventHandlers
	{
		init = "[(_this select 0),'cfgMagazines','1Rnd_Arrow_Wood'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemCrowbar: WeaponHolderBase
{
	scope = 2;
	displayName=$STR_EQUIP_NAME_CROWBAR;
	model="\dayz_equip\models\crowbar.p3d";
	destrType = "DestructNo";
	
	class eventHandlers
	{
		init="[(_this select 0),'cfgWeapons','ItemCrowbar'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemPickaxe: WeaponHolderBase
{
	scope = 2;
	displayName = $STR_EQUIP_NAME_PICKAXE;
	model = "z\addons\dayz_communityweapons\models\pickaxe\pickaxe.p3d";
	destrType = "DestructNo";
	
	class eventHandlers
	{
		init="[(_this select 0),'cfgWeapons','ItemPickaxe'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemPickaxeBroken: WeaponHolder_ItemPickaxe
{
	displayName = $STR_name_ItemPickaxeBroken;
	
	class eventHandlers
	{
		init="[(_this select 0),'cfgWeapons','ItemPickaxeBroken'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemSledge : WeaponHolderBase { // Epoch class. Needed for player_dropWeapon
	scope = 2;
	displayName = $STR_EQUIP_NAME_SledgeHammer;
	model="\z\addons\dayz_epoch\models\sledge_mag.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgWeapons','ItemSledge'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};
class WeaponHolder_MeleeMachete: WeaponHolderBase
{
	scope = 2;
	displayName=$STR_EQUIP_NAME_MACHETE;
	model="\z\addons\dayz_communityassets\models\machete.p3d";
	destrType = "DestructNo";
	
	class eventHandlers
	{
		init="[(_this select 0),'cfgWeapons','MeleeMachete'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemJerrycanEmpty : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_39";
	model = "\dayz_equip\proxy\jerrycan_side.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemJerrycanEmpty'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemFuelcanEmpty : WeaponHolderBase {
	scope = 2;
	displayName = $STR_ITEM_NAME_FUELCAN_EMPTY;
	model = "z\addons\dayz_communityassets\models\fuelcan.p3d";
	destrType = "DestructNo";

	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemFuelcanEmpty'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemFuelcan : WeaponHolderBase {
	scope = 2;
	displayName = $STR_ITEM_NAME_FUELCAN;
	model = "z\addons\dayz_communityassets\models\fuelcan.p3d";
	destrType = "DestructNo";

	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemFuelcan'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemCamoNet : WeaponHolderBase {
	scope = 2;
	displayName = $STR_ITEM_NAME_CAMONET;
	model = "z\addons\dayz_communityassets\models\packed_net_green.p3d";
	destrType = "DestructNo";

	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','forest_net_kit'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemDomeTent : WeaponHolderBase {
	scope = 2;
	displayName = $STR_VEH_NAME_DOME_TENT;
	model = "\dayz_equip\proxy\tentbag.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemDomeTent'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemDesertTent : WeaponHolderBase {
	scope = 2;
	displayName = $STR_VEH_NAME_DESERT_TENT;
	model = "\dayz_equip\proxy\tentbag.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemDesertTent'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemCrate : WeaponHolderBase {
	scope = 2;
	displayName = $STR_ITEM_NAME_equip_crate;
	model = "\z\addons\dayz_communityassets\models\crate.p3d";
	destrType = "DestructNo";
		
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','equip_crate'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_Colt1911 : WeaponHolderBase {
	scope = 2;
	displayName = $STR_WPN_HOLDR_1;
	model = "\dayz_equip\proxy\Colt1911.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgWeapons','Colt1911'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemHatchet : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EQUIP_NAME_HATCHET;
	model = "\dayz_equip\models\hatchet.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgWeapons','ItemHatchet'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_MeleeCrowbar : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EQUIP_NAME_CROWBAR;
	model = "\dayz_equip\models\crowbar.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgWeapons','MeleeCrowbar'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_huntingrifle : WeaponHolderBase {
	scope = 2;
	displayName = $STR_WPN_HOLDR_2;
	model = "\dayz_equip\proxy\huntingrifle.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgWeapons','huntingrifle'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_M4A1 : WeaponHolderBase {
	scope = 2;
	displayName = $STR_WPN_HOLDR_3;
	model = "\dayz_equip\proxy\M4A1.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgWeapons','M4A1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemTent : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EQUIP_NAME_20;
	model = "\dayz_equip\proxy\tentbag.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemTent'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemFlashlight : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EQUIP_NAME_5;
	model = "\dayz_equip\proxy\flashlight.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgWeapons','ItemFlashlight'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemFlashlightRed : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EQUIP_NAME_6;
	model = "\dayz_equip\proxy\flashlight_mil.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgWeapons','ItemFlashlightRed'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemWaterbottle : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EQUIP_NAME_12;
	model = "\dayz_equip\proxy\waterbottle.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemWaterbottleUnfilled'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemGenerator : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EQUIP_NAME_31;
	model = "\dayz_equip\models\generator.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemGenerator'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";		
	};
};

class WeaponHolder_ItemToolbox : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EQUIP_NAME_2;
	model = "\dayz_equip\proxy\toolbox.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgWeapons','ItemToolbox'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_PartFueltank : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EQUIP_NAME_8;
	model = "\dayz_equip\proxy\fueltank.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','PartFueltank'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_PartWheel : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EQUIP_NAME_9;
	model = "\dayz_equip\proxy\wheel.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','PartWheel'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_PartGeneric : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EQUIP_NAME_10;
	model = "\dayz_equip\proxy\genericparts.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','PartGeneric'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_PartVRotor : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EQUIP_NAME_32;
	model = "\dayz_equip\proxy\vrotor.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','PartVRotor'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_PartEngine : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EQUIP_NAME_11;
	model = "\dayz_equip\proxy\engine.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','PartEngine'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_PartGlass : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EQUIP_NAME_30;
	model = "\dayz_equip\proxy\carglass.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','PartGlass'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemJerrycan : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EQUIP_NAME_19;
	model = "\dayz_equip\proxy\jerrycan.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemJerrycan'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemJerrycanSide : WeaponHolder_ItemJerrycan {
	model = "\dayz_equip\proxy\jerrycan_side.p3d";
};

class WeaponHolder_ItemVault: WeaponHolder {
	scope = 1;
	displayName = $STR_EPOCH_SAFE;
	seedItem = "ItemVault";
};

class WeaponHolder_ItemVault2: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_SAFE+";
	seedItem = "ItemVault2";
};

class WeaponHolder_TallSafe: WeaponHolder {
	scope = 1;
	displayName = $STR_EPOCH_SAFE;
	seedItem = "ItemTallSafe";
};

class WeaponHolder_ItemLockbox: WeaponHolder {
	scope = 1;
	displayName = $STR_EPOCH_LOCKBOX;
	seedItem = "ItemLockbox";
};

class WeaponHolder_ItemLockbox2: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_LOCKBOX+";
	seedItem = "ItemLockbox2";
};

class WeaponHolder_ItemLockboxWinter: WeaponHolder {
	scope = 1;
	displayName = $STR_EPOCH_LOCKBOX;
	seedItem = "ItemLockboxWinter";
};

class WeaponHolder_ItemLockboxWinter2: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_LOCKBOX+";
	seedItem = "ItemLockboxWinter2";
};