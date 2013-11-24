class ReammoBox_EP1;	// External class reference
class Bag_Base_EP1 : ReammoBox_EP1 {
	scope = private;

	class TransportMagazines {};

	class TransportWeapons {};
	transportMaxMagazines = 0;
	transportMaxWeapons = 0;
	isbackpack = 1;
	reversed = true;
	vehicleClass = "Backpacks";

	class DestructionEffects {};

	class eventHandlers {
		init = "";
	};
};

class DZ_Patrol_Pack_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = "Patrol Pack (coyote)";
	picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_COYOTE_CA.paa";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	mapsize = 2;
	model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault_Coyote.p3d";
	transportMaxWeapons = 1;
	transportMaxMagazines = 10;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_Patrol_Pack_EP1'] execVM '\z\addons\dayz_code\init\object_BackpackAction.sqf';";
	};
};

class DZ_Assault_Pack_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = "Assault Pack (ACU)";
	picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_CA.paa";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	mapSize = 2;
	model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault.p3d";
	transportMaxWeapons = 1;
	transportMaxMagazines = 12;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_Assault_Pack_EP1'] execVM '\z\addons\dayz_code\init\object_BackpackAction.sqf';";
	};
};

class DZ_Czech_Vest_Puch: Bag_Base_EP1
{
	displayname = "Czech Vest Pouch";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	mapsize = 2;
	model = "\ca\weapons_e\AmmoBoxes\backpack_acr_small.p3d";
	picture = "\ca\weapons_e\data\icons\backpack_ACR_small_CA.paa";
	scope = 2;
	transportmaxmagazines = 12;
	transportmaxweapons = 0;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_Czech_Vest_Puch'] execVM '\z\addons\dayz_code\init\object_BackpackAction.sqf';";
	};
};

class DZ_ALICE_Pack_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = "ALICE Pack";
	picture = "\ca\weapons_e\data\icons\backpack_TK_ALICE_CA.paa";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	mapsize = 2;
	model = "\ca\weapons_e\AmmoBoxes\backpack_tk_alice.p3d";
	transportMaxWeapons = 2;
	transportMaxMagazines = 20;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_ALICE_Pack_EP1'] execVM '\z\addons\dayz_code\init\object_BackpackAction.sqf';";
	};
};

class DZ_TK_Assault_Pack_EP1 : Bag_Base_EP1
{
	scope = 2;
	displayName = "Survival ACU";
	mapSize = 2;
	picture = "\ca\weapons_e\data\icons\backpack_CIVIL_ASSAULT_CA.paa";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_civil_assault.p3d";
	transportMaxWeapons = 2;
	transportMaxMagazines = 22;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_TK_Assault_Pack_EP1'] execVM '\z\addons\dayz_code\init\object_BackpackAction.sqf';";
	};
};

class DZ_British_ACU : Bag_Base_EP1
{
	scope = 2;
	displayName = "British Assault Pack";
	mapSize = 2;
	model = "\ca\weapons_baf\Backpack_Small_BAF";\
	picture = "\ca\weapons_baf\data\UI\backpack_BAF_CA.paa";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	transportMaxWeapons = 3;
	transportMaxMagazines = 30;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_British_ACU'] execVM '\z\addons\dayz_code\init\object_BackpackAction.sqf';";
	};
};

class DZ_CivilBackpack_EP1: Bag_Base_EP1    
{
	scope = 2;
	displayName = "Czech Backpack";
	picture = "\ca\weapons_e\data\icons\backpack_ACR_CA.paa";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	mapsize = 2;
	model = "\ca\weapons_e\AmmoBoxes\backpack_acr.p3d";
	transportMaxWeapons = 4;
	transportMaxMagazines = 40;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_CivilBackpack_EP1'] execVM '\z\addons\dayz_code\init\object_BackpackAction.sqf';";
	};
};

class DZ_Backpack_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = "Backpack (coyote)";
	picture = "\ca\weapons_e\data\icons\backpack_US_CA.paa";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	mapsize = 2;
	model = "\ca\weapons_e\AmmoBoxes\backpack_us.p3d";
	transportMaxWeapons = 5;
	transportMaxMagazines = 50;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_Backpack_EP1'] execVM '\z\addons\dayz_code\init\object_BackpackAction.sqf';";
	};
};

class DZ_LargeGunBag_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = "Large Gunbag";
	model = "\ca\weapons_e\AmmoBoxes\StaticX.p3d"; 
	picture = "\ca\weapons_e\data\icons\staticX_CA.paa"; 
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa"; 
	mapsize = 2;
	transportMaxWeapons = 6;
	transportMaxMagazines = 60;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_LargeGunBag_EP1'] execVM '\z\addons\dayz_code\init\object_BackpackAction.sqf';";
	};
};
class DZ_GunBag_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = "Gunbag";
	model = "\ca\weapons_e\AmmoBoxes\StaticY.p3d"; 
	picture = "\ca\weapons_e\data\icons\staticY_CA.paa"; 
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa"; 
	mapsize = 2;
	transportMaxWeapons = 3;
	transportMaxMagazines = 35;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_GunBag_EP1'] execVM '\z\addons\dayz_code\init\object_BackpackAction.sqf';";
	};
};
class DZ_CompactPack_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = "Compact Pack"; 
	picture = "\ca\weapons_e\data\icons\backpack_RPG_CA.paa"; 
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa"; 
	mapsize = 2; 
	model = "\ca\weapons_e\AmmoBoxes\backpack_rpg.p3d"; 
	transportMaxWeapons = 2;
	transportMaxMagazines = 25;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_CompactPack_EP1'] execVM '\z\addons\dayz_code\init\object_BackpackAction.sqf';";
	};
};
class DZ_TerminalPack_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = "Terminal Pack"; 
	picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_CA.paa"; 
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa"; 
	mapSize = 2; 
	model = "\ca\weapons_e\AmmoBoxes\backpack_us_AUV"; 
	transportMaxWeapons = 1;
	transportMaxMagazines = 15;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_TerminalPack_EP1'] execVM '\z\addons\dayz_code\init\object_BackpackAction.sqf';";
	};
};
