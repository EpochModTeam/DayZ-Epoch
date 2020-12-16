class ReammoBox_EP1;	// External class reference
class Bag_Base_EP1 : ReammoBox_EP1 {	
	scope = 0;
	class TransportMagazines {};
	class TransportWeapons {};
	transportMaxMagazines = 0;
	transportMaxWeapons = 0;
	isbackpack = 1;
	mapsize = 2;
	reversed = true;
	vehicleClass = "Backpacks";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa"; 

	class DestructionEffects {};

	class eventHandlers {
		init = "";
	};
};

class DZ_Patrol_Pack_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_PATROL;
	descriptionShort = $STR_BACKPACK_DESC_PATROL;
	picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_COYOTE_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault_Coyote.p3d";
	transportMaxWeapons = 2;
	transportMaxMagazines = 10;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_Patrol_Pack_EP1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};

class DZ_Assault_Pack_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_ACU;
	descriptionShort = $STR_BACKPACK_DESC_ACU;
	picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault.p3d";
	transportMaxWeapons = 2;
	transportMaxMagazines = 12;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_Assault_Pack_EP1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};

class DZ_Czech_Vest_Pouch: Bag_Base_EP1
{
	scope = 2;
	displayname = $STR_BACKPACK_NAME_VEST;
	descriptionShort = $STR_BACKPACK_DESC_VEST;
	model = "\ca\weapons_e\AmmoBoxes\backpack_acr_small.p3d";
	picture = "\ca\weapons_e\data\icons\backpack_ACR_small_CA.paa";	
	transportmaxmagazines = 12;
	transportmaxweapons = 2;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_Czech_Vest_Pouch'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};

class DZ_ALICE_Pack_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_ALICE;
	descriptionShort = $STR_BACKPACK_DESC_ALICE;
	picture = "\ca\weapons_e\data\icons\backpack_TK_ALICE_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_tk_alice.p3d";
	transportMaxWeapons = 4;
	transportMaxMagazines = 20;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_ALICE_Pack_EP1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};

class DZ_TK_Assault_Pack_EP1 : Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_SURVACU;
	descriptionShort = $STR_BACKPACK_DESC_SURVACU;
	picture = "\ca\weapons_e\data\icons\backpack_CIVIL_ASSAULT_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_civil_assault.p3d";
	transportMaxWeapons = 4;
	transportMaxMagazines = 22;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_TK_Assault_Pack_EP1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};

class DZ_British_ACU : Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_BRITISH;
	descriptionShort = $STR_BACKPACK_DESC_BRITISH;
	model = "\ca\weapons_baf\Backpack_Small_BAF";
	picture = "\ca\weapons_baf\data\UI\backpack_BAF_CA.paa";
	transportMaxWeapons = 6;
	transportMaxMagazines = 30;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_British_ACU'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};

class DZ_CivilBackpack_EP1: Bag_Base_EP1    
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_CZECH;
	descriptionShort = $STR_BACKPACK_DESC_CZECH;
	picture = "\ca\weapons_e\data\icons\backpack_ACR_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_acr.p3d";
	transportMaxWeapons = 8;
	transportMaxMagazines = 40;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_CivilBackpack_EP1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};

class DZ_Backpack_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_COYOTE;
	descriptionShort = $STR_BACKPACK_DESC_COYOTE;
	picture = "\ca\weapons_e\data\icons\backpack_US_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_us.p3d";
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_Backpack_EP1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};

