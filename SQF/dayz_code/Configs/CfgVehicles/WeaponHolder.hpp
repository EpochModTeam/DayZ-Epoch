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
	displayName = $STR_ITEM_NAME_JERRYCAN_EMPTY;
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

class WeaponHolder_ItemTentWinter : WeaponHolderBase {
	scope = 2;
	displayName = $STR_VEH_NAME_TENTWINTER;
	model = "\dayz_equip\proxy\tentbag.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemTentWinter'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemWinterDomeTent : WeaponHolderBase {
	scope = 2;
	displayName = $STR_VEH_NAME_WINTER_DOME_TENT;
	model = "\dayz_equip\proxy\tentbag.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemWinterDomeTent'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
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
	displayName = $STR_EQUIP_NAME_CAMPING_TENT;
	model = "\dayz_equip\proxy\tentbag.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemTent'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemFlashlight : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EQUIP_NAME_FLASHLIGHT;
	model = "\dayz_equip\proxy\flashlight.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgWeapons','ItemFlashlight'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemFlashlightRed : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EQUIP_NAME_FLASHLIGHT_MILITARY;
	model = "\dayz_equip\proxy\flashlight_mil.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgWeapons','ItemFlashlightRed'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemWaterbottle : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EQUIP_NAME_WATER_BOTTLE;
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
	displayName = $STR_EQUIP_NAME_TOOLBOX;
	model = "\dayz_equip\proxy\toolbox.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgWeapons','ItemToolbox'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_PartFueltank : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EQUIP_NAME_FUELTANK;
	model = "\dayz_equip\proxy\fueltank.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','PartFueltank'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_PartWheel : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EQUIP_NAME_CAR_WHEEL;
	model = "\dayz_equip\proxy\wheel.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','PartWheel'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_PartGeneric : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EQUIP_NAME_SCRAP_METAL;
	model = "\dayz_equip\proxy\genericparts.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','PartGeneric'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_PartVRotor : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EQUIP_NAME_MAIN_ROTOR;
	model = "\dayz_equip\proxy\vrotor.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','PartVRotor'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_PartEngine : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EQUIP_NAME_ENGINE;
	model = "\dayz_equip\proxy\engine.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','PartEngine'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_PartGlass : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EQUIP_NAME_WINDSCREEN_GLASS;
	model = "\dayz_equip\proxy\carglass.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','PartGlass'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemNotebook : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EPOCH_ITEM_NOTEBOOK;
	model = "\CA\misc2\notebook\notebook.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemNotebook'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";		
	};
};

class WeaponHolder_ItemNotebookBroken : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EPOCH_NOTEBOOK_BROKEN;
	model = "\CA\misc2\notebook\notebook.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemNotebookBroken'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";		
	};
};

class WeaponHolder_ItemSmallTV : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EPOCH_SMALL_TV;
	model = "\CA\misc2\smallTV\smallTV.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemSmallTV'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";		
	};
};

class WeaponHolder_ItemSmallTVBroken : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EPOCH_SMALL_TV_BROKEN;
	model = "\CA\misc2\smallTV\smallTV.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemSmallTVBroken'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";		
	};
};

class WeaponHolder_ItemBigTV : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EPOCH_BIG_TV;
	model = "\CA\Structures\Furniture\Eletrical_appliances\tv_a\tv_a.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemBigTV'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";		
	};
};

class WeaponHolder_ItemBigTVBroken : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EPOCH_BIG_TV_BROKEN;
	model = "\CA\Structures\Furniture\Eletrical_appliances\tv_a\tv_a.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemBigTVBroken'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";		
	};
};

class WeaponHolder_ItemSatelitePhone : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EPOCH_SATELLITE_PHONE;
	model = "\CA\misc3\satelitePhone\satellitePhone.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemSatelitePhone'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";		
	};
};

class WeaponHolder_ItemSatelitePhoneBroken : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EPOCH_SATELLITE_PHONE_BROKEN;
	model = "\CA\misc3\satelitePhone\satellitePhone.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemSatelitePhoneBroken'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";		
	};
};

class WeaponHolder_ItemPC : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EPOCH_PC;
	model = "\CA\Structures\Furniture\Eletrical_appliances\pc\pc.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemPC'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";		
	};
};

class WeaponHolder_ItemPCBroken: WeaponHolderBase {
	scope = 2;
	displayName = $STR_EPOCH_PC_BROKEN;
	model = "\CA\Structures\Furniture\Eletrical_appliances\pc\pc.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemPCBroken'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";		
	};
};

class WeaponHolder_ItemDesktopRadio : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EPOCH_DESKTOP_RADIO;
	model = "\CA\misc\mutt_vysilacka.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemDesktopRadio'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";		
	};
};