class DZ_LargeGunBag_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_EPOCH_PACK_LGB;
	descriptionShort = $STR_EPOCH_PACK_DESC_LGB;
	model = "\ca\weapons_e\AmmoBoxes\StaticX.p3d"; 
	picture = "\ca\weapons_e\data\icons\staticX_CA.paa"; 
	transportMaxWeapons = 12;
	transportMaxMagazines = 60;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_LargeGunBag_EP1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class DZ_GunBag_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_EPOCH_PACK_GB;
	descriptionShort = $STR_EPOCH_PACK_DESC_GB;
	model = "\ca\weapons_e\AmmoBoxes\StaticY.p3d"; 
	picture = "\ca\weapons_e\data\icons\staticY_CA.paa"; 
	transportMaxWeapons = 7;
	transportMaxMagazines = 35;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_GunBag_EP1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class DZ_CompactPack_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_EPOCH_PACK_COMPACT; 
	descriptionShort = $STR_EPOCH_PACK_DESC_COMPACT;
	picture = "\ca\weapons_e\data\icons\backpack_RPG_CA.paa"; 
	model = "\ca\weapons_e\AmmoBoxes\backpack_rpg.p3d"; 
	transportMaxWeapons = 5;
	transportMaxMagazines = 25;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_CompactPack_EP1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class DZ_TerminalPack_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_EPOCH_PACK_TERMINAL; 
	descriptionShort = $STR_EPOCH_PACK_DESC_TERMINAL;
	picture = "\dayz_epoch_c\icons\backpacks\terminalpack.paa"; 
	model = "\ca\weapons_e\AmmoBoxes\backpack_us_AUV"; 
	transportMaxWeapons = 3;
	transportMaxMagazines = 15;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_TerminalPack_EP1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};

//new epoch 107 classes (DZE1 = standard, DZE2 = upgraded)
class Patrol_Pack_DZE1 : DZ_Patrol_Pack_EP1 
{
	displayName = $STR_BACKPACK_NAME_PATROL_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_PATROL_DZE1;
	transportMaxWeapons = 2;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','Patrol_Pack_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class Patrol_Pack_DZE2 : Patrol_Pack_DZE1 
{
	displayname = $STR_BACKPACK_NAME_PATROL_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_PATROL_DZE2;
	transportMaxWeapons = 3;
	transportMaxMagazines = 15;	
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','Patrol_Pack_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class GymBag_Camo_DZE1 : Bag_Base_EP1 
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_GYMBAG_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_GYMBAG_DZE1;
	model = "\z\addons\dayz_epoch_u\clothes\dze_gymbag_01"; 
	picture = "\dayz_epoch_c\icons\backpacks\gymbag_camo.paa";
	transportMaxMagazines = 10;	
	transportMaxWeapons = 2;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','GymBag_Camo_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class GymBag_Camo_DZE2 : Bag_Base_EP1 
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_GYMBAG_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_GYMBAG_DZE2;
	model = "\z\addons\dayz_epoch_u\clothes\dze_gymbag_01"; 
	picture = "\dayz_epoch_c\icons\backpacks\gymbag_camo.paa";
	transportMaxWeapons = 3;
	transportMaxMagazines = 15;	
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','GymBag_Camo_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class GymBag_Green_DZE1 : GymBag_Camo_DZE1 
{
	model = "\z\addons\dayz_epoch_u\clothes\dze_gymbag_yellow"; 
	picture = "\dayz_epoch_c\icons\backpacks\gymbag_green.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','GymBag_Green_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class GymBag_Green_DZE2 : GymBag_Camo_DZE2 
{
	model = "\z\addons\dayz_epoch_u\clothes\dze_gymbag_yellow"; 
	picture = "\dayz_epoch_c\icons\backpacks\gymbag_green.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','GymBag_Green_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class Czech_Vest_Pouch_DZE1 : DZ_Czech_Vest_Pouch 
{
	displayName = $STR_BACKPACK_NAME_VEST_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_VEST_DZE1;
	transportMaxWeapons = 2;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','Czech_Vest_Pouch_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class Czech_Vest_Pouch_DZE2 : Czech_Vest_Pouch_DZE1 
{
	displayname = $STR_BACKPACK_NAME_VEST_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_VEST_DZE2;
	transportMaxWeapons = 3;
	transportMaxMagazines = 17;	
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','Czech_Vest_Pouch_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class Assault_Pack_DZE1 : DZ_Assault_Pack_EP1 
{
	displayname = $STR_BACKPACK_NAME_ACU_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_ACU_DZE1;
	transportMaxWeapons = 3;
	transportMaxMagazines = 15;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','Assault_Pack_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class Assault_Pack_DZE2 : Assault_Pack_DZE1 
{
	displayname = $STR_BACKPACK_NAME_ACU_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_ACU_DZE2;
	transportMaxWeapons = 4;
	transportMaxMagazines = 20;	
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','Assault_Pack_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class TerminalPack_DZE1 : DZ_TerminalPack_EP1 
{
	displayname = $STR_EPOCH_PACK_TERMINAL_DZE1;
	descriptionShort = $STR_EPOCH_PACK_DESC_TERMINAL_DZE1;
	transportMaxWeapons = 3;
	transportMaxMagazines = 17;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','TerminalPack_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class TerminalPack_DZE2 : TerminalPack_DZE1 
{
	displayname = $STR_EPOCH_PACK_TERMINAL_DZE2;
	descriptionShort = $STR_EPOCH_PACK_DESC_TERMINAL_DZE2;
	transportMaxWeapons = 4;
	transportMaxMagazines = 22;	
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','TerminalPack_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class TinyPack_DZE1 : Bag_Base_EP1 
{
	scope = 2;
	displayname = $STR_EPOCH_PACK_TINY_DZE1;
	descriptionShort = $STR_EPOCH_PACK_DESC_TINY_DZE1;
	picture = "\Ca\Weapons_ACR\Data\UI\picture_backpack_acr_rpg";
	model = "\Ca\Characters_ACR\backpack_acr_rpg";
	transportMaxWeapons = 3;
	transportMaxMagazines = 18;	
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','TinyPack_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class TinyPack_DZE2 : TinyPack_DZE1 
{
	displayname = $STR_EPOCH_PACK_TINY_DZE2;
	descriptionShort = $STR_EPOCH_PACK_DESC_TINY_DZE2;
	transportMaxWeapons = 4;
	transportMaxMagazines = 24;	
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','TinyPack_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class ALICE_Pack_DZE1 : DZ_ALICE_Pack_EP1 
{
	displayname = $STR_BACKPACK_NAME_ALICE_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_ALICE_DZE1;
	transportMaxWeapons = 4;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','ALICE_Pack_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class ALICE_Pack_DZE2 : ALICE_Pack_DZE1 
{
	displayname = $STR_BACKPACK_NAME_ALICE_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_ALICE_DZE2;
	transportMaxWeapons = 5;
	transportMaxMagazines = 25;	
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','ALICE_Pack_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class TK_Assault_Pack_DZE1 : DZ_TK_Assault_Pack_EP1 
{
	displayname = $STR_BACKPACK_NAME_SURVACU_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_SURVACU_DZE1;
	transportMaxWeapons = 4;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','TK_Assault_Pack_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class TK_Assault_Pack_DZE2 : TK_Assault_Pack_DZE1 
{
	displayname = $STR_BACKPACK_NAME_SURVACU_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_SURVACU_DZE2;
	transportMaxWeapons = 5;
	transportMaxMagazines = 27;	
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','TK_Assault_Pack_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class School_Bag_DZE1 : Bag_Base_EP1 
{
	scope = 2;
	displayname = $STR_BACKPACK_NAME_SCHOOLBAG_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_SCHOOLBAG_DZE1;
	model = "\z\addons\dayz_epoch_u\clothes\dze_canvasbag_01"; 
	picture = "\dayz_epoch_c\icons\backpacks\schoolbag.paa";
	transportMaxMagazines = 24;	
	transportMaxWeapons = 4;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','School_Bag_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class School_Bag_DZE2 : Bag_Base_EP1 
{
	scope = 2;
	displayname = $STR_BACKPACK_NAME_SCHOOLBAG_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_SCHOOLBAG_DZE2;
	model = "\z\addons\dayz_epoch_u\clothes\dze_canvasbag_01"; 
	picture = "\dayz_epoch_c\icons\backpacks\schoolbag.paa";
	transportMaxWeapons = 6;
	transportMaxMagazines = 30;	
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','School_Bag_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CompactPack_DZE1 : DZ_CompactPack_EP1 
{
	displayname = $STR_EPOCH_PACK_COMPACT_DZE1;
	descriptionShort = $STR_EPOCH_PACK_DESC_COMPACT_DZE1;
	transportMaxWeapons = 5;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CompactPack_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CompactPack_DZE2 : CompactPack_DZE1 
{
	displayname = $STR_EPOCH_PACK_COMPACT_DZE2;
	descriptionShort = $STR_EPOCH_PACK_DESC_COMPACT_DZE2;
	transportMaxWeapons = 6;
	transportMaxMagazines = 30;	
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CompactPack_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class British_ACU_DZE1 : DZ_British_ACU 
{
	displayname = $STR_BACKPACK_NAME_BRITISH_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_BRITISH_DZE1;
	transportMaxWeapons = 6;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','British_ACU_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class British_ACU_DZE2 : British_ACU_DZE1 
{
	displayname = $STR_BACKPACK_NAME_BRITISH_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_BRITISH_DZE2;
	transportMaxWeapons = 7;
	transportMaxMagazines = 35;	
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','British_ACU_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class GunBag_DZE1 : DZ_GunBag_EP1 
{
	displayname = $STR_EPOCH_PACK_GB_DZE1;
	descriptionShort = $STR_EPOCH_PACK_DESC_GB_DZE1;
	transportMaxWeapons = 7;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','GunBag_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class GunBag_DZE2 : GunBag_DZE1 
{
	displayname = $STR_EPOCH_PACK_GB_DZE2;
	descriptionShort = $STR_EPOCH_PACK_DESC_GB_DZE2;
	transportMaxWeapons = 8;
	transportMaxMagazines = 40;	
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','GunBag_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class PartyPack_DZE1 : Bag_Base_EP1 
{
	scope = 2;
	displayname = $STR_EPOCH_PACK_PARTYPACK_DZE1;
	descriptionShort = $STR_EPOCH_PACK_DESC_PARTYPACK_DZE1;
	picture = "\dayz_epoch_c\icons\backpacks\partypack.paa";
	model = "\z\addons\dayz_epoch_u\clothes\dze_canvasbag_02"; 
	transportMaxMagazines = 36;	
	transportMaxWeapons = 7;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','PartyPack_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class PartyPack_DZE2 : Bag_Base_EP1 
{
	scope = 2;
	displayname = $STR_EPOCH_PACK_PARTYPACK_DZE2;
	descriptionShort = $STR_EPOCH_PACK_DESC_PARTYPACK_DZE2;
	picture = "\dayz_epoch_c\icons\backpacks\partypack.paa";
	model = "\z\addons\dayz_epoch_u\clothes\dze_canvasbag_02"; 
	transportMaxWeapons = 8;
	transportMaxMagazines = 42;	
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','PartyPack_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class NightPack_DZE1 : Bag_Base_EP1 		//new ice apo resistance mod backpack
{
	scope = 2;
	displayname = $STR_BACKPACK_NAME_APO1_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_APO1_DZE1;
	model = "\ice_apo_resistance\Backpack1.p3d";
	picture = "\ice_apo_resistance\icons\backpack1_ca.paa";
	transportMaxWeapons = 7;
	transportMaxMagazines = 35;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','NightPack_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class NightPack_DZE2 : NightPack_DZE1 
{
	displayname = $STR_BACKPACK_NAME_APO1_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_APO1_DZE2;
	transportMaxWeapons = 8;
	transportMaxMagazines = 40;	
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','NightPack_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class SurvivorPack_DZE1 : Bag_Base_EP1 		//new ice apo resistance mod backpack
{
	scope = 2;
	displayname = $STR_BACKPACK_NAME_APO2_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_APO2_DZE1;
	model = "\ice_apo_resistance\Backpack4.p3d";
	picture = "\ice_apo_resistance\icons\backpack4_ca.paa";
	transportMaxWeapons = 8;
	transportMaxMagazines = 40;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','SurvivorPack_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class SurvivorPack_DZE2 : SurvivorPack_DZE1 
{
	displayname = $STR_BACKPACK_NAME_APO2_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_APO2_DZE2;
	transportMaxWeapons = 9;
	transportMaxMagazines = 45;	
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','SurvivorPack_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CzechBackpack_DZE1 : DZ_CivilBackpack_EP1 
{
	displayname = $STR_BACKPACK_NAME_CZECH_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_DZE1;
	transportMaxWeapons = 9;
	transportMaxMagazines = 45;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CzechBackpack_DZE2 : CzechBackpack_DZE1 
{
	displayname = $STR_BACKPACK_NAME_CZECH_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_DZE2;
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;	
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CzechBackpack_Camping_DZE1 : CzechBackpack_DZE1 
{
	model = "\z\addons\dayz_epoch_u\clothes\dze_survivorpack_01"; 
	picture = "\dayz_epoch_c\icons\backpacks\20_backpack_camping.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_Camping_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CzechBackpack_Camping_DZE2 : CzechBackpack_DZE2 
{
	model = "\z\addons\dayz_epoch_u\clothes\dze_survivorpack_01"; 
	picture = "\dayz_epoch_c\icons\backpacks\20_backpack_camping.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_Camping_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CzechBackpack_OD_DZE1 : CzechBackpack_DZE1 		//new LEN mod Czech Pack variants
{
	scope = 2;
	model = "\len_backpacks\backpack_odr.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\01_backpack_odr.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_OD_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class CzechBackpack_OD_DZE2 : CzechBackpack_DZE2 
{
	model = "\len_backpacks\backpack_odr.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\01_backpack_odr.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_OD_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CzechBackpack_DES_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_des.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\02_backpack_des.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_DES_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class CzechBackpack_DES_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_des.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\02_backpack_des.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_DES_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CzechBackpack_3DES_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_3ds.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\03_backpack_3ds.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_3DES_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class CzechBackpack_3DES_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_3ds.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\03_backpack_3ds.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_3DES_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CzechBackpack_WDL_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_wdl.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\04_backpack_wdl.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_WDL_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class CzechBackpack_WDL_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_wdl.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\04_backpack_wdl.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_WDL_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CzechBackpack_MAR_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_mar.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\05_backpack_mar.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_MAR_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class CzechBackpack_MAR_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_mar.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\05_backpack_mar.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_MAR_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CzechBackpack_DMAR_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_dmr.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\06_backpack_dmr.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_DMAR_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class CzechBackpack_DMAR_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_dmr.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\06_backpack_dmr.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_DMAR_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CzechBackpack_UCP_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_ucp.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\07_backpack_ucp.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_UCP_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class CzechBackpack_UCP_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_ucp.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\07_backpack_ucp.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_UCP_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CzechBackpack_6DES_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_6ds.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\08_backpack_6ds.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_6DES_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class CzechBackpack_6DES_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_6ds.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\08_backpack_6ds.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_6DES_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CzechBackpack_TAK_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_tak.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\09_backpack_tak.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_TAK_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class CzechBackpack_TAK_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_tak.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\09_backpack_tak.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_TAK_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CzechBackpack_NVG_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_nvg.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\10_backpack_nvg.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_NVG_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class CzechBackpack_NVG_DZE2 : CzechBackpack_OD_DZE2
{
	model = "\len_backpacks\backpack_nvg.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\10_backpack_nvg.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_NVG_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CzechBackpack_BLK_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_blk.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\11_backpack_blk.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_BLK_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class CzechBackpack_BLK_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_blk.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\11_backpack_blk.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_BLK_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CzechBackpack_DPM_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_dpm.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\12_backpack_dpm.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_DPM_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class CzechBackpack_DPM_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_dpm.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\12_backpack_dpm.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_DPM_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CzechBackpack_FIN_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_fin.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\13_backpack_fin.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_FIN_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class CzechBackpack_FIN_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_fin.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\13_backpack_fin.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_FIN_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CzechBackpack_MTC_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_mtc.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\14_backpack_mtc.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_MTC_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class CzechBackpack_MTC_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_mtc.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\14_backpack_mtc.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_MTC_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CzechBackpack_NOR_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_nor.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\15_backpack_nor.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_NOR_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class CzechBackpack_NOR_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_nor.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\15_backpack_nor.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_NOR_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CzechBackpack_WIN_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_win.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\16_backpack_win.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_WIN_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class CzechBackpack_WIN_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_win.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\16_backpack_win.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_WIN_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CzechBackpack_ATC_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_atc.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\17_backpack_atc.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_ATC_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class CzechBackpack_ATC_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_atc.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\17_backpack_atc.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_ATC_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CzechBackpack_MTL_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_mtl.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\18_backpack_mtl.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_MTL_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class CzechBackpack_MTL_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_mtl.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\18_backpack_mtl.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_MTL_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CzechBackpack_FTN_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_ftn.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\19_backpack_ftn.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_FTN_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class CzechBackpack_FTN_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_ftn.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\19_backpack_ftn.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CzechBackpack_FTN_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class WandererBackpack_DZE1 : Bag_Base_EP1 		//new ice apo resistance mod backpack
{
	scope = 2;
	displayname = $STR_BACKPACK_NAME_APO3_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_APO3_DZE1;
	model = "\ice_apo_resistance\Backpack3.p3d";
	picture = "\ice_apo_resistance\icons\backpack3_ca.paa";
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','WandererBackpack_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class WandererBackpack_DZE2 : WandererBackpack_DZE1 
{
	displayname = $STR_BACKPACK_NAME_APO3_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_APO3_DZE2;
	transportMaxWeapons = 11;
	transportMaxMagazines = 55;	
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','WandererBackpack_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class LegendBackpack_DZE1 : Bag_Base_EP1 		//new ice apo resistance mod backpack
{		
	scope = 2;
	displayname = $STR_BACKPACK_NAME_APO4_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_APO4_DZE1;
	model = "\ice_apo_resistance\Backpack2.p3d";
	picture = "\ice_apo_resistance\icons\backpack2_ca.paa";
	transportMaxWeapons = 11;
	transportMaxMagazines = 55;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','LegendBackpack_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class LegendBackpack_DZE2 : LegendBackpack_DZE1 
{
	displayname = $STR_BACKPACK_NAME_APO4_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_APO4_DZE2;
	transportMaxWeapons = 12;
	transportMaxMagazines = 60;	
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','LegendBackpack_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CoyoteBackpack_DZE1 : DZ_Backpack_EP1 
{
	displayname = $STR_BACKPACK_NAME_COYOTE_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_COYOTE_DZE1;
	transportMaxWeapons = 12;
	transportMaxMagazines = 60;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CoyoteBackpack_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CoyoteBackpack_DZE2 : CoyoteBackpack_DZE1 
{
	displayname = $STR_BACKPACK_NAME_COYOTE_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_COYOTE_DZE2;
	transportMaxWeapons = 13;
	transportMaxMagazines = 65;	
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CoyoteBackpack_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CoyoteBackpackDes_DZE1: CoyoteBackpack_DZE1		//new KSK mod coyote backpack variant
{
	model = "\ksk_mod\backpack_ger_des.p3d";
	picture = "\ksk_mod\backpack_des_ca.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CoyoteBackpackDes_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class CoyoteBackpackDes_DZE2 : CoyoteBackpack_DZE2 
{
	model = "\ksk_mod\backpack_ger_des.p3d";
	picture = "\ksk_mod\backpack_des_ca.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CoyoteBackpackDes_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CoyoteBackpackWdl_DZE1: CoyoteBackpack_DZE1		//new KSK mod coyote backpack variant
{
	model = "\ksk_mod\backpack_ger_wdl.p3d";
	picture = "\ksk_mod\backpack_wdl_ca.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CoyoteBackpackWdl_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class CoyoteBackpackWdl_DZE2 : CoyoteBackpack_DZE2 
{
	model = "\ksk_mod\backpack_ger_wdl.p3d";
	picture = "\ksk_mod\backpack_wdl_ca.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CoyoteBackpackWdl_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class CoyoteBackpack_Camping_DZE1: CoyoteBackpack_DZE1
{
	model = "\z\addons\dayz_epoch_u\clothes\dze_survivorpack_02"; 
	picture = "\dayz_epoch_c\icons\backpacks\coyote_camping.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CoyoteBackpack_Camping_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};
};
class CoyoteBackpack_Camping_DZE2 : CoyoteBackpack_DZE2 
{
	model = "\z\addons\dayz_epoch_u\clothes\dze_survivorpack_02"; 
	picture = "\dayz_epoch_c\icons\backpacks\coyote_camping.paa";
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','CoyoteBackpack_Camping_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class LargeGunBag_DZE1 : DZ_LargeGunBag_EP1 
{
	displayname = $STR_EPOCH_PACK_LGB_DZE1;
	descriptionShort = $STR_EPOCH_PACK_DESC_LGB_DZE1;	
	transportMaxWeapons = 13;
	transportMaxMagazines = 65;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','LargeGunBag_DZE1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};
class LargeGunBag_DZE2 : LargeGunBag_DZE1 
{
	displayname = $STR_EPOCH_PACK_LGB_DZE2;
	descriptionShort = $STR_EPOCH_PACK_DESC_LGB_DZE2;
	transportMaxWeapons = 14;
	transportMaxMagazines = 70;	
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','LargeGunBag_DZE2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_BackpackAction.sqf';";
	};	
};