class WeaponHolder_ItemDesktopRadioBroken : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EPOCH_DESKTOP_RADIO_BROKEN;
	model = "\CA\misc\mutt_vysilacka.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemDesktopRadioBroken'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";		
	};
};

class WeaponHolder_ItemMusicRadio1 : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EPOCH_RADIO_MUSIC1;
	model = "\CA\misc\radio.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemMusicRadio1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";		
	};
};

class WeaponHolder_ItemMusicRadio1Broken : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EPOCH_RADIO_MUSIC1_BROKEN;
	model = "\CA\misc\radio.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemMusicRadio1Broken'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";		
	};
};

class WeaponHolder_ItemMusicRadio2 : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EPOCH_RADIO_MUSIC2;
	model = "\CA\Structures\Furniture\Eletrical_appliances\radio_b\radio_b.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemMusicRadio2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";		
	};
};

class WeaponHolder_ItemMusicRadio2Broken : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EPOCH_RADIO_MUSIC2_BROKEN;
	model = "\CA\Structures\Furniture\Eletrical_appliances\radio_b\radio_b.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemMusicRadio2Broken'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";		
	};
};

class WeaponHolder_ItemBucket : WeaponHolderBase {
	scope = 2;
	displayName = $STR_EPOCH_METAL_BUCKET;
	model = "\CA\Structures\Furniture\Decoration\bucket\bucket.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemBucket'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";		
	};
};

class WeaponHolder_ItemJerrycan : WeaponHolderBase {
	scope = 2;
	displayName = $STR_ITEM_NAME_JERRYCAN;
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

class WeaponHolder_ItemVaultBroken: WeaponHolder {
	scope = 1;
	displayName = $STR_EPOCH_SAFE_BROKEN;
	seedItem = "ItemVaultBroken";
};

class WeaponHolder_ItemVaultBroken2: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_SAFE_BROKEN+";
	seedItem = "ItemVaultBroken2";
};

class WeaponHolder_ItemTallSafeBroken: WeaponHolder {
	scope = 1;
	displayName = $STR_EPOCH_SAFE_BROKEN;
	seedItem = "ItemTallSafeBroken";
};

class WeaponHolder_ItemLockboxBroken: WeaponHolder {
	scope = 1;
	displayName = $STR_EPOCH_LOCKBOX_BROKEN;
	seedItem = "ItemLockboxBroken";
};

class WeaponHolder_ItemLockbox2Broken: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_LOCKBOX_BROKEN+";
	seedItem = "ItemLockbox2Broken";
};

class WeaponHolder_ItemLockboxWinterBroken: WeaponHolder {
	scope = 1;
	displayName = $STR_EPOCH_LOCKBOX_BROKEN;
	seedItem = "ItemLockboxWinterBroken";
};

class WeaponHolder_ItemLockboxWinter2Broken: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_LOCKBOX_BROKEN+";
	seedItem = "ItemLockboxWinter2Broken";
};
class WeaponHolder_ItemStorageBarrel1_kit: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_STORAGEBARRELREDKIT_DESC";
    model = "\CA\misc\Barel1.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemStorageBarrel1_kit'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";		
	};
};
class WeaponHolder_ItemStorageBarrel2_kit: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_STORAGEBARRELEPOCHKIT_DESC";
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemStorageBarrel2_kit'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";		
	};
};
class WeaponHolder_ItemStorageBarrel3_kit: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_STORAGEBARRELEYELLOWKIT_DESC";
    model = "\CA\misc\Barel3.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemStorageBarrel3_kit'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";		
	};
};
class WeaponHolder_ItemStorageBarrel4_kit: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_STORAGEBARRELBLACKKIT_DESC";
    model = "\CA\misc\Barel4.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemStorageBarrel4_kit'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";		
	};
};
class WeaponHolder_ItemStorageBarrel5_kit: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_STORAGEBARRELGREENDARKKIT_DESC";
    model = "\CA\misc\Barel5.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemStorageBarrel5_kit'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";		
	};
};
class WeaponHolder_ItemStorageBarrel6_kit: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_STORAGEBARRELMILKKIT_DESC";
    model = "\CA\misc\Barel6.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemStorageBarrel6_kit'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";		
	};
};
class WeaponHolder_ItemStorageBarrel7_kit: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_STORAGEBARRELGREENKIT_DESC";
    model = "\CA\misc\Barel7.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemStorageBarrel7_kit'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";		
	};
};
class WeaponHolder_ItemStorageBarrel8_kit: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_STORAGEBARRELGREENRUSTYKIT_DESC";
    model = "\CA\misc\Barel8.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemStorageBarrel8_kit'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";		
	};
};