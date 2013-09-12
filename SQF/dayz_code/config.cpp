#define VSoft		0
#define VArmor		1
#define VAir		2

#define private		0
#define protected		1
#define public		2

#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly		2
#define ReadOnlyVerified		3

#define EAST 0 // (Russian)

#include "Configs\basicdefines.hpp"
#include "Configs\CfgNonAIVehicles.hpp"

class CfgPatches {
	class dayz_code {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"dayz_equip","dayz_weapons","dayz_sfx","CAMisc3","CABuildingParts","CABuildingParts_Signs","CAStructuresHouse","CAStructuresLand_Ind_Stack_Big","CAStructures_Misc_Powerlines","CAStructures","CABuildings","CABuildings2","Ind_MalyKomin","CAStructures_A_CraneCon","CAStructures_Mil","CAStructures_Nav","CAStructures_Rail","A_Crane_02","A_TVTower","CAStructures_Railway","CAStructuresHouse","CAStructuresHouse_HouseBT","asc_eu_lights","vilas_pl_cars","gnt_c185"};
	};
	class DZ_DebriefingRemoved
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAUI"};
	};
};
class CfgMods
{
	class DayZ
	{
		dir = "@DayZ_Epoch";
		name = "DayZ Epoch";
		picture = "z\addons\dayz_code\gui\dayz_logo_ca.paa";
		hidePicture = 0;
		hideName = 0;
		action = "http://www.dayzepoch.com";
		version = "1.0.2.14";
		hiveVersion = 0.96; //0.93
	};
};


class CfgMissions
{
	 class Cutscenes
	 {
	  class ChernarusIntro1
		  {
			directory = "z\addons\dayz_code\cfgworlds\intro.Chernarus";
		  };
	 };
};

class CfgWorlds
{
        initWorld = "Chernarus";
        demoWorld = "Chernarus";
};

class CfgAddons
{
	access = 1;
	class PreloadBanks
	{
	};
	class PreloadAddons
	{
		class dayz
		{
			list[] = {"dayz_code","dayz","dayz_equip","dayz_weapons"};
		};
	};
};

class CfgActions {
	class None; // External class reference

	class Rearm : None {
		show = 0;
	};
	/*
	class TakeBag : None {
		show = 0;
	};
	*/
	
};
class CfgAISkill {
	aimingaccuracy[] = {0, 0, 1, 1};
	aimingshake[] = {0, 0, 1, 1};
	aimingspeed[] = {0, 0, 1, 1};
	commanding[] = {0, 0, 1, 1};
	courage[] = {0, 1, 1, 1};
	endurance[] = {0, 0, 1, 1};
	general[] = {0, 0, 1, 1};
	reloadspeed[] = {0, 0, 1, 1};
	spotdistance[] = {0, 0, 1, 0.6};
	spottime[] = {0, 0, 1, 1};
};

class CfgInGameUI
{
    class PeripheralVision
    {
        cueColor[] = {0,0,0,0};
        cueFriendlyColor[] = {0,0,0,0};
        cueEnemyColor[] = {0,0,0,0};
    };

	
	class MPTable
	{
		color[] = {0,0,0,0}; //{0.7,0.7,0.7,1};
		colorTitleBg[] = {0,0,0,0}; //{0.1,0.15,0.15,1};
		colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.9};
		colorSelected[] = {0,0,0,0}; //{0.7,0.7,0.7,0.4};
		colorWest[] = {0,0,0,0}; //{0.7,0.95,0.7,1};
		colorEast[] = {0,0,0,0}; //{0.95,0.7,0.7,1};
		colorCiv[] = {0,0,0,0}; //{0.8,0.8,0.8,1};
		colorRes[] = {0,0,0,0}; //{0.7,0.7,0.95,1};
		font = "EtelkaNarrowMediumPro";
		size = "0"; //"( 21 / 408 )";
		class Columns
		{
			class Order
			{
				width = 0; //0.046;
				colorBg[] = {0,0,0,0}; //{0.1,0.27,0.1,0.8};
				doubleLine = 0;
			};
			class Player
			{
				width = 0; //0.25;
				colorBg[] = {0,0,0,0}; //{0.1,0.23,0.1,0.8};
				doubleLine = 0;
			};
			class KillsInfantry
			{
				width = 0; //0.11;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_infantry_ca.paa";
			};
			class KillsSoft
			{
				width = 0; //0.1;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_soft_ca.paa";
			};
			class KillsArmor
			{
				width = 0; //0.11;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_armored_ca.paa";
			};
			class KillsAir
			{
				width = 0; //0.1;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_air_ca.paa";
			};
			class Killed
			{
				width = 0; //0.1;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_killed_ca.paa";
			};
			class KillsTotal
			{
				width = 0; //0.1;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.35,0.1,0.9};
				picture = ""; //"\ca\ui\data\stats_total_ca.paa";
			};
		};
	};
};

class RscPictureGUI
{
	access = 0;
	type = 0;
	idc = -1;
	colorBackground[] = {0,0,0,0};
	colorText[] = {0.38,0.63,0.26,0.75};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	style = "0x30 + 0x100";
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};

class RscStructuredText {
	class Attributes;
};
class RscStructuredTextGUI: RscStructuredText
{
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	class Attributes: Attributes
	{
		align = "center";
		valign = "middle";
};
};
// #include "Configs\CfgWorlds.hpp"
#include "Configs\cfgMoves.hpp"
#include "Configs\rscTitles.hpp"

#include "Configs\safegui.hpp"
#include "Configs\dialog.hpp"
#include "Configs\deathboards.hpp"

#include "Configs\CfgVehicles.hpp"
#include "Configs\CfgWeapons.hpp"
#include "Configs\CfgVoice.hpp"
#include "Configs\CfgIdentities.hpp"
#include "Configs\CfgFaces.hpp"
#include "Configs\CfgMagazines.hpp"
#include "Configs\cfgLoot.hpp"
#include "Configs\CfgMarkers.hpp"
#include "Configs\CfgAmmo.hpp"

class CfgSurvival {
	class Inventory {
		class Default {
			//weapons[] = {"Makarov"};
			magazines[] = {"ItemBandage","ItemPainkiller"};
			weapons[] = {"ItemFlashlight"};
			backpackWeapon = "";
			backpack = "DZ_Patrol_Pack_EP1";
		};
	};
	class Meat {
		class Default {
			yield = 2;
			rawfoodtype = "FoodmeatRaw";
		};
		class Cow: Default {
			yield = 6;
			rawfoodtype = "FoodbeefRaw";
		};
		class Cow01: Cow{};
		class Cow02: Cow{};
		class Cow03: Cow{};
		class Cow04: Cow{};
		class Cow01_EP1: Cow{};
		class Goat: Default {
			yield = 4;
			rawfoodtype = "FoodmuttonRaw";
		};
		class Goat01_EP1: Goat{};
		class Goat02_EP1: Goat{};
		class Sheep: Default {
			yield = 4;
			rawfoodtype = "FoodmuttonRaw";
		};
		class Sheep01_EP1: Sheep{};
		class Sheep02_EP1: Sheep{};
		class WildBoar: Default {
			yield = 4;
			rawfoodtype = "FoodbaconRaw";
		};
		class Hen: Default {
			yield = 2;
			rawfoodtype = "FoodchickenRaw";
		};
		class Cock: Hen{};
		class DZ_Fin: Default {
			yield = 0;
			rawfoodtype = "FoodSteakRaw";
		};
		class DZ_Pastor: DZ_Fin{};
		class Rabbit: Default {
			yield = 1;
			rawfoodtype = "FoodrabbitRaw";
		};

	};
	class Skins {
		class Default {
			sex = "male";
			playerModel = "Survivor2_DZ";
		};
		class Skin_Survivor2_DZ: Default {
			sex = "male";
			playerModel = "Survivor2_DZ";
		};
		class Skin_Sniper1_DZ: Default {
			sex = "male";
			playerModel = "Sniper1_DZ";
		};
		class Skin_Camo1_DZ: Default {
			sex = "male";
			playerModel = "Camo1_DZ";
		};
		class Skin_Rocket_DZ: Default {
			sex = "male";
			playerModel = "Rocket_DZ";
		};
		class Skin_Soldier1_DZ: Default {
			sex = "male";
			playerModel = "Soldier1_DZ";
		};
		class Skin_RU_Policeman_DZ: Default {
			sex = "male";
			playerModel = "RU_Policeman_DZ";
		};
		class Skin_Pilot_EP1_DZ: Default {
			sex = "male";
			playerModel = "Pilot_EP1_DZ";
		};
		class Skin_Haris_Press_EP1_DZ: Default {
			sex = "male";
			playerModel = "Haris_Press_EP1_DZ";
		};
		class Skin_Ins_Soldier_GL_DZ: Default {
			sex = "male";
			playerModel = "Ins_Soldier_GL_DZ";
		};
		class Skin_GUE_Commander_DZ: Default {
			sex = "male";
			playerModel = "GUE_Commander_DZ";
		};
		class Skin_Functionary1_EP1_DZ: Default {
			sex = "male";
			playerModel = "Functionary1_EP1_DZ";
		};
		class Skin_Priest_DZ: Default {
			sex = "male";
			playerModel = "Priest_DZ";
		};
		class Skin_Rocker1_DZ: Default {
			sex = "male";
			playerModel = "Rocker1_DZ";
		};
		class Skin_Rocker2_DZ: Default {
			sex = "male";
			playerModel = "Rocker2_DZ";
		};
		class Skin_Rocker3_DZ: Default {
			sex = "male";
			playerModel = "Rocker3_DZ";
		};
		class Skin_Rocker4_DZ: Default {
			sex = "male";
			playerModel = "Rocker4_DZ";
		};
		class Skin_Bandit1_DZ: Default {
			sex = "male";
			playerModel = "Bandit1_DZ";
		};
		class Skin_Bandit2_DZ: Default {
			sex = "male";
			playerModel = "Bandit2_DZ";
		};
		class Skin_GUE_Soldier_MG_DZ: Default {
			sex = "male";
			playerModel = "GUE_Soldier_MG_DZ";
		};
		class Skin_GUE_Soldier_Sniper_DZ: Default {
			sex = "male";
			playerModel = "GUE_Soldier_Sniper_DZ";
		};
		class Skin_GUE_Soldier_Crew_DZ: Default {
			sex = "male";
			playerModel = "GUE_Soldier_Crew_DZ";
		};
		class Skin_GUE_Soldier_CO_DZ: Default {
			sex = "male";
			playerModel = "GUE_Soldier_CO_DZ";
		};
		class Skin_GUE_Soldier_2_DZ: Default {
			sex = "male";
			playerModel = "GUE_Soldier_2_DZ";
		};
		class Skin_BanditW1_DZ: Default {
			sex = "female";
			playerModel = "BanditW1_DZ";
		};
		class Skin_BanditW2_DZ: Default {
			sex = "female";
			playerModel = "BanditW2_DZ";
		};
		class Skin_SurvivorW2_DZ: Default {
			sex = "female";
			playerModel = "SurvivorW2_DZ";
		};
		class Skin_SurvivorWpink_DZ: Default {
			sex = "female";
			playerModel = "SurvivorWpink_DZ";
		};
		class Skin_SurvivorWsequisha_DZ: Default {
			sex = "female";
			playerModel = "SurvivorWsequisha_DZ";
		};
		class Skin_SurvivorWsequishaD_DZ: Default {
			sex = "female";
			playerModel = "SurvivorWsequishaD_DZ";
		};
		class Skin_SurvivorWcombat_DZ: Default {
			sex = "female";
			playerModel = "SurvivorWcombat_DZ";
		};
		class Skin_SurvivorWdesert_DZ: Default {
			sex = "female";
			playerModel = "SurvivorWdesert_DZ";
		};
		class Skin_SurvivorWurban_DZ: Default {
			sex = "female";
			playerModel = "SurvivorWurban_DZ";
		};
		class Skin_SurvivorW3_DZ: Default {
			sex = "female";
			playerModel = "SurvivorW3_DZ";
		};
		class Skin_Soldier_TL_PMC_DZ: Default {
			sex = "male";
			playerModel = "Soldier_TL_PMC_DZ";
		};
		
		class Skin_Soldier_Sniper_PMC_DZ: Default {
			sex = "male";
			playerModel = "Soldier_Sniper_PMC_DZ";
		};
		
		class Skin_Soldier_Bodyguard_AA12_PMC_DZ: Default {
			sex = "male";
			playerModel = "Soldier_Bodyguard_AA12_PMC_DZ";
		};

		class Skin_FR_OHara_DZ: Default
		{
			sex = "male";
			playerModel = "FR_OHara_DZ";
		};
		class Skin_FR_Rodriguez_DZ: Default
		{
			sex = "male";
			playerModel = "FR_Rodriguez_DZ";
		};
		class Skin_CZ_Soldier_Sniper_EP1_DZ: Default
		{
			sex = "male";
			playerModel = "CZ_Soldier_Sniper_EP1_DZ";
		};
		class Skin_Graves_Light_DZ: Default
		{
			sex = "male";
			playerModel = "Graves_Light_DZ";
		};
		
		class Skin_Drake_Light_DZ: Default {
			sex = "male";
			playerModel = "Drake_Light_DZ";
		};
		
		class Skin_CZ_Special_Forces_GL_DES_EP1_DZ: Default {
			sex = "male";
			playerModel = "CZ_Special_Forces_GL_DES_EP1_DZ";
		};
		
		class Skin_TK_INS_Soldier_EP1_DZ: Default {
			sex = "male";
			playerModel = "TK_INS_Soldier_EP1_DZ";
		};
		
		class Skin_TK_INS_Warlord_EP1_DZ: Default {
			sex = "male";
			playerModel = "TK_INS_Warlord_EP1_DZ";
		};
		


	};
};

class CfgBuildingLoot {
	class Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_suit1","z_suit2","z_worker1","z_worker2","z_worker3","z_villager1","z_villager2","z_villager3"};
		lootChance = 0;
		lootPos[] = {};
		lootPosSmall[] = {};
		itemType[] = {};
		itemChance[] = {};
		hangPos[] = {};
		vehPos[] = {};
	};
	class Master {
		weapons[] = {
			"SMAW",
			"Javelin",
			"G36C",
			"Stinger"
	};
	};
	class Residential: Default {
		zombieChance = 0.3;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] = {
			{ "ItemSodaMdew","magazine" },
			{ "ItemSodaRbull","magazine" },
			{ "ItemSodaOrangeSherbet","magazine" },
			{ "ItemWatch","generic" },
			{ "ItemCompass","generic" },
			{ "ItemMap","weapon" },
			{ "Makarov","weapon" },
			{ "MakarovSD","weapon" },
			{ "Colt1911","weapon" },
			{ "ItemFlashlight","generic" },
			{ "ItemKnife","generic" },
			{ "ItemMatchbox","generic" },
			{ "","generic" },
			{ "LeeEnfield","weapon" },
			{ "revolver_EP1","weapon" },
			{"DZ_Assault_Pack_EP1","object"}, // 12
			{"DZ_Czech_Vest_Puch","object"}, // 12-0
			{"DZ_ALICE_Pack_EP1","object"}, // 16
			{"DZ_TK_Assault_Pack_EP1","object"}, // 16
			{"DZ_British_ACU","object"}, // 18
			{ "Winchester1866","weapon" },
			{ "tents","single" },
			{ "","military" },
			{ "","trash" },
			{ "Crossbow_DZ","weapon" },
			{ "Binocular","weapon" },
			{ "PartPlywoodPack","magazine" },
			{ "clothes","single" },
			{ "specialclothes","single" },
			{ "WeaponHolder_MeleeCrowbar","object" },
			{"MR43","weapon"},			
	};
		itemChance[] =	{
			0.01,
			0.01,
			0.01,
			0.04,
			0.03,
			0.02,
			0.05,
			0.01,
			0.02,
			0.01,
			0.04,
			0.01,
			0.32,
			0.03,
			0.02,
			0.02,
			0.02,
			0.02,
			0.01,
			0.01,
			0.01,
			0.01,
			0.02,
			0.14,
			0.01,
			0.02,
			0.02,
			0.01,
			0.01,
			0.03,
			0.01
		};		
	};
	class Office: Default {
		maxRoaming = 3;
		zombieClass[] = {"z_suit1","z_suit2"};
		zombieChance = 0.3;
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] = {
			{ "ItemSodaMdew","magazine" },
			{ "ItemSodaRbull","magazine" },
			{ "ItemSodaOrangeSherbet","magazine" },
			{ "ItemWatch","generic" },
			{ "ItemCompass","generic" },
			{ "ItemMap","weapon" },
			{ "Makarov","weapon" },
			{ "MakarovSD","weapon" },
			{ "Colt1911","weapon" },
			{ "ItemFlashlight","generic" },
			{ "ItemKnife","generic" },
			{ "ItemMatchbox","generic" },
			{ "","generic" },
			{ "LeeEnfield","weapon" },
			{ "revolver_EP1","weapon" },
			{"DZ_Assault_Pack_EP1","object"}, // 12
			{"DZ_Czech_Vest_Puch","object"}, // 12-0
			{"DZ_ALICE_Pack_EP1","object"}, // 16
			{"DZ_TK_Assault_Pack_EP1","object"}, // 16
			{"DZ_British_ACU","object"}, // 18
			{ "Winchester1866","weapon" },
			{ "tents","single" },
			{ "","military" },
			{ "","trash" },
			{"Crossbow_DZ","weapon"},
			{ "Binocular","weapon" },
			{ "PartPlywoodPack","magazine" },
			{ "clothes","single" },
			{ "specialclothes","single" },
			{ "WeaponHolder_MeleeCrowbar","object" },
			{ "ItemBriefcaseEmpty","magazine" },
	};
		itemChance[] =	{
			0.01,
			0.01,
			0.01,
			0.04,
			0.03,
			0.02,
			0.06,
			0.01,
			0.02,
			0.01,
			0.04,
			0.01,
			0.31,
			0.03,
			0.02,
			0.02,
			0.02,
			0.02,
			0.01,
			0.01,
			0.01,
			0.01,
			0.02,
			0.14,
			0.01,
			0.02,
			0.02,
			0.01,
			0.01,
			0.03,
			0.01
		};	
	};
	class Industrial: Default {
		zombieChance = 0.4;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3"};
		maxRoaming = 2;
		lootChance = 0.3;
		lootPos[] = {};
		itemType[] = {
			{ "ItemGenerator","magazine" },
			{"ItemFuelPump","magazine"},
			{"ItemFuelBarrel","magazine"},
			{ "","generic" },
			{ "","trash" },
			{ "","military" },
			{ "PartGeneric","magazine" },
			{ "PartWheel","magazine" },
			{ "PartFueltank","magazine" },
			{ "PartEngine","magazine" },
			{ "PartGlass","magazine" },
			{ "PartVRotor","magazine" },
			{ "ItemJerrycan","magazine" },
			{ "WeaponHolder_ItemHatchet","object" },
			{ "ItemKnife","military" },
			{ "ItemToolbox","weapon" },
			{ "ItemWire","magazine" },
			{"ItemTankTrap","magazine"},
			{"ItemKeyKit","weapon"},
			{"CinderBlocks","magazine"},
			{"MortarBucket","magazine"}
	};
		itemChance[] =	{
			0.01,
			0.01,
			0.01,
			0.16,
			0.25,
			0.04,
			0.04,
			0.05,
			0.02,
			0.02,
			0.04,
			0.01,
			0.04,
			0.07,
			0.07,
			0.06,
			0.01,
			0.04,
			0.01,
			0.03,
			0.01
		};
	};
	class IndustrialFuel: Default {
		zombieChance = 0.4;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3"};
		maxRoaming = 2;
		lootChance = 0.3;
		lootPos[] = {};
		itemType[] = {
			{ "ItemGenerator","magazine" },
			{"ItemFuelPump","magazine"},
			{ "","generic" },
			{ "","trash" },
			{ "","military" },
			{ "PartGeneric","magazine" },
			{ "PartWheel","magazine" },
			{ "PartFueltank","magazine" },
			{ "PartEngine","magazine" },
			{ "PartGlass","magazine" },
			{ "PartVRotor","magazine" },
			{ "ItemJerrycan","magazine" },
			{ "WeaponHolder_ItemHatchet","object" },
			{ "ItemKnife","military" },
			{ "ItemToolbox","weapon" },
			{ "ItemWire","magazine" },
			{"ItemTankTrap","magazine"},
			{"ItemKeyKit","weapon"}
	};
		itemChance[] =	{
			0.01,
			0.01,
			0.18,
			0.28,
			0.04,
			0.04,
			0.05,
			0.02,
			0.02,
			0.04,
			0.01,
			0.04,
			0.07,
			0.07,
			0.06,
			0.01,
			0.04,
			0.01
		};
	};
	class Farm: Default {
		zombieChance = 0.3;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] = {
			{ "ItemJerrycan","magazine" },
			{ "","generic" },
			{ "huntingrifle","weapon" },
			{ "LeeEnfield","weapon" },
			{ "Winchester1866","weapon" },
			{ "","trash" },
			{ "Crossbow_DZ","weapon"},
			{ "PartPlankPack","magazine" },
			{ "WeaponHolder_ItemHatchet","object" },
			{ "MR43","weapon" },
			{ "ItemFuelBarrel","magazine"},
			{ "WeaponHolder_ItemMachete", "object"},
			{ "ItemFishingPole","weapon" },
			{ "ItemLightBulb","magazine"},
			{ "ItemSledgeHandle","magazine"}
			
	};
		itemChance[] =	{
			0.05,
			0.3,
			0.02,
			0.04,
			0.03,
			0.26,
			0.03,
			0.08,
			0.05,
			0.06,
			0.01,
			0.03,
			0.01,
			0.02,
			0.01
		};
	};
	class Supermarket: Default {
		lootChance = 0.6;
		minRoaming = 2;
		maxRoaming = 6;
		zombieChance = 0.3;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		itemType[] = {
			{ "ItemSodaMdew","magazine" },
			{ "ItemSodaRbull","magazine" },
			{ "ItemSodaOrangeSherbet","magazine" },
			{ "ItemWatch","generic" },
			{ "ItemCompass","generic" },
			{ "ItemMap","weapon" },
			{ "Makarov","weapon" },
			{ "Colt1911","weapon" },
			{ "ItemFlashlight","generic" },
			{ "ItemKnife","generic" },
			{ "ItemMatchbox","generic" },
			{ "","generic" },
			{ "LeeEnfield","weapon" },
			{ "revolver_EP1","weapon" },
			{"DZ_Assault_Pack_EP1","object"}, // 12
			{"DZ_Czech_Vest_Puch","object"}, // 12-0
			{"DZ_ALICE_Pack_EP1","object"}, // 16
			{"DZ_TK_Assault_Pack_EP1","object"}, // 16
			{"DZ_British_ACU","object"}, // 18
			{"DZ_CompactPack_EP1","object"}, //
			{"DZ_TerminalPack_EP1","object"}, //
			{ "Winchester1866","weapon" },
			{ "tents","single" },
			{ "","food" },
			{ "","trash" },
			{"Crossbow_DZ","weapon"},
			{ "Binocular","weapon" },
			{ "PartWoodPile","magazine" },
			{"MR43","weapon"}
	};
		itemChance[] =	{
			0.01,
			0.01,
			0.01,
			0.07,
			0.02,
			0.04,
			0.02,
			0.01,
			0.01,
			0.02,
			0.04,
			0.04,
			0.01,
			0.01,
			0.04,
			0.03,
			0.02,
			0.02,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.30,
			0.13,
			0.01,
			0.05,
			0.02,
			0.01
		};
	};
	class HeliCrash: Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] = {
			{ "FN_FAL","weapon" },
			{ "bizon_silenced","weapon" },
			{ "M14_EP1","weapon" },
			{ "FN_FAL_ANPVS4","weapon" },
			{ "BAF_LRR_scoped","weapon" },
			{ "AK_107_PSO","weapon" },
			{ "Mk_48_DZ","weapon" },
			{ "M249_DZ","weapon" },
			{"BAF_L85A2_RIS_SUSAT","weapon"},
			{ "DMR","weapon" },
			{ "","military" },
			{ "","medical" },
			{ "MedBox0","object" },
			{ "NVGoggles","weapon" },
			{ "AmmoBoxSmall_556","object" },
			{ "AmmoBoxSmall_762","object" },
			{ "militaryclothes","single" },
			{"G36C","weapon"},
			{"G36_C_SD_camo","weapon"},
			{"G36A_camo","weapon"},
			{ "Pecheneg_DZ","weapon"},
			{"100Rnd_762x54_PK","magazine"},
		};
		itemChance[] =	{
			0.02,
			0.03,
			0.02,
			0.01,
			0.01,
			0.02,
			0.02,
			0.02,
			0.01,
			0.02,
			0.4,
			0.19,
			0.05,
			0.01,
			0.03,
			0.03,
			0.05,
			0.02,
			0.01,
			0.01,
			0.01,
			0.01,
		};
	};
class HeliCrash_No50s: Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] =	{		
			{"FN_FAL","weapon"},
			{"bizon_silenced","weapon"},
			{"M14_EP1","weapon"},
			{"FN_FAL_ANPVS4","weapon"},
			{"Mk_48_DZ","weapon"},
			{"M249_DZ","weapon"},
			{"BAF_L85A2_RIS_SUSAT","weapon"},
			{"DMR","weapon"},
			{"","military"},
			{"","medical"},
			{"MedBox0","object"},
			{"NVGoggles","weapon"},
			{"AmmoBoxSmall_556","object"},
			{"AmmoBoxSmall_762","object"},
			{ "militaryclothes","single" },
			{"G36C","weapon"},
			{"G36C_camo","weapon"},
			//{"G36_C_SD_camo","weapon"},
			{"G36A_camo","weapon"},
			{"G36K_camo","weapon"},
			{"100Rnd_762x54_PK","magazine"}
		};
		itemChance[] =	{
			0.01,
			0.02,
			0.02,
			0.01,
			0.01,
			0.02,
			0.01,
			0.02,
			0.44,
			0.23,
			0.04,
			0.01,
			0.04,
			0.04,
			0.03,
			0.01,
			0.01,
			//0.01, 
			0.01,
			0.01,
			0.01
		};
	};
	class Hospital: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_doctor","z_doctor","z_doctor"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] = {
			{ "","trash" },
			{ "","hospital" },
			{"MedBox0","object"}
	};
		itemChance[] =	{
			0.1,
			0.7,
			0.2
		};
	};
	class Military: Default {
		zombieChance = 0.3;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] = {
			{ "M9","weapon" },
			{ "M16A2","weapon" },
			{ "M16A2GL","weapon" },
			{ "M9SD","weapon" },
			{ "AK_74","weapon" },
			{ "M4A1_Aim","weapon" },
			{ "AKS_74_kobra","weapon" },
			{ "AKS_74_U","weapon" },
			{ "AK_47_M","weapon" },
			{ "M24","weapon" },
			{ "M1014","weapon" },
			{ "DMR","weapon" },
			{ "M4A1","weapon" },
			{ "M14_EP1","weapon" },
			{ "UZI_EP1","weapon" },
			{ "Remington870_lamp","weapon" },
			{ "glock17_EP1","weapon" },
			{ "MP5A5","weapon" },
			{ "MP5SD","weapon" },
			{ "M4A3_CCO_EP1","weapon" },
			{ "Binocular","weapon" },
			{ "ItemFlashlightRed","military" },
			{ "ItemKnife","military" },
			{ "ItemGPS","weapon" },
			{ "ItemMap","military" },
			
			{"DZ_ALICE_Pack_EP1","object"}, // 16
			{"DZ_TK_Assault_Pack_EP1","object"}, // 16
			{"DZ_British_ACU","object"}, // 18
			{"DZ_CivilBackpack_EP1","object"}, // 24
			{"DZ_Backpack_EP1","object"}, // 24
			{"DZ_GunBag_EP1","object"}, // 8-6
			
			//Normal
			{ "","medical" },
			{ "","generic" },
			{ "","military" },
			{ "Sa61_EP1","weapon"},
			{ "UZI_SD_EP1","weapon"},
			{ "ItemEtool","weapon" },
			{"ItemSandbag","magazine"},
			{"Sa58P_EP1","weapon"},
			{"Sa58V_EP1","weapon"},
			{"BAF_L85A2_RIS_Holo","weapon"}
	};
		itemChance[] =	{
			0.01,
			0.01,
			0.01,
			0.01,
			0.02,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.02,
			0.01,
			0.01,
			0.01,
			0.02,
			0.02,
			0.02,
			0.02,
			0.01,
			0.01,
			0.03,
			0.04,
			0.01,
			0.01,
			0.02,
			0.04,
			0.04,
			0.03,
			0.02,
			0.01,
			0.01,
			0.02,
			0.07,
			0.3,
			0.01,
			0.01,
			0.02,
			0.01,
			0.01,
			0.02,
			0.01
		};
	};
	class MilitaryIndustrial: Default {
		zombieChance = 0.3;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman","z_soldier","z_soldier_heavy","z_policeman","z_worker1","z_worker2","z_worker3"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] = {
			{ "M9","weapon" },
			{ "M16A2","weapon" },
			{ "M16A2GL","weapon" },
			{ "M9SD","weapon" },
			{ "PartGeneric","magazine" },
			{ "M4A1_Aim","weapon" },
			{ "AKS_74_kobra","weapon" },
			{ "AKS_74_U","weapon" },
			{ "AK_47_M","weapon" },
			{ "M24","weapon" },
			{ "M1014","weapon" },
			{ "ItemGenerator","magazine" },
			{ "M4A1","weapon" },
			{ "M14_EP1","weapon" },
			{ "UZI_EP1","weapon" },
			{ "Remington870_lamp","weapon" },
			{ "glock17_EP1","weapon" },
			{ "PartWheel","magazine" },
			{ "MP5SD","weapon" },
			{ "M4A3_CCO_EP1","weapon" },
			{ "Binocular","weapon" },
			{ "ItemFlashlightRed","military" },
			{ "ItemKnife","military" },
			{ "ItemGPS","weapon" },
			{ "PartVRotor","magazine" },
			
			{"DZ_ALICE_Pack_EP1","object"}, // 16
			{"DZ_TK_Assault_Pack_EP1","object"}, // 16
			{"DZ_British_ACU","object"}, // 18
			{"DZ_CivilBackpack_EP1","object"}, // 24
			{"DZ_Backpack_EP1","object"}, // 24
			{"DZ_GunBag_EP1","object"}, // 8-6
			
			//Normal
			{ "","medical" },
			{ "","generic" },
			{ "","military" },
			{ "Sa61_EP1","weapon"},
			{ "UZI_SD_EP1","weapon"},
			{ "ItemEtool","weapon" },
			{"ItemSandbag","magazine"},
			{"Sa58P_EP1","weapon"},
			{"Sa58V_EP1","weapon"},
			{"BAF_L85A2_RIS_Holo","weapon"},
			{"ItemFuelBarrel","magazine"},
			{"ItemFuelPump","magazine"}
			
	};
		itemChance[] =	{
			0.01,
			0.01,
			0.01,
			0.01,
			0.03,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.02,
			0.01,
			0.01,
			0.01,
			0.02,
			0.02,
			0.02,
			0.02,
			0.01,
			0.01,
			0.03,
			0.04,
			0.01,
			0.01,
			0.02,
			0.04,
			0.04,
			0.03,
			0.01,
			0.01,
			0.01,
			0.02,
			0.01,
			0.35,
			0.01,
			0.01,
			0.02,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01

		};
	};
	class MilitarySpecial: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier_heavy"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] = {
			{ "M16A2","weapon" },
			{ "M16A2GL","weapon" },
			{ "M249_DZ","weapon" },
			{ "M9SD","weapon" },
			{ "Pecheneg_DZ","weapon"},
			{ "AK_74","weapon" },
			{ "M4A1_Aim","weapon" },
			{ "AKS_74_kobra","weapon" },
			{ "AKS_74_U","weapon" },
			{ "AK_47_M","weapon" },
			{ "M24","weapon" },
			{ "SVD_CAMO","weapon" },
			{ "M1014","weapon" },
			{ "BAF_LRR_scoped","weapon" },
			{ "DMR","weapon" },
			{ "M4A1","weapon" },
			{ "M14_EP1","weapon" },
			{ "UZI_EP1","weapon" },
			{ "Remington870_lamp","weapon" },
			{ "glock17_EP1","weapon" },
			{ "M240_DZ","weapon" },
			{ "M4A1_AIM_SD_camo","weapon" },
			{ "M16A4_ACG","weapon" },
			{ "M4A1_HWS_GL_camo","weapon" },
			{ "Mk_48_DZ","weapon" },
			{ "M4A3_CCO_EP1","weapon" },
			//Ammo
			{ "AmmoBoxSmall_556","object" },
			{ "AmmoBoxSmall_762","object" },

			//{"NVGoggles","weapon"},
			{ "Binocular","weapon" },
			{ "ItemFlashlightRed","military" },
			{ "ItemKnife","military" },
			{ "ItemGPS","weapon" },
			{ "ItemMap","military" },
			{ "Binocular_Vector","military" },

			{"DZ_ALICE_Pack_EP1","object"}, // 16
			{"DZ_TK_Assault_Pack_EP1","object"}, // 16
			{"DZ_British_ACU","object"}, // 18
			{"DZ_CivilBackpack_EP1","object"}, // 24
			{"DZ_Backpack_EP1","object"}, // 30		
			{"DZ_LargeGunBag_EP1","object"}, // 45

			{ "","medical" },
			{ "","generic" },
			{ "","military" },
			//{"Body","object"},
			{"PipeBomb","magazine"},
			{"Sa58V_RCO_EP1","weapon"},
			{"Sa58V_CCO_EP1","weapon"},
			{"G36_C_SD_camo","weapon"},
			{"M40A3","weapon"},
			{"100Rnd_762x54_PK","magazine"},
			{ "militaryclothes","single" },
		};
		itemChance[] =	{
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.02,
			0.01,
			0.01,
			0.01,
			0.01,
			0.02,
			0.02,
			0.03,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.02,
			0.01,
			0.02,
			0.01,
			0.01,
			0.01,
			0.02,
			0.02,
			0.02,
			0.01,
			0.01,
			0.01,
			0.03,
			0.08,
			0.31,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01
		};
	};
	class Hunting: Default {
		zombieChance = 0.4;
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_hunter","z_hunter","z_hunter"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =	{
			{"ItemMap","weapon"},
			{"ItemFlashlight","generic"},
			{"ItemKnife","generic"},
			{"ItemMatchbox","generic"},
			{"Crossbow_DZ","weapon"},
			{"","military"},
			{"WeaponHolder_ItemMachete", "object"},
			{"huntingrifle","weapon"},
			{"","hunter"}
		};
		itemChance[] =	{
			0.02,
			0.01,
			0.01,
			0.03,
			0.01,
			0.38,
			0.02,
			0.02,
			0.5
		};
	};	
	class Church: Residential {
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_priest","z_priest","z_priest"};
	};
	class Land_HouseV_1I4: Residential {
		lootPos[] = {{-1.77002,-2.64941,-2.05628},{-0.400146,-3.87695,-2.76879},{-3.67749,-2.52002,-2.76551},{-0.472168,3.19702,-2.72021}};
	};
	class Land_kulna: Residential {
		lootPos[] = {{0.504395,0.218262,-1.11643},{-0.496582,1.93262,-1.12826}};
	};
	class Land_Ind_Workshop01_01: Industrial {
		lootPos[] = {{-0.796875,1.24707,-0.836596},{0.595215,-2.43115,-1.29412},{1.24365,0.463867,-1.295},{-0.663574,-0.50293,-1.29837}};
	};
	class Land_Ind_Garage01: Industrial {
		lootPos[] = {{-0.580078,-1.49707,-1.23483},{-0.834473,2.75781,-1.22563},{2.47754,-1.12891,-1.23714},{1.31934,1.63086,-1.23228}};
	};
	class Land_Ind_Workshop01_02: Industrial {
		lootPos[] = {{1.1543,-0.552246,-1.42943},{-1.18665,-0.178223,-1.42868},{-0.661621,1.104,-1.42682}};
	};
	class Land_Ind_Workshop01_04: Industrial {
		lootPos[] = {{-1.37415,4.18896,-1.53123},{0.695435,4.24561,-1.52934},{-1.06677,2.69531,-1.53062},{0.79248,-4.60742,-1.49341},{-1.84424,-6.1709,-1.44427},{-1.05566,-4.08398,-1.51927},{1.43774,-6.59424,-1.41742}};
		hangPos[] = {{-0.541748,4.01221,-2.03068}};
	};
	class Land_Ind_Workshop01_L: Industrial {
		lootPos[] = {{-3.26172,4.75439,-1.30246},{0.175781,3.91748,-1.30766},{-2.37891,2.35303,-1.30405},{4.10547,-4.10791,-1.31345},{0.727539,-2.61621,-1.31418},{2.54688,-2.17725,-1.31482},{1.52344,-3.79443,-1.31332}};
	};
	class Land_Hangar_2: Industrial {
		lootPos[] = {{10.1245,-6.4873,-2.56317},{11.9387,7.91113,-2.56317},{1.79517,7.12695,-2.56317},{-11.8948,10.5449,-2.56317},{-8.97021,-4.34766,-2.56317},{-0.562744,-7.59375,-2.56317},{5.98804,-2.6123,-2.56317}};
	};
	class Land_hut06: Residential {
		lootPos[] = {{0.328125,2.26953,-1.57786},{-0.552368,-0.0620117,-1.53837}};
	};
	class Land_stodola_old_open: Farm {
		lootPos[] = {{-3.06836,8.63184,-5.08054},{2.52588,10.5261,-5.08051},{4.76758,5.00854,-0.9935},{-2.78467,10.2368,-0.9935},{4.62598,10.4983,-0.993469},{2.09082,10.8425,2.96448},{-0.440918,10.3091,2.96445},{-2.58838,-5.91821,-5.08054},{4.11084,-10.9302,-5.08054},{-2.62842,-6.55518,-1.01584},{2.50537,-10.741,2.96445},{0.0410156,-11.0596,2.96445}};
		hangPos[] = {{-1.50537,5.34473,-5.08813},{0.494141,9.42725,-5.09016},{2.59473,-6.21191,-5.08055},{-1.74854,-2.39844,-1.14301}};
	};
	class Land_A_FuelStation_Build: IndustrialFuel {
		lootChance = 0.5;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		lootPos[] = {{-1.31958,-0.655151,-1.57448},{1.82349,0.769653,-1.57458},{1.67871,-0.918701,-1.57458},{-1.23242,1.26794,-1.57458}};
	};
	class Land_A_GeneralStore_01a: Supermarket {
		lootPos[] = {{-6.93213,1.0708,-1.20155},{-7.2959,-2.68213,-1.20155},{-3.41406,-4.39307,-1.20155},{-1.28809,-2.57861,-1.20155},{0.903809,-4.35986,-1.20155},{3.1377,-3.40771,-1.20155},{7.53418,-2.69971,-1.20154},{13.9653,-4.50342,-1.20155},{10.2617,0.109863,-1.20155},{10.5869,-3.84375,-1.20155},{7.84521,-0.137207,-1.20154},{3.57471,0.0356445,-1.20154},{-0.370605,5.17676,-1.20155},{4.77783,5.57617,-1.20155},{13.0874,4.35645,-1.20155},{12.9932,6.31689,-1.20155},{7.36328,3.00928,-1.20155},{1.93091,2.17236,-1.20154},{-3.82715,5.3335,-1.20155},{-7.55029,8.54199,-1.20154},{-4.42407,8.96631,-1.20154},{3.72705,8.36084,-1.20155},{9.84033,8.3374,-1.20155},{-2.90918,1.32031,-1.20155}};
	};
	class Land_A_GeneralStore_01: Supermarket {
		lootPos[] = {{-1.32861,-2.72534,-0.621548},{4.4751,-2.69824,-0.621548},{-5.29688,0.796387,-0.691548},{-4.85498,2.95166,-0.201549},{-9.38965,-3.30371,-1.20155},{-3.77539,-3.86865,-1.20155},{1.31836,1.46631,-1.20155},{9.01367,3.8457,-1.20155},{13.3008,-1.77832,-1.20155},{9.81055,1.43213,-1.20155},{1.65039,5.14355,-1.20155},{0.753906,-3.69531,-1.20155},{13.3125,-7.65137,-1.20155},{11.168,-3.73682,-1.20155},{8.89453,-8.37402,-1.20155},{-2.04492,-7.58105,-1.20155},{-7.84766,-5.73633,-1.20155},{-8.22461,-7.32422,-1.20155},{3.79004,-5.69336,-1.20155},{-9.38379,4.46191,-1.20155},{-3.5752,4.46533,-1.20155},{-3.33789,0.612793,-1.20155},{10.5918,-9.9458,-1.21082},{0.105469,-9.6084,-1.21082},{-4.86035,-10.4209,-1.21082},{-6.80859,-1.23975,-1.20155},{1.12207,-1.58887,-1.20155}};
		lootPosSmall[] = {{13.4424,-6.02783,0.0384521},{1.94287,-8.70581,0.0284519},{-1.57178,-6.88525,0.0284519},{-5.23682,-5.02051,0.0284519},{-9.96191,-6.06763,0.348452},{11.4189,-3.03516,-1.03155},{-4.78076,2.83228,-1.18155},{11.0488,2.04883,-1.01155}};
	};
	class Land_Farm_Cowshed_a: Farm {
		lootPos[] = {{-1.06836,-5.92163,-3.08763},{1.69043,-4.91089,-3.08763},{5.8833,-6.15381,-3.08763},{8.83984,-5.60278,-3.08763},{9.74023,-2.48657,-3.08763},{2.88428,-2.34546,-3.08763},{7.88037,2.94214,-3.08763}};
	};
	class Land_stodola_open: Farm {
		lootPos[] = {{-2.60303,5.31665,-4.12804},{-2.58154,-0.530029,-4.17349},{-0.0478516,-4.88989,-4.136},{0.983398,6.20483,-4.11143}};
		hangPos[] = {{-0.932617,-3.35962,-4.16446},{-2.01563,-0.115112,-4.19492}};
	};
	class Land_Barn_W_01: Farm {
		lootPos[] = {{4.93188,-17.0444,-2.63063},{-3.82813,-18.6699,-2.63036},{-4.46387,16.6665,-2.63651},{5.78711,18.9473,-2.6369},{3.9541,4.88428,-2.63446},{-2.99072,-4.16748,-2.63287}};
	};
	class Land_Hlidac_budka: Residential {
		lootPos[] = {{1.27002,2.29736,-0.113617},{-2.3186,1.5127,-0.78363},{2.02075,0.444336,-0.78363},{-0.460938,1.75879,-0.78363}};
	};
	class Land_HouseV2_02_Interier: Residential {
		lootPos[] = {{6.46094,1.48608,-4.60568},{7.23096,5.37207,-5.53067},{8.55005,0.754883,-5.53067},{5.20166,-1.54004,-5.53067},{3.34912,1.9707,-5.53067},{-3.62598,3.05371,-5.53067},{-5.4812,-0.0292969,-5.53067},{-5.83325,3.26563,-5.53067},{-5.71045,5.49414,-5.53067}};
	};
	class Land_a_stationhouse: Military {
		lootChance = 0.3;
		lootPos[] = {{9.93115,3.34375,-9.40037},{-2.69922,-7.57422,-9.47058},{-0.892578,-5.7168,-9.47058},{-3.2417,-6.61914,-4.6489},{-1.35645,-8.3623,-4.6489},{-1.70801,-7.85449,-0.0437927},{-3.39502,-7.88281,-0.0437927},{-1.396,-7.79883,4.41141},{-1.37939,-5.79102,4.41141},{1.5127,1.96484,-9.47058},{18.9058,-4.06738,-9.47058}};
	};
	class Land_Mil_ControlTower: Military {
		lootChance = 0.4;
		lootPos[] = {{5.51807,-1.72363,-0.378696},{7.55103,1.85889,-0.378696},{10.0703,3.76367,-9.62869},{3.89844,3.43457,-5.46368},{1.75195,5.68164,-5.46368},{6.66113,-0.625488,-1.0687},{2.63965,-0.191406,-1.0687},{6.72266,3.23389,-1.0687}};
	};

	class Land_SS_hangar: MilitaryIndustrial {
		maxRoaming = 3;
		lootPos[] = {{-0.18457,5.26465,-5.87254},{11.7344,-17.165,-5.87253},{-11.7158,-18.9541,-5.87253},{-14.2461,23.0439,-5.87253}};
	};
	class Land_A_Pub_01: Residential {
		zombieChance = 0.2;
		lootPos[] = {{1.25684,5.34863,-5.01622},{1.2041,-1.88574,-4.7562},{-7.50195,-1.42871,-5.28622},{-3.51318,-2.60645,-3.66622},{2.09375,1.03027,-0.101221},{1.85889,6.45996,-1.31122]},
		{1.83398,0.393799,-5.7462},{-1.76514,0.334473,-5.74622},{-6.62207,-6.55371,-5.74622},{-4.63623,-0.100586,-5.74622},{-5.75928,-3.05029,-5.74622},{-2.08203,0.922852,-1.76122},{-4.76514,-5.89087,-1.76122},{-6.94385,-1.9375,-1.76122},{-4.05225,-0.779785,-1.76122},{1.39795,-1.73779,-1.76122},{3.13867,-2.78564,-1.76122},{3.58301,-0.591309,-1.76122},{3.03027,-4.04346,-1.76122},{1.94092,3.18799,-1.76122},{-0.0961914,6.22437,-1.76122},{5.30469,7.55957,-1.76122},{6.72559,-2.72705,-1.76122},{2.56885,-4.6001,-5.74621},{4.06738,5.41406,-5.74622},{0.753418,2.2998,-5.74622}};
	};
	class Land_HouseB_Tenement: Office {
		lootPos[] = {{4.02954,12.0869,-18.7345},{7.12988,11.7734,-20.3445},{2.4187,4.88037,-19.8245},{-1.08154,4.7002,-19.8245},{-4.54492,4.87012,-19.8245},{-10.4272,-0.536621,-20.3445},{5.40576,9.89551,-20.7845},{5.99023,14.1689,-20.7845},{12.9609,14.0718,-20.7845},{14.6069,8.92383,-20.7845},{-2.75635,-2.08594,-20.7845}};
	};
	class Land_A_Hospital: hospital {
		lootChance = 0.9;
		lootPos[] = {{8.30273,-0.921875,-6.89966},{2.32813,-3.57422,-6.36466},{-1.40234,-4.0293,-6.36466},{0.807129,-1.16333,-7.33966},{-7.23389,-2.63647,-7.33966},{-16.3687,-2.40381,-7.33966},{-12.2847,-3.19604,-7.33966},{4.40674,-3.50513,-7.33966},{-3.2666,-0.925293,-7.33966},{6.85693,-2.75146,-7.33966},{11.0151,-3.95435,-7.33966},{16.8198,-4.71118,-7.33966},{-1.12793,3.78418,-7.44939},{12.7476,0.142822,3.29184},{10.2661,-1.21558,3.29184}};		
	};
	class Land_Panelak: Office {
		lootPos[] = {{-2.76904,-6.26563,0.0714226},{-2.93896,-1.3916,0.0714226},{-5.42065,-3.13184,0.0714226},{-6.81128,-6.15527,0.0714221},{-4.00879,2.53027,0.0714226},{-0.730957,-3.20117,2.77144},{3.979,-7.08936,2.77144},{2.49609,2.93701,2.77144},{6.7373,1.63281,2.77144},{6.38525,-2.3916,2.77144},{6.80615,-5.77295,2.77144},{3.75122,-0.803711,2.77144},{-0.824219,1.86914,1.32865}};
	};
	class Land_Panelak2: Office {
		lootPos[] = {{4.90283,1.53857,6.24665},{-0.729492,-3.00635,-2.62859},{-0.764648,1.36279,-1.37137},{-0.30127,3.65039,1.32864},{0.73584,-3.22217,2.71097},{-0.630859,1.84766,4.05244},{3.68921,-7.33545,5.43665},{2.26807,2.94092,5.43665},{6.7002,2.68994,5.43665},{6.87842,-1.45947,5.43665},{6.09619,-5.94824,5.43665},{4.45508,-1.64893,5.43665},{2.76367,0.445801,5.43665}};
	};
	class Land_Shed_Ind02: Industrial {
		lootPos[] = {{-2.28174,-5.67236,-4.62599},{4.54529,9.6665,-4.62599},{4.41223,2.64941,-1.27954},{-0.437866,11.6943,-1.27641},{-3.44482,12.2119,-1.27704}};
	};
	class Land_Shed_wooden: Residential {
		lootPos[] = {{1.26807,-0.361328,-1.29153},{-0.342773,1.0293,-1.29153}};
	};
	class Land_HouseBlock_A1_1: Residential {
		lootPos[] = {{-3.52881,0.158936,-4.74365},{-3.56152,-2.33484,-4.73106}};
	};
	class Land_Shed_W01: Industrial {
		lootPos[] = {{-1.52637,-0.246094,-1.41129}};
	};
	class Land_HouseV_1I1: Residential {
		lootPos[] = {{0.181641,-1.97314,-2.82275}};
	};
	class Land_Tovarna2: Industrial {
		lootPos[] = {{-11.6309,7.2052,-5.55933},{-12.0674,2.56909,-5.55933},{-4.89355,6.6394,-5.55933},{-3.74121,2.90393,-3.89665},{-12.8672,1.44519,-2.23135},{-12.415,8.1311,-2.23135},{-12.7236,4.11255,-2.23135},{-3.99805,8.9801,-2.23156},{-7.33105,8.44214,-2.23156},{-4.55371,5.22644,-2.23156},{-11.4746,2.92114,1.66661},{-11.0703,8.13818,1.66661},{-4.67578,7.32678,1.62174},{-2.68262,3.44763,3.4243},{-13.1953,-8.95862,3.4243},{-8.80859,-0.443481,0.401226},{-12.1328,-0.149414,0.424298},{-2.03418,6.61414,-5.55933},{0.239258,1.72278,-5.59793},{6.22461,-3.948,-4.61825},{-6.39355,-8.24353,-5.59541},{-10.8496,-6.91211,-5.56572},{-6.77637,-1.73083,-5.56019}};
		lootPosSmall[] = {{0.239014,-9.03516,0.374299},{1.66577,8.69482,0.374299},{-3.80029,-3.91016,6.55535}};
	};
	class Land_rail_station_big: Office {
		lootPos[] = {{1.78076,0.811768,-4.05438},{-4.97266,4.55737,-5.04438},{0.458496,4.85229,-5.04438},{2.4624,2.21851,-5.04438},{-1.32373,-2.60571,-5.04438},{-3.29443,-0.121826,-5.04438},{-1.07764,2.36646,-5.04438},{7.46045,-3.41528,-5.04438},{8.93408,3.1189,-5.04438},{-8.16357,-5.12842,-5.04438}};
		lootPosSmall[] = {{3.07373,-0.718994,-3.91438}};
	};
	class Land_Ind_Vysypka: Industrial {
		lootPos[] = {{0.486084,4.95459,-4.96861},{1.08032,-0.406738,-4.96801},{-0.0354004,-10.8208,-4.96686},{-5.07788,-16.4624,-4.96759},{-6.30298,2.92969,-4.96838},{-6.26685,26.7349,-4.9772},{1.64697,23.4038,-4.97097},{7.14575,3.92529,-4.96972},{4.63599,-12.1621,-4.96971}};
	};
	class Land_A_MunicipalOffice: Residential {
		zombieChance = 0.4;
		minRoaming = 3;
		maxRoaming = 9;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman"};
		lootChance = 0.4;
		lootPos[] = {{-4.66113,-6.27173,-18.429},{3.31641,-5.77417,-18.429},{-0.20752,-6.48682,-18.429},{-9.72412,-4.88745,-3.78903},{-9.57813,3.55615,-3.78903},{-7.16797,11.0737,-3.78903},{5.07422,11.1838,-3.78903},{9.3208,5.38623,-3.78903},{9.65332,-4.82056,-3.78903},{3.23535,-0.105957,-0.169027},{4.85205,-3.69019,-0.169027},{-0.80127,-7.89087,-0.169027},{-4.4082,-4.91772,-0.169027},{-4.90771,-2.23169,-0.169027}};
	};
	class Land_A_Office01: Office {
		lootPos[] = {{0.951172,5.1814,-3.668},{6.68164,5.77954,-3.828},{-4.54492,4.97656,-1.348},{-2.50391,-2.46948,-4.528},{4.23535,-0.336914,-4.528},{4.11133,6.1123,-4.528},{0.242188,6.06299,-4.528},{4.31641,3.74023,-4.528},{5.08887,0.219727,-4.528},{11.6504,-1.5647,-4.528},{14.5811,-4.1123,-4.528},{13.8545,-0.749023,-4.528},{-7.7627,5.59082,-4.528},{1.81152,0.993408,-2.028},{4.93164,4.31982,-2.028},{1.18945,6.07031,-2.028},{2.23145,3.76563,-2.028},{-4.76367,-2.51221,-2.028},{-14.5596,-3.40723,-2.028},{-15.2705,5.92773,-2.028},{-10.9063,6.04175,0.472008},{-6.30762,3.30078,0.472006},{7.6416,6.38696,0.472001},{13.6729,6.5957,0.471999},{13.1924,-2.58691,0.471998},{3.0918,2.4375,6.20491},{-1.45703,-2.28369,6.20491},{-2.12988,4.51587,0.472005},{4.74414,-4.60156,-2.01486},{8.3457,-1.10718,-2.028},{9.94727,-3.74146,-2.028},{7.13867,-2.50732,-2.028},{12.8701,4.70923,-2.028},{15.3721,3.42383,-2.028}};
	};
	class Land_A_Office02: Office {
		lootPos[] = {{4.72266,-5.74121,-8.15108},{0.961426,-5.16943,-8.15076}};
	};
	class Land_A_BuildingWIP: Industrial {
		lootChance = 0.5;
		lootPos[] = {{-4.62573,4.52344,-6.45268},{-12.6377,0.494141,-6.49242},{-14.6023,-8.62842,-6.49961},{-16.0005,-9.80957,-6.50423},{-15.5627,-5.17725,-6.50523},{0.94458,-2.30371,-6.43043},{7.28125,3.20898,-6.44042},{9.75708,10.1138,-6.40827},{14.771,7.29688,-6.47756},{15.4504,-0.314941,-6.52979},{20.4895,2.31836,-4.52571},{17.3123,-3.1001,-2.53291},{10.707,-6.51611,-2.53255},{2.22534,-9.21582,-2.534},{-8.91943,-7.18896,-2.53313},{-16.3179,-8.35645,-2.53357},{-21.3064,-6.7915,-2.53182},{-21.6018,-1.79541,-2.53182},{-17.5808,6.14746,-2.53182},{-23.198,8.44727,-2.53182},{-17.1973,9.58594,-2.53182},{-4.99023,9.80957,-2.53182},{14.0872,7.44092,-2.52676},{10.5796,-6.84912,1.48116},{-3.19116,-2.49463,1.49403},{-13.8186,3.98975,1.49829},{-15.9502,-6.17383,1.48802},{-20.6997,-16.9761,1.50282},{-15.415,-13.3901,5.46683}};
	};
	class Land_Church_01: Church {
		lootPos[] = {{-6.92102,-0.382813,-4.21339}};
	};
	class Land_Church_03: Church {
		lootPos[] = {{5.15332,-6.96875,-14.3021},{-1.79053,-7.68018,-14.3021},{-0.0263672,-2.98438,-14.3021},{-0.00341797,2.02246,-14.3021},{5.49878,7.20508,-14.3021},{5.38892,3.4043,-14.3021},{3.23657,2.76074,-14.3021},{-1.51001,7.66309,-14.3021},{-7.6416,4.8125,-14.3021},{-6.56592,-4.59131,-14.3021},{9.552,2.22363,-13.7588},{9.93262,-3.85254,-13.7588}};
		hangPos[] = {{1.72168,-8.39771,-0.172569},{2.08838,-14.4236,-0.27536},{-13.7158,-10.4808,-0.795174},{-12.9072,-16.4105,-0.895065}};
	};
	class Land_Church_02: Church {
		lootPos[] = {};
		maxRoaming = 2;
	};
	class Land_Church_02a: Church {
		lootPos[] = {};
		maxRoaming = 2;
	};
	class Land_Church_05R: Church {
		lootPos[] = {};
		maxRoaming = 2;
	};
	class Land_Mil_Barracks_i: MilitarySpecial {
		lootPos[] = {{5.39038,-1.75684,-1.09824},{1.46753,-0.131836,-1.09824},{1.29395,-2.16211,-1.09824},{-1.78394,-0.168945,-1.09824},{-1.80615,-1.97656,-1.09824},{-4.77881,0.0488281,-1.09824},{-5.39258,-2.11816,-1.09824},{-5.47046,2.58105,-1.09824},{-8.32593,-0.144531,-1.09824},{-9.14966,-2.55859,-1.09824},{-1.95288,2.57715,-1.09824},{5.46362,2.57813,-1.09824}};
	};	//Qty: 2
	class Land_A_TVTower_Base: Industrial {
		lootPos[] = {{-0.982422,-1.92627,-2.21573},{-2.01782,-4.2417,-2.21918},{-0.759277,1.42139,-2.21573}};
	};
	class Land_Mil_House: Military {
		vehPos[] = {{13.439,3.25244,-5.71244,84}};
		lootPos[] = {{12.457,1.4248,-5.81439},{11.0391,4.85278,-5.81439},{13.667,4.42139,-5.81439}};
	};
	class Land_Misc_Cargo1Ao: Industrial {
		lootPos[] = {{0.48877,-1.61377,-1.09224},{0.012207,2.19263,-1.09224},{0.00976563,0.19043,-1.09224}};
	};
	class Land_Misc_Cargo1Bo: Industrial {
		lootPos[] = {{-0.322021,1.68555,-1.09222},{0.548584,-1.96289,-1.09222},{0.223389,-0.580078,-1.09222}};
	};
	class Land_Nav_Boathouse: Industrial {
		lootPos[] = {{5.27588,5.51953,3.9203},{5.49609,0.106445,4.19408},{1.68945,7.5166,3.80288},{-5.03613,6.19141,3.91093},{-5.63037,-1.27246,4.41481},{-6.98779,5.52441,3.9814},{-2.92236,9.2002,3.73014},{6.99463,7.80859,3.80663},{7.00342,-2.07422,4.31929}};
	};
	class Land_ruin_01: Residential {
		lootPos[] = {{-4.31934,-0.115234,-1.45578},{3.41309,0.270508,-1.71365},{3.00293,3.42773,-1.55765},{0.62207,-1.73779,-1.49048}};
	};
	class Land_wagon_box: Industrial {
		lootPos[] = {{0.542969,-3.89453,-0.776679},{0.47998,-0.608398,-0.776638},{0.515381,3.03857,-0.776592}};
	};
	class Land_HouseV2_04_interier: Residential {
		lootPos[] = {{-3.65234,6.87573,-5.00152},{4.78516,2.62744,-5.07818},{1.59375,2.69629,-5.06737},{7.49463,5.8374,-5.73902},{7.50989,-0.930176,-5.74176},{1.95532,4.16406,-5.73938},{2.10876,6.60645,-5.7386},{-2.30017,4.22461,-5.73936},{-5.13306,6.74365,-5.73856},{-4.74658,2.68457,-5.73985}};
	};
	class Land_HouseV2_01A: Residential {
		lootPos[] = {{-3.52881,-3.16895,-5.60346},{-1.62988,-3.25439,-5.66887}};
	};
	class Land_psi_bouda: Residential {
		maxRoaming = 4;
		lootPos[] = {{-1.77002,-1.45166,1.95942}};
	}; // Qty: 183
	class Land_KBud: Residential {
		zombieChance = 0.3;
		maxRoaming = 0;
		lootPos[] = {{-0.0170898,0.0114746,-0.66367}};
	}; // Qty: 90
	class Land_A_Castle_Bergfrit: Residential {
		lootPos[] = {{0.0185547,1.91602,-2.8364},{1.19141,-1.43848,-2.8364},{-2.36816,3.32275,-0.628571},{2.36133,3.86768,1.83972},{2.48438,-3.20557,3.85541},{-2.09473,-3.44873,6.31903},{-1.15918,3.13867,8.76691},{1.74707,1.26807,8.76691},{-0.540039,-2.35254,8.76691},{-1.62207,-4.27979,13.4801},{-2.23047,4.82471,16.856},{1.67578,-0.825195,16.8505}};
	}; // Qty: 3
	class Land_A_Castle_Stairs_A: Residential {
		lootPos[] = {{0.697998,-1.79395,0.726929},{8.3938,0.890625,0.875122},{8.17261,1.48926,7.02588}};
	}; // Qty: 3
	class Land_A_Castle_Gate: Residential {
		lootChance = 0.7;
		lootPos[] = {{0.244141,-4.48486,-3.14362},{-1.25293,2.98779,-3.07028},{4.50684,-3.31152,-2.94885},{4.55176,3.29834,-2.94858},{7.94824,1.4082,-2.91003}};
	}; // Qty: 3
	class Land_Mil_Barracks: Military {
		lootPos[] = {};
	}; // Qty: 8
	class Land_Mil_Barracks_L: Military {
		lootPos[] = {};
	}; // Qty: 5 

	class Land_Barn_W_02: Farm {
		lootPos[] = {{3.16504,5.56543,-2.31409},{3.35938,-0.152344,-2.31305},{2.53613,-5.89453,-2.30957},{-2.94629,-5.01367,-2.31006},{-2.84375,0.212891,-2.31183},{-5.63281,4.8291,-2.31363}};
	}; // Qty: 3
	class Land_sara_domek_zluty: Residential {
		maxRoaming = 1;
		lootPos[] = {{2.95703,3.00732,-2.4337},{7.06738,2.95557,-2.4337},{6.36304,-0.236328,-2.43375},{0.627686,-0.586914,-2.43387},{-0.659912,2.05371,-2.4337},{-2.77515,0.751953,-2.43372},{-5.07666,3.04492,-2.43361},{-6.17139,-2.33691,-2.43382},{-3.75293,-3.54688,-2.43382}};
	}; // Qty: 3
	class Land_HouseV_3I4: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 103
	class Land_Shed_W4: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 172

	class Land_HouseV_3I1: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 103
	
	class Land_HouseV_1T: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 90
	class Land_telek1: Industrial {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 4
	class Land_Rail_House_01: Industrial {
		lootPos[] = {{2.81152,3.61426,-1.28266},{-1.82178,3.10547,-1.28266},{0.487793,3.38867,-1.28266}};
	}; // Qty: 9
	class Land_HouseV_2I: Default {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 83
	class Land_Misc_deerstand: Hunting {
		zombieChance = 0.3;
		lootChance = 0.5;
		maxRoaming = 3;
		lootPos[] = {{-0.923828,-0.808594,1.08539},{0.419922,-0.237305,1.08539}};
	}; // Qty: 56

	class Camp: Military {
		maxRoaming = 1;
		lootPos[] = {{0.833252,-1.52246,-1.15955},{0.38501,0.963867,-1.15955}};
	}; // Qty: 1

	class CampEast: Military {
		maxRoaming = 1;
		lootPos[] = {{-1.05713,-1.80762,-1.31049},{0.627441,1.83398,-1.31049}};
	}; // Qty: 1
	class CampEast_EP1: Military {
		maxRoaming = 1;
		lootPos[] = {{-0.670898,0.95459,-1.31049},{1.68506,-2.43384,-1.31049},{-1.76318,-1.62646,-1.31049}};
	}; // Qty: 1

	class MASH: Hospital {
		maxRoaming = 1;
		lootChance = 0.4;
		lootPos[] = {{1.18213,-1.65039,-1.17793},{0.24707,0.799316,-1.17803}};
	}; // Qty: 1
	class MASH_EP1: MASH{};
		
	class UH1Wreck_DZ: Military {
		zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
		zombieChance = 0.3;
		lootChance = 0.6;
		minRoaming = 4;
		maxRoaming = 8;
		lootPos[] = {};
	};

	class UH60Wreck_DZ: Military {
		zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
		zombieChance = 0.3;
		lootChance = 0.6;
		minRoaming = 4;
		maxRoaming = 8;
		lootPos[] = {};
	};

	class USMC_WarfareBFieldhHospital: MASH {
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_soldier","z_soldier_heavy"};
		lootPos[] = {{-3.52246,-5.03931,1.14726},{2.36621,-4.52295,1.14786},{1.39063,-0.423096,1.14746},{1.14258,5.00952,1.1478},{3.7124,1.89795,1.14788}};
	}; // Qty: 1

	class Land_Ind_Shed_02_main: Default {
		zombieChance = 0.3;
		maxRoaming = 3;
	}; // Qty: 283

	class HouseRoaming: Residential {
		lootChance = 0.5;
		zombieChance = 0.2;
		maxRoaming = 2;
	};
	class FarmRoaming: Farm {
		lootChance = 0.3;
		zombieChance = 0.4;
		maxRoaming = 2;
	};
	class Land_Shed_W03: HouseRoaming {}; // Qty: 206
	class Land_HouseV_1I3: HouseRoaming {}; // Qty: 117
	class Land_HouseV_1L1: HouseRoaming {}; // Qty: 97
	class Land_HouseV_1I2: HouseRoaming{};
	class Land_HouseV_2L: HouseRoaming{};
	class Land_HouseV_2T1: HouseRoaming{};
	class Land_houseV_2T2: HouseRoaming{};
	class Land_HouseV_3I2: HouseRoaming{};
	
	class Land_HouseBlock_A1: HouseRoaming{};
	class Land_HouseBlock_A1_2: HouseRoaming{};
	class Land_HouseBlock_A2: HouseRoaming{};
	class Land_HouseBlock_A2_1: HouseRoaming{};
	class Land_HouseBlock_A3: HouseRoaming{};
	class Land_HouseBlock_B1: HouseRoaming{};
	class Land_HouseBlock_B2: HouseRoaming{};
	class Land_HouseBlock_B3: HouseRoaming{};
	class Land_HouseBlock_B4: HouseRoaming{};
	class Land_HouseBlock_B5: HouseRoaming{};
	class Land_HouseBlock_B6: HouseRoaming{};
	class Land_HouseBlock_C1: HouseRoaming{};
	class Land_HouseBlock_C2: HouseRoaming{};
	class Land_HouseBlock_C3: HouseRoaming{};
	class Land_HouseBlock_C4: HouseRoaming{};
	class Land_HouseBlock_C5: HouseRoaming{};
	class Land_HouseV2_01B: HouseRoaming {}; // Qty: 20
	class Land_Misc_Cargo1D: HouseRoaming {}; // Qty: 29
	class Land_HouseV2_03: HouseRoaming {}; // Qty: 8
	class Land_Ind_Shed_01_end: HouseRoaming {}; // Qty: 266
	class Land_A_statue01: HouseRoaming {
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2","z_soldier","z_soldier_heavy","z_policeman"};
		minRoaming = 2;
		maxRoaming = 8;
	}; // Qty: 3
	class Land_Shed_W02: FarmRoaming {}; // Qty: 213
	//allow 
	class Grave: HouseRoaming {
		maxRoaming = 3;
	};
	class GraveCross1: HouseRoaming {	
		maxRoaming = 2;
	};
	class GraveCross2: HouseRoaming {	
		maxRoaming = 2;
	};
	class GraveCrossHelmet: Military {	
		maxRoaming = 4;
	};

	class Land_HouseV_1L2: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 101

	class Land_Misc_PowerStation: Industrial {
		lootPos[] = {{4.09888,4.89746,-1.26743},{4.22827,-1.19873,-1.2681}};
	};

	class Land_HouseV_3I3: HouseRoaming{};

	class Land_Mil_Guardhouse: Military {
		lootPos[] = {{-2.53271,3.17871,-1.66939},{-2.39014,0.878906,-1.66939}};
	};

	// DAYZ AMP More buildings
	class Mass_grave_DZ: HouseRoaming {	
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3","z_doctor","z_soldier_pilot","z_soldier_heavy"};
		minRoaming = 8;
		maxRoaming = 16;
		lootChance = 1;
		zombieChance = 1;
	};
	class Land_Shed_W02_EP1: FarmRoaming{};
	class Land_MBG_ApartmentsOne_W: HouseRoaming{};
	class Land_MBG_ApartmentsTwo_P: HouseRoaming{};
	class Land_MBG_ApartmentsTwo_G: HouseRoaming{};
	class Land_MBG_ApartmentsTwo_B: HouseRoaming{};
	class Land_Ind_FuelStation_Build_EP1: IndustrialFuel
	{
		lootChance = 0.5;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		lootPos[] = {{-1.34521,1.40698,-1.33611},{2.27051,-0.949951,-1.33611},{-2.23193,-1.146,-1.33589},{-0.185059,0.775146,-1.33609}};
	};
	class Land_ibr_FuelStation_Build: IndustrialFuel
	{
		lootChance = 0.5;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		lootPos[] = {{-1.34521,1.40698,-1.33611},{2.27051,-0.949951,-1.33611},{-2.23193,-1.146,-1.33589},{-0.185059,0.775146,-1.33609}};
	};
	class Land_Mil_ControlTower_EP1: Military
	{
		lootChance = 0.4;
		lootPos[] = {
			{ 5.53369,3.64355,-5.46368 },
			{ 7.67236,3.68115,-1.0687 },
			{ 7.53271,-1.70068,-1.0687 },
			{ 4.55225,1.64111,2.92148 },
			{ 10.1292,3.6958,-9.62869 },
			{ 0.491943,6.1543,-9.62869},
			{ 7.54956,1.74512,-0.378696},
			{5.40234,-1.71289,-0.378696}};
	};
	class Land_Mil_hangar_EP1: MilitaryIndustrial
	{
		maxRoaming = 3;
		lootPos[] = {{-9.83203,-12.4097,-5.38129},{10.5488,-12.1318,-5.38129},{13.002,0.0214844,-5.38129},{-13.3887,0.25,-5.38129},{13.3203,20.5176,-5.38129},{-13.1865,19.9839,-5.38129},{0.0195313,21.5078,-5.38129},{0.49707,11.5469,-5.38129},{-0.836914,-0.634277,-5.38129},{0.177734,-11.6821,-5.38129}};
	};
	class Land_Mil_Guardhouse_EP1: Military
	{
		lootPos[] = {{-3.05859,1.76514,-1.59003},{-3.16895,3.45361,-1.59003},{-3.19922,-0.323242,-1.59003}};
	};
	class Land_Mil_Repair_center_EP1: Industrial
	{
		lootPos[] = {
			{-2.42432,-0.73584,-1.52847},
			{-2.43018,2.83984,-1.52847}};
	};
	class Land_Ind_PowerStation_EP1: Industrial {
		lootPos[] = {{4.04248,-3.4917,-1.26547},{3.8645,3.5249,-1.28112}};
	};	
	class Land_Ind_TankBig: Industrial 
	{
		lootChance = 0.1;
		lootPos[] = {{0.610107,-0.210327,5.34627}};
	};
	class Land_Ind_Coltan_Main_EP1: Industrial {
		lootPos[] = {{4.57178,-9.46716,2.36833},{-3.41223,16.6705,-6.38571},{-2.18005,4.8584,-6.33167},{-1.8158,7.86523,-6.33167},{6.59717,16.1372,0.928326},{7.28076,16.1573,4.84833}};
	};
	class Land_A_Mosque_big_hq_EP1: Church {
		lootPos[] = {{4.06592,-6.90674,-9.31999},{5.25195,4.07666,-9.31999},{5.70264,7.5376,-4.04752},{-4.78857,-7.00684,-4.04753},{3.93262,9.41846,0.567287},{0.882324,-0.134766,-9.31999}};
	};
	class Land_A_Mosque_big_addon_EP1: Church {
		lootPos[] = {{-5.10791,-1.75098,-6.4124},{6.30908,-3.39795,-6.38554},{6.87109,2.81934,-6.38554},{2.14111,-4.38086,-6.35463},{4.86475,4.65576,-6.38554},{-4.72021,-10.5127,-1.15605}};
	};
	
	class Land_A_Mosque_big_wall_EP1: Church {
		lootPos[] = {{2.81543,3.9458,-2.02844},{-4.94531,3.60645,5.18165}};
	};
	class Land_A_Mosque_small_1_EP1: Church
	{
		lootPos[] = {
			{ 2.45117,3.39063,-2.04604 },
			{ 0.183105,0.826172,-2.04605 },
			{ 6.66406,4.11719,-1.9437 },
			{ 0.49707,-1.33301,-1.69603 }};
	};
	
	class Land_A_Mosque_small_2_EP1: Church
	{
		lootPos[] = {
			{ 1.33496,-0.726074,-2.48535 },
			{ -0.794922,-1.74414,-2.48538 }};
	};	
	class Land_Mil_Barracks_i_EP1: MilitarySpecial
	{
		lootChance = 0.2;
		maxRoaming = 2;
		lootPos[] = {
			{5.15625,-2.30371,-1.09824},
			{1.05664,-2.45508,-1.09824},
			{-0.841797,-2.36133,-1.09824},
			{-4.03516,-2.31836,-1.09824},
			{-8.49609,-2.33838,-1.09824}};
	};
	class Land_fortified_nest_big_EP1: Military
	{
		lootPos[] = {
			{0.663086,1.06738,-0.740341},
			{0.513184,-1.3623,-0.740341},
			{-0.991211,1.11621,-0.740341},
			{-2.87109,-3.94238,-0.740341}};
	};

	class Land_Mil_House_EP1: Military
	{
		vehPos[] = {
			{ 13.439,3.25244,-5.71244,84 }};
		lootPos[] = {
			{11.1523,4.25879,-5.72324},
			{10.918,1.30957,-5.72725},
			{ -2.24219,7.02441,-5.49397 }};
	};	
	class Land_Misc_Cargo1Bo_EP1: Industrial {
		lootPos[] = {{-0.0170898,-0.331421,-1.09225}};
	};
		
	class Land_Mil_Barracks_EP1: Military
	{
		lootPos[] = {};
	};
	class Land_Mil_Barracks_L_EP1: Military
	{
		lootPos[] = {};
	};
	class Land_vez: Military
	{
		maxRoaming = 1;
		lootPos[] = {{-0.582031,1.65479,1.35687},{0.116211,0.839355,1.39404},{-0.0498047,1.93262,1.3551}};
	};
	class Land_Shed_W03_EP1: Residential
	{
		maxRoaming = 3;
		lootPos[] = {};
	};
	class Land_Ind_Oil_Pump_EP1: Industrial
	{
		lootPos[] = {
			{ 1.49048,-1.99609,-2.08473 }};
	};
	class Land_IndPipe2_bigL_L_EP1: Industrial
	{
		lootPos[] = {
			{ 1.09961,1.11572,2.0323 }};
	};
	class Land_Barrack2: Hospital
	{
		maxRoaming = 1;
		lootChance = 0.4;
		lootPos[] = {
			{ -1.96484,4.15576,-0.689606 },
			{ 1.15381,0.3125,-0.691864 }};
	};
	class HMMWVWreck: Military
	{
		zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
		zombieChance = 0.3;
		lootChance = 0;
		minRoaming = 1;
		maxRoaming = 2;
		lootPos[] = {};
	};
	class UralWreck: Military
	{
		zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
		zombieChance = 0.3;
		lootChance = 0;
		minRoaming = 1;
		maxRoaming = 2;
		lootPos[] = {};
	};
	class SKODAWreck: Residential
	{
		zombieClass[] = {"zZombie_Base","z_hunter"};
		zombieChance = 0.3;
		lootChance = 0;
		minRoaming = 1;
		maxRoaming = 2;
		lootPos[] = {};
	};
	class UAZWreck: Residential
	{
		zombieClass[] = {"zZombie_Base","z_hunter"};
		zombieChance = 0.3;
		lootChance = 0;
		minRoaming = 1;
		maxRoaming = 2;
		lootPos[] = {};
	};
	class datsun01Wreck: Residential
	{
		zombieClass[] = {"zZombie_Base","z_hunter"};
		zombieChance = 0.3;
		lootChance = 0;
		minRoaming = 1;
		maxRoaming = 2;
		lootPos[] = {};
	};
	class hiluxWreck: Industrial
	{
		zombieClass[] = {"zZombie_Base","z_hunter"};
		zombieChance = 0.3;
		lootChance = 0;
		minRoaming = 1;
		maxRoaming = 2;
		lootPos[] = {};
	};
	class datsun02Wreck: Military
	{
		zombieClass[] = {"zZombie_Base","z_hunter"};
		zombieChance = 0.3;
		lootChance = 0;
		minRoaming = 1;
		maxRoaming = 2;
		lootPos[] = {};
	};
	
	class Land_Ind_Shed_01_EP1: Default
	{
		zombieChance = 0.3;
		maxRoaming = 3;
	};
	class DynamicDebris: Default
	{
		lootChance = 0.4;
		minRoaming = 0;
		maxRoaming = 2;
		zombieChance = 0.3;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		itemType[] = {
			{ "ItemWatch","generic" },
			{ "ItemCompass","generic" },
			{ "ItemMap","weapon" },
			{ "Makarov","weapon" },
			{ "Colt1911","weapon" },
			{ "ItemFlashlight","generic" },
			{ "ItemKnife","generic" },
			{ "ItemMatchbox","generic" },
			{ "ItemToolbox","weapon" },
			{ "","generic" },
			{ "","food" },
			{ "PartGeneric","magazine" },
			{ "PartWheel","magazine" },
			{ "PartFueltank","magazine" },
			{ "PartEngine","magazine" },
			{ "PartGlass","magazine" },
			{ "WeaponHolder_ItemJerrycan","object" }
		};
		itemChance[] = {
			0.191,
			0.012,
			0.062,
			0.024,
			0.024,
			0.055,
			0.055,
			0.055,
			0.022,
			0.169,
			0.055,
			0.066,
			0.055,
			0.033,
			0.011,
			0.078,
			0.033
		};
	}; 
	
	class DynamicDebrisMilitary: Default
	{
		lootChance = 0.4;
		minRoaming = 0;
		maxRoaming = 2;
		zombieChance = 0.3;
		zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
		itemType[] = {
			{ "ItemEtool","weapon" },
			{ "ItemSandbag","magazine"},
			{ "","military" },
			{ "ItemWatch","generic" },
			{ "ItemCompass","generic" },
			{ "ItemMap","weapon" },
			{ "MakarovSD","weapon" },
			{ "Colt1911","weapon" },
			{ "ItemFlashlight","generic" },
			{ "ItemKnife","generic" },
			{ "ItemMatchbox","generic" },
			{ "ItemToolbox","weapon" },
			{ "","generic" },
			{ "","food" },
			{ "PartGeneric","magazine" },
			{ "PartWheel","magazine" },
			{ "PartFueltank","magazine" },
			{ "PartEngine","magazine" },
			{ "PartGlass","magazine" },
			{ "PartVRotor","magazine" },
			{ "WeaponHolder_ItemJerrycan","object" }
		};
		itemChance[] = {
			0.050,
			0.100,
			0.080,
			0.100,
			0.020,
			0.050,
			0.010,
			0.020,
			0.010,
			0.050,
			0.050,
			0.020,
			0.150,
			0.050,
			0.060,
			0.050,
			0.030,
			0.02,
			0.03,
			0.02,
			0.03
		};
	};
	
	class MassGrave: Default {
		zombieChance = 1;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3","z_doctor","z_soldier_pilot","z_soldier_heavy"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] = {
			{ "M16A2","weapon" },
			{ "M16A2GL","weapon" },
			{ "M249_DZ","weapon" },
			{ "M9SD","weapon" },
			{ "Pecheneg_DZ","weapon"},
			{ "AK_74","weapon" },
			{ "M4A1_Aim","weapon" },
			{ "AKS_74_kobra","weapon" },
			{ "AKS_74_U","weapon" },
			{ "AK_47_M","weapon" },
			{ "M24","weapon" },
			{ "SVD_CAMO","weapon" },
			{ "M1014","weapon" },
			{ "BAF_LRR_scoped","weapon" },
			{ "DMR","weapon" },
			{ "M4A1","weapon" },
			{ "M14_EP1","weapon" },
			{ "UZI_EP1","weapon" },
			{ "Remington870_lamp","weapon" },
			{ "glock17_EP1","weapon" },
			{ "M240_DZ","weapon" },
			{ "M4A1_AIM_SD_camo","weapon" },
			{ "M16A4_ACG","weapon" },
			{ "M4A1_HWS_GL_camo","weapon" },
			{ "Mk_48_DZ","weapon" },
			{ "M4A3_CCO_EP1","weapon" },
			//Ammo
			{ "AmmoBoxSmall_556","object" },
			{ "AmmoBoxSmall_762","object" },

			//{"NVGoggles","weapon"},
			{ "Binocular","weapon" },
			{ "ItemFlashlightRed","military" },
			{ "ItemKnife","military" },
			{ "ItemGPS","weapon" },
			{ "ItemMap","military" },
			{ "Binocular_Vector","military" },

			{"DZ_ALICE_Pack_EP1","object"}, // 16
			{"DZ_TK_Assault_Pack_EP1","object"}, // 16
			{"DZ_British_ACU","object"}, // 18
			{"DZ_CivilBackpack_EP1","object"}, // 24
			{"DZ_Backpack_EP1","object"}, // 30		
			{"DZ_LargeGunBag_EP1","object"}, // 45

			{ "","medical" },
			{ "","generic" },
			{ "","military" },
			//{"Body","object"},
			{"PipeBomb","magazine"},
			{"Sa58V_RCO_EP1","weapon"},
			{"Sa58V_CCO_EP1","weapon"},
			{"G36_C_SD_camo","weapon"},
			{"M40A3","weapon"},
			{"100Rnd_762x54_PK","magazine"},
			{ "","militaryclothes" },
			{"WeaponHolder_ItemMachete", "object"},
			{ "SCAR_H_LNG_Sniper_SD","weapon" },
		};
		itemChance[] =	{
			0.03,
			0.01,
			0.01,
			0.02,
			0.01,
			0.02,
			0.01,
			0.01,
			0.02,
			0.02,
			0.01,
			0.01,
			0.02,
			0.01,
			0.01,
			0.01,
			0.02,
			0.03,
			0.01,
			0.02,
			0.02,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.03,
			0.03,
			0.01,
			0.02,
			0.01,
			0.01,
			0.01,
			0.01,
			0.03,
			0.02,
			0.02,
			0.02,
			0.01,
			0.01,
			0.05,
			0.05,
			0.14,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.05,
			0.02,
			0.01
		};
	};
	class Land_House_C_1_EP1: Residential
	{
		lootPos[] = {
			{ -3.70313,-0.119629,-0.927744 },
			{ -7.34131,-0.464844,-0.927744 },
			{ -6.0498,-2.62646,-0.927744 },
			{ 3.95093,-2.81006,-0.927744 },
			{ 3.69873,0.496582,-0.927744 },
			{ 6.72168,-1.4165,-0.927744 },
			{ 5.64063,-3.16113,-0.927744 }};
	};
	class Land_House_C_2_EP1: Residential
	{
		lootPos[] = {
			{ 1.09351,-0.86499,-2.31269 },
			{ 4.32935,-0.392578,-2.31269 },
			{ 0.98291,2.44946,-2.30486 },
			{ 3.63306,-0.0957031,0.785267 },
			{ -2.43628,-0.856689,0.547504 }};
	};
	class Land_House_C_3_EP1: Residential
	{
		lootPos[] = {
			{ 6.61987,-1.8667,-3.91483 },
			{ 5.80493,1.21094,-3.91483 },
			{ -7.11523,2.78418,-3.86868 },
			{ -6.45874,-0.478271,-3.86868 },
			{ -6.37598,-2.27344,-3.86868 },
			{ -4.84521,-2.55664,0.576136 },
			{ -1.21606,-1.24634,1.96108 }};
	};
	class Land_House_C_4_EP1: Residential
	{
		lootPos[] = {
			{ 5.38452,-0.364746,-3.48355 },
			{ 3.16089,2.81616,-3.48355 },
			{ -3.36499,2.44629,-3.48355 },
			{ -4.60474,0.0483398,-3.48355 },
			{ 4.34985,-0.835205,-0.35146 },
			{ 1.84668,-3.7168,-0.352423 },
			{ -1.23096,-5.15308,-0.27861 },
			{ -4.16602,2.48022,-0.348963 }};
	};
	class Land_House_C_5_EP1: Residential
	{
		lootPos[] = {
			{ 3.1499,2.39502,-1.36692 },
			{ -1.80127,-2.98022,-1.36692 }};
	};
	class Land_House_C_5_V2_EP1: Residential
	{
		lootPos[] = {
			{ 3.42529,1.77832,-1.36692 },
			{ -3.6687,1.98779,-1.36692 },
			{ -2.0271,-2.9126,-1.36692 },
			{ -1.271,-3.94385,1.33329 }};
	};
	class Land_House_C_5_V3_EP1: Residential
	{
		lootPos[] = {
			{ 2.59375,2.28711,-1.4715 },
			{ -2.56445,-3.37988,-1.4715 },
			{ 1.88525,2.08398,1.42051 },
			{ -1.42725,-4.34424,1.23343 }};
	};
	class Land_House_C_5_V1_EP1: Residential
	{
		lootPos[] = {
			{ 2.59375,2.28711,-1.4715 },
			{ -2.56445,-3.37988,-1.4715 },
			{ 1.88525,2.08398,1.42051 },
			{ -1.42725,-4.34424,1.23343 }};
	};
	class Land_House_K_6_EP1: Residential
	{
		lootPos[] = {
			{2.36108,1.41309,-1.60797},
			{-2.57178,1.42285,-1.59425},
			{-4.81445,2.98193,1.48639},
			{-0.123047,3.83203,1.47144},
			{2.7063,0.193359,4.42145},
			{-4.3584,-2.99609,4.33153},
			{-0.0888672,3.0293,4.42143},
			{2.10864,0.180664,1.47076},
			{-4.10083,-2.09082,1.55551}};
	};
	class Land_House_C_9_EP1: Residential
	{
		lootPos[] = {
			{ -3.47339,2.13086,-3.74726 },
			{ -3.17773,4.19849,-3.74837 },
			{ -0.839844,5.7041,-3.74944 },
			{ 4.67529,1.19897,-3.74832 },
			{ 4.20508,-1.85229,-3.74805 },
			{ 1.01074,-0.609619,-0.152166 },
			{ 0.213379,1.56616,-0.152166 },
			{ 1.66138,4.33472,-0.152166 },
			{ 4.38208,-5.14136,-0.152166 }};
	};
	class Land_House_C_10_EP1: Residential
	{
		lootPos[] = {
			{ -1.69873,-1.29932,-4.18862 },
			{ -1.44849,-6.23291,-4.19626 },
			{ 3.10547,-1.64893,-4.1758 },
			{ 2.32983,6.66553,-4.16892 },
			{ -1.91699,8.00635,-4.16562 },
			{ -2.5752,5.90967,-4.1708 },
			{ -0.346924,-6.49536,-0.869595 },
			{ 0.373047,-2.14429,-0.869452 },
			{ -2.33911,-5.66138,-0.86986 },
			{ -2.09888,1.83032,-0.868948 }};
	};
	class Land_House_C_11_EP1: Residential
	{
		lootPos[] = {
			{ -4.875,-3.75586,-2.45703 },
			{ -1.22852,-3.17529,-2.08453 },
			{ 6.55859,0.731934,-2.08453 },
			{ 4.74072,3.21436,-2.08453 },
			{ 4.39551,0.458984,-2.08453 },
			{ 0.449219,-3.03857,0.972969 },
			{ 4.8291,3.44629,0.972969 }};
	};
	class Land_House_C_12_EP1: Industrial
	{
		lootPos[] = {
			{ 6.2915,1.28516,-3.51101 },
			{ 6.84961,-2.6499,-3.51101 },
			{ 3.27588,-3.54541,-3.51101 },
			{ -1.03223,0.811768,-3.51101 },
			{ -2.31982,0.178223,-3.51101 },
			{ -2.46631,-6.43018,-3.51101 },
			{ -3.02686,-8.6123,0.136051 },
			{ 0.570801,-8.02637,0.139021 },
			{-2.84692,-2.58569,0.138428}};
	};
	class Land_House_K_3_EP1: Residential
	{
		lootPos[] = {
			{ 0.524414,3.5166,-0.53767 },
			{ 1.53491,-0.0644531,-0.790318 },
			{ -0.887451,0.615234,-0.790318 },
			{ -4.46191,1.38379,-0.795597 },
			{ 1.1001,5.40723,2.81719 }};
	};
	class Land_House_K_7_EP1: Residential
	{
		lootPos[] = {
			{ -0.995361,1.89014,-0.218372 },
			{ -4.9541,3.85254,-0.218374 },
			{ -3.4502,4.0376,3.32767 }};
	};
	class Land_House_L_7_EP1: Residential
	{
		lootPos[] = {
			{ 3.52979,-0.34375,0.102112 },
			{ -0.245117,3.10742,-0.261154 },
			{ -5.43408,3.36426,-0.646149 },
			{ -4.90137,1.19189,-0.651993},
			{ 0.214844,-3.70947,-1.00735}};
	};
	class Land_House_L_6_EP1: Residential
	{
		lootPos[] = {
			{ 5.51416,-0.64624,-1.509 },
			{ 1.1626,1.93677,-1.5399 },
			{ 4.20996,1.62158,1.28101 },
			{ 3.15381,-2.12427,1.28099 },
			{ -3.74268,-2.23193,-1.53738 }};
	};
	class Land_House_K_8_EP1: Residential
	{
		lootPos[] = {
			{ 2.47577,-2.24414,-2.56724 },
			{ -1.96313,-1.05566,-2.54675 },
			{ -2.44165,2.20215,-2.57804 },
			{ 1.6947,1.77832,-2.58702 },
			{ 0.350647,-0.424805,0.251534 },
			{ -0.741699,3.94141,0.252193 },
			{ -0.392883,3.23242,3.35996 },
			{ -1.83887,-0.766602,3.35996 }};
	};
	class Land_House_K_5_EP1: Residential
	{
		lootPos[] = {
			{ -2.40381,1.90674,1.51889 },
			{ -5.96777,0.826416,0.710116 },
			{ -3.05811,4.05676,1.52165 },
			{ 1.29199,1.85913,1.54825 },
			{ 4.40381,3.96619,2.26365 },
			{ 4.17725,0.271484,2.4009 },
			{ 1.30908,1.50195,1.55225 }};
	};
	class Land_House_K_1_EP1: Residential
	{
		lootPos[] = {
			{ -0.685547,4.02161,1.56626 },
			{ 3.71387,5.48114,1.56626 },
			{ 3.23438,2.35388,1.56626 },
			{ -3.30566,4.65558,1.54929 },
			{ -3.77539,2.02087,1.60863 }};
	};
	
	class Land_House_L_1_EP1: Residential
	{
		lootPos[] = {
			{1.63135,-1.2251,-0.619034},
			{-0.165039,-1.74463,-0.6114815},
			{-1.18311,-0.15918,-0.596542}};
	};
	class Land_House_L_3_EP1: Residential
	{
		lootPos[] = {
			{ -5.59863,-0.384766,-0.173644 },
			{ -5.23425,2.49609,-0.22691 },
			{ 0.75769,2.95508,-0.222477 },
			{ -0.387817,0.0234375,-0.222477 },
			{ 2.11365,2.99512,-0.222477 }};
	};
	class Land_House_L_4_EP1: Residential
	{
		lootPos[] = {
			{ -3.34961,-0.487122,-1.33058 },
			{ -6.60547,0.131348,-1.29852 },
			{ -0.385742,-0.0551758,-1.34066 },
			{ -0.209961,3.14941,-1.253 },
			{ 3.47559,0.370972,-1.05766 },
			{ 5.41992,3.25671,-1.01435 }};
	};
	class Land_House_L_9_EP1:  Residential
	{
		lootPos[] = {
			{ 4.4043,0.311035,-0.621445 },
			{ -2.23584,1.68604,-0.542923 },
			{ 4.0918,0.924805,2.60419}};
	};
	class LAND_ibr_bank: Office
	{
		lootPos[] = {
			{ 1.44702,-0.9551,-1.60158 },
			{ -7.40649,-4.9482,-1.60158 },
			{ -7.50879,3.1616,-1.60158 },
			{ -13.1931,3.0244,-1.60158 },
			{ -10.6316,-1.4922,-1.60158 },
			{ -10.3481,-5.6631,-1.60158 },
			{ -14.0247,-6.4653,-1.60158 },
			{ -10.1897,-2.6592,-1.60158 }};
	};
	class Land_House_L_8_EP1: Residential
	{
		lootPos[] = {
			{ 0.662598,5.04395,-1.01205 },
			{ 0.73291,2.59424,-1.01574 },
			{ 4.73828,3.56836,-0.773781 },
			{ 3.76758,3.67578,1.73622 },
			{ -2.51514,-2.19971,-1.55013 },
			{ -2.51514,-2.19971,-1.55013 }};
	};
	class Land_ibrhotel: Residential
	{
		lootPos[] = {
			{ -8.44922,9.08105,-7.74672 },
			{ -0.813965,9.1748,-7.74672 },
			{ 3.17383,11.873,-7.74672 },
			{ 2.74072,2.91016,-7.74672 },
			{ 3.80225,-2.44434,-7.85944 },
			{ -1.28711,-0.235352,-4.25943 },
			{ 17.8379,-8.18896,-4.25943 },
			{ 15.4878,-11.4014,-4.25943 },
			{ 11.8403,-17.5391,-4.25943 },
			{ 4.74902,-11.9019,-4.25943 },
			{ -9.04395,-17.6064,-4.25943 },
			{ -11.9761,-15.2539,-4.25943 },
			{ -15.9063,-12.082,-4.25943 },
			{ -12.2837,-4.31934,-4.25943 },
			{ -16.7495,9,-4.25943 },
			{ -15.7764,11.6875,-4.25944 },
			{ -11.9551,16.458,-4.25944 },
			{ -4.83203,12.1294,-4.25943 },
			{ -5.21436,6.14258,-4.25943 },
			{ 3.57373,5.38721,-4.25943 },
			{ 8.66553,17.2417,-4.25943 },
			{ 12.2725,16.1885,-4.25943 },
			{ 11.8359,4.06348,-4.25943 },
			{ 8.99023,1.72949,-4.25943 },
			{ -1.28711,-0.235352,-0.759062 },
			{ 17.8379,-8.18896,-0.759062 },
			{ 15.4878,-11.4014,-0.759062 },
			{ 11.8403,-17.5391,-0.759062 },
			{ 4.74902,-11.9019,-0.759062 },
			{ -9.04395,-17.6064,-0.759062 },
			{ -11.9761,-15.2539,-0.759062 },
			{ -15.9063,-12.082,-0.759062 },
			{ -12.2837,-4.31934,-0.759062 },
			{ -16.7495,9,-0.759062 },
			{ -15.7764,11.6875,-4.25944 },
			{ -11.9551,16.458,-4.25944 },
			{ -4.83203,12.1294,-0.759062 },
			{ -5.21436,6.14258,-0.759062 },
			{ 3.57373,5.38721,-0.759062 },
			{ 8.66553,17.2417,-0.759062 },
			{ 12.2725,16.1885,-0.759062 },
			{ 11.8359,4.06348,-0.759062 },
			{ 8.99023,1.72949,-0.759062 },
			{ -1.28711,-0.235352,2.74082 },
			{ 17.8379,-8.18896,2.74082 },
			{ 15.4878,-11.4014,2.74082 },
			{ 11.8403,-17.5391,2.74082 },
			{ 4.74902,-11.9019,2.74082 },
			{ -9.04395,-17.6064,2.74082 },
			{ -11.9761,-15.2539,2.74082 },
			{ -15.9063,-12.082,2.74082 },
			{ -12.2837,-4.31934,2.74082 },
			{ -16.7495,9,2.74082 },
			{ -15.7764,11.6875,-4.25944 },
			{ -11.9551,16.458,-4.25944 },
			{ -4.83203,12.1294,2.74082 },
			{ -5.21436,6.14258,2.74082 },
			{ 3.57373,5.38721,2.74082 },
			{ 8.66553,17.2417,2.74082 },
			{ 12.2725,16.1885,2.74082 },
			{ 11.8359,4.06348,2.74082 },
			{ -1.54492,0.158691,6.24485 },
			{ 3.11914,5.81445,6.24485 }};
	};
	class Land_MBG_Shanty_BIG: Residential
	{
		lootPos[] = {
			{ -29.8752,-15.8057,2.99997 },
			{ 23.4097,11.5024,24.9672 },
			{ -29.345,-16.7568,3.04013 },
			{ 23.2319,11.6201,27.9672 },
			{ -33.3779,-11.3564,5.81198 }};
	};
	class Land_dum_istan3_hromada2: Residential
	{
		lootPos[] = {
			{ 1.67627,3,-4.62603 },
			{ -1.47363,4.92285,-1.28517 },
			{ 6.43848,1.93555,2.08801 }};
	};
	class Land_budova4_in: Military
	{
		lootPos[] = {
			{ -6.50415,2.1416,-1.88723 },
			{ -1.66162,2.10168,-1.88723 },
			{ 2.94312,2.297,-1.88723 },
			{ 5.34082,-1.82922,-1.88723 }};
	};
	class land_army_hut_int: Military
	{
		lootPos[] = {
			{ 2.7959,-5.07373,-1.33056 },
			{ 2.79785,-2.1626,-1.33056 },
			{ -0.943359,-0.060791,-1.35981 },
			{ 0.689453,1.87134,-1.36167 }};
	};
	class Land_army_hut3_long_int: Military
	{
		lootPos[] = {
			{ -2.88721,-4.36035,-1.23617 },
			{ 0.753906,-3.90039,-1.23617 },
			{ -2.53711,-1.95117,-1.23617 },
			{ -2.27856,-0.211914,-1.23617 },
			{ -0.0664063,-1.70801,-1.23617 },
			{ 0.141113,2.31104,-1.23617 }};
	};
	class land_army_hut2_int: Military
	{
		lootPos[] = {
			{ -0.421387,-0.0517578,-0.948329 },
			{ 1.80103,0.945313,-0.948329 },
			{ 2.24585,-2.6875,-0.948329 },
			{ -1.24561,-1.53955,-0.948329 }};
	};
	class land_ibr_hangar: MilitaryIndustrial
	{
		lootPos[] = {
			{ -5.75635,9.95386,-3.57318 },
			{ -8.06152,-11.4065,-3.58192 },
			{ 8.68555,-5.30371,-3.57942 }};
	};
	class Land_MBG_Police_Station: Office
	{
		lootPos[] = {
			{ 9.81543,-4.36365,-1.59829 },
			{ 1.01172,-6.02344,-1.59829 },
			{ -5.03369,-5.98376,-1.59829 },
			{ -8.5415,-0.348511,-1.59829 },
			{ -8.88574,-2.93823,-1.59829 },
			{ -5.55518,4.80493,-1.59829 },
			{ -1.77246,5.49365,-1.59829 },
			{ 2.32129,6.33032,-1.59829 },
			{ 3.54492,6.27332,1.68834 },
			{ 9.88916,4.68176,1.68833 },
			{ 10.0566,-1.07727,1.68833 },
			{ 6.6499,1.78296,1.68833 },
			{ -5.30029,-2.68726,1.68833 },
			{ 1.25977,-1.76636,1.68833 },
			{ -6.56689,1.51843,1.68834 },
			{ -5.33887,3.92529,1.68834 },
			{ -2.3125,6.18774,1.68834 }};
	};
	class Land_dum_mesto_in: Residential
	{
		lootPos[] = {
			{ -5.53796,-2.51996,-3.99769 },
			{ -4.66113,1.34052,-4.26331 },
			{ -4.9137,3.4718,-4.26331 },
			{ 0.397583,-2.74866,-4.26418 },
			{ 2.18762,0.74707,-4.26418 },
			{ 4.94128,-1.67108,-4.26418 },
			{ 4.48279,2.82495,-4.26418 },
			{ 1.11023,4.69928,-2.75561 },
			{ 4.98938,3.79883,-1.28095 },
			{ 5.55957,-1.61218,-1.28095 },
			{ 0.695679,-2.18268,-1.28095 },
			{ -2.42969,-1.18854,-1.27582 },
			{ -4.77722,3.51996,-1.27582 }};
	};
	class Land_tovarna1: Industrial
	{
		lootPos[] = {
			{ 2.83887,5.23889,-5.75442 },
			{ -2.30774,7.31934,-5.75442 },
			{ -11.0908,5.44897,-5.75442 },
			{ -11.4746,-1.5791,-5.75442 },
			{ -5.52405,1.68994,-5.75442 },
			{ 2.82605,1.4801,-5.75442 },
			{ 2.44128,-6.50256,-5.75442 },
			{ -6.68335,-0.453369,2.17997 },
			{ -3.81812,0.690186,2.17997 },
			{ 2.78735,1.19409,2.17997 },
			{ 1.59167,-6.06665,2.17997 },
			{ -2.4646,-5.63696,2.17997 },
			{ -5.77393,-7.28271,2.17997 },
			{ -0.484985,-3.14197,4.82992 }};
	};
	class Land_Ind_Garage01_EP1: Industrial
	{
		lootPos[] = {
			{-0.568359,3.44775,-1.45221},
			{2.21069,2.98193,-1.45871},
			{-1.01465,-1.44189,-1.46152},
			{1.61694,0.546875,-1.46152}};
	};
	class land_hut01: Residential
	{
		lootPos[] = {
			{ 0.304749,-0.543213,-0.448339 },
			{ 0.885254,2.90747,-0.44834 }};
	};
	class land_hut02: Residential
	{
		lootPos[] = {
			{ -0.498901,2.974,-0.445764 },
			{ -1.07245,-0.756958,-0.445764 }};
	};
	class land_hut04: Residential
	{
		lootPos[] = {
			{ -1.07227,-0.354492,-0.437198 },
			{ 0.939697,2.78271,-0.437198 }};
	};
	class Land_Ind_Oil_Tower_EP1: Industrial
	{
		lootPos[] = {
			{ 3.55743,-5.92773,-12.9755 },
			{ 4.63086,1.24902,-12.9932 },
			{ -0.240356,-1.08252,-12.9875 },
			{ 6.87689,-6.34961,-8.00889 },
			{ 2.31177,0.231689,-8.00478 }};
	};
	class Land_ibr_terminal: Office
	{
		lootPos[] = {
			{ 11.1885,-13.0669,-4.04974 },
			{ 4.42383,-9.64746,-4.04974 },
			{ -2.42822,-6.94775,-4.04974 },
			{ -3.00537,-1.25439,-4.04974 },
			{ 0.473145,8.72314,-4.04974 },
			{ 14.8608,12.5249,-4.04974 },
			{ 3.33838,-14.5229,0.581566 },
			{ -3.88428,-17.5376,0.581566 },
			{ -17.3682,0.572266,-4.05001 },
			{ -13.7939,0.576172,-0.231342 },
			{ -2.83545,10.9009,-0.949741 },
			{ -2.27686,-16.4238,3.68157 }};
	};
	class Land_A_Villa_EP1: Office
	{
		lootPos[] = {
			{ -23.3442,1.71484,-3.65929 },
			{ 14.5498,-5.69775,-5.06722 },
			{ 5.8457,-2.09814,-5.06717 },
			{ 9.5249,3.76563,-5.06717 },
			{ 10.0454,11.5093,-5.0734 },
			{ 0.268555,8.64648,-5.06699 },
			{ -0.378906,15.3989,-5.06724 },
			{ -6.68506,14.9448,-5.06722 },
			{ -10.9644,13.0996,-5.06719 },
			{ 11.0571,4.48926,-1.48401 },
			{ 2.85938,9.12939,-1.48407 },
			{ -3.87646,8.01416,-1.4844 },
			{ 0.0537109,10.3984,-1.4844 },
			{ -2.78467,13.5903,-1.4844 },
			{ -0.118652,15.3394,-1.4844 },
			{ -6.73779,15.772,-1.4844 },
			{ -8.39453,13.5249,-1.4844 },
			{ -10.5317,9.75146,-1.4844 },
			{ -11.8062,14.2358,-1.4844 },
			{ -15.5771,14.0396,-1.4844 }};
	};
	class Land_A_Office01_EP1: Land_A_Office01
	{
		lootPos[] = {
			{ -2.50391,-2.46948,-4.728 },
			{ 4.23535,-0.336914,-4.728 },
			{ 4.11133,6.1123,-4.728 },
			{ 0.242188,6.06299,-4.728 },
			{ 4.31641,3.74023,-4.728 },
			{ 5.08887,0.219727,-4.728 },
			{ 11.6504,-1.5647,-4.728 },
			{ 14.5811,-4.1123,-4.728 },
			{ 13.8545,-0.749023,-4.728 },
			{ -7.7627,5.59082,-4.728 },
			{ 1.81152,0.993408,-2.228 },
			{ 4.93164,4.31982,-2.228 },
			{ 1.18945,6.07031,-2.228 },
			{ 2.23145,3.76563,-2.228 },
			{ -4.76367,-2.51221,-2.228 },
			{ -14.5596,-3.40723,-2.228 },
			{ -15.2705,5.92773,-2.228 },
			{ -10.9063,6.04175,0.672008 },
			{ -6.30762,3.30078,0.672006 },
			{ 7.6416,6.38696,0.672001 },
			{ 13.6729,6.5957,0.671999 },
			{ 13.1924,-2.58691,0.671998 },
			{ 3.0918,2.4375,6.20491 },
			{ -1.45703,-2.28369,6.20491 },
			{ -2.12988,4.51587,0.672005 },
			{ 4.74414,-4.60156,-2.21486 },
			{ 8.3457,-1.10718,-2.228 },
			{ 9.94727,-3.74146,-2.228 },
			{ 7.13867,-2.50732,-2.228 },
			{ 12.8701,4.70923,-2.228 },
			{ 15.3721,3.42383,-2.228 }};
	};
	class Land_A_Stationhouse_ep1: Land_a_stationhouse{};
	class Land_ibrPanelak: Land_Panelak{};
	class Land_ibrPanelak2: Land_Panelak2{};

	class Land_Ind_Expedice_1: Industrial
	{
		lootPos[] = {
			{0.0288086,12.9844,-3.48673},
			{-0.336914,-9.47803,-3.48673},
			{-6.54541,-18.1621,-3.48673},
			{0.291992,-0.246582,-5.6839},
			{-2.23682,18.832,-5.6839},
			{5.79248,-18.0845,-5.75725}};
	};

	// Isla Dula
	class land_dum_istan2b: Residential
	{
		lootPos[] = {
			{-6.44531,-5.13037,3.80019},
			{-6.71777,2.81592,3.80019},
			{ 3.33887,-0.539307,0.822979},
			{-0.506836,-2.2229,0.822979},
			{-3.93457,2.11401,-2.29981}};
	};
	
	class Land_dum_olez_istan2: HouseRoaming{};
	class Land_dum_olez_istan2_maly2: HouseRoaming{};
	class land_dum_mesto3_istan: HouseRoaming{};
	class land_dum_istan2_03a: HouseRoaming{};
	
	
	

	class Land_dum_istan3_pumpa: Residential
	{
		lootPos[] = {
			{-2.14502,3.03662,-1.86787},
			{4.09619,-0.563965,1.47485},
			{0.189453,0.540039,1.47485},
			{-1.73682,2.44775,1.47485}};
	};
	class land_dum_istan3: Residential
	{
		lootPos[] = {
			{-8.4917,-0.922363,0.585144},
			{5.97852,1.38037,0.585148},
			{3.55176,-5.42822,0.58514},
			{-2.33105,3.74805,-2.67237}};
	};
	class land_house_y: Residential
	{
		lootPos[] = {
			{-0.570313,-5.21387,-1.40696},
			{-5.15625,-5.32275,-1.40696},
			{2.34766,4.9917,-1.40696}};
	};
	class land_dum_istan4_inverse: Residential
	{
		lootPos[] = {
			{-2.77246,-1.72949,-4.33588},
			{5.30176,5.76563,-7.28588},
			{-0.282227,5.89746,-7.28588},
			{-6.5918,5.96973,-7.28588}};		
	};
	class Land_duala_mini: Residential
	{
		lootPos[] = {
			{-1.37207,2.25488,-2.74846},
			{-3.43457,-2.04932,-2.74846},
			{3.82959,0.034668,-2.74846},
			{3.79102,-2.25977,-2.74846}};
	};
	class Land_hut_old02: Industrial
	{
		lootPos[] = {
			{-5.60449,-1.20215,-3.03296},
			{-3.80371,-2.33154,-3.03296},
			{2.10156,-8.16406,-3.03296},
			{3.87402,8.28125,-3.03296}};
	};
	class land_dum_istan2_02: Industrial
	{
		lootPos[] = {
			{-0.566406,-3.44775,-4.14959},
			{-2.00146,1.43604,-4.14959}};
	};
	class LAND_garaz_bez_tanku: Industrial
	{
		lootPos[] = {
			{-5.896,3.05811,3.41651},
			{6.37305,3.27734,3.41651},
			{-0.501953,-0.195801,3.41651}};
	};
	class land_mbg_brickhouse_01: Residential
	{
		lootPos[] = {
			{-7.06543,4.02197,-0.051506},
			{5.55518,-0.523438,-0.051506},
			{-0.717773,4.01855,-0.051506},
			{-2.00293,-2.35107,-3.35652},
			{4.99219,-0.20752,-3.35652},
			{-6.80469,3.94043,-3.35652}};
	};
	class land_bouda_garaz: Industrial
	{
		lootPos[] = {
			{26.1628,-12.502,-0.952108},
			{23.3086,-6.62305,-0.952108}};
	};


	// Taviana 1.0 building loots
	class Land_majak_podesta: Residential
	{
		lootPos[] = {
			{-1.22461,-2.17969,2.28329},
			{1.14844,-2.9707,2.28329}};
	};
	// blue trailer - Also affects chernarus
	class Land_Shed_M02: Industrial
	{
		//lootPos[] = {{-8.28613,-5.3457,-0.277144}};
	};
	class Land_sara_Domek_sedy: Residential
	{
		lootPos[] = {
			{-1.76367,-1.11328,-2.14196},
			{-5.0127,3.01953,-2.14196},
			{5.41211,2.625,-2.14196},
			{4.86035,-0.738281,-2.14196}};
	};
	class Land_dum_rasovna: Residential
	{
		lootPos[] = {
			{-1.53516,3.375,-2.66958},
			{1.10938,-0.664063,-2.66958},
			{0.65625,4.17773,0.272606},
			{-1.43555,-1.49023,0.272606},
			{-0.425781,-3.70703,0.272606}};
	};
	class Land_leseni2x: Industrial
	{
		lootPos[] = {
			{1.15625,-0.206055,2.55466}};
	};
	// Train Station
	class LAND_vokzal_big: Residential
	{
		lootPos[] = {
			{7.28613,-0.216797,-7.96283},
			{6.84961,2.56152,-7.96283},
			{6.9834,-4.98047,-7.96283},
			{-7.07227,1.28223,-7.96283}};
	};

	class Land_dum_mesto2: Residential
	{
		lootPos[] = {
			{2.46582,7.10742,-4.34475},
			{2.87305,4.03906,-4.34475},
			{-3.56738,4.05078,-4.34475},
			{-2.49902,0.46875,-4.34475},
			{1.77734,-7.41797,-4.34475},
			{-3.24512,-7.69922,-4.34475},
			{-3.16113,-1.58984,-4.34475},
			{3.19531,1.64258,-0.945168},
			{-3.19141,7.76563,-0.944004},
			{-0.253906,4.78516,-0.944004},
			{-3.35645,-5.74414,-0.944004},
			{-1.70508,-7.22656,-0.944004},
			{1.21973,-1.07617,-0.944004}};
	};
	// Large Supermarket
	class LAND_shopping_sab5: Supermarket
	{
		lootPos[] = {
			{-21.1367,-1.94238,-2.18279},
			{-22.1387,5.40918,-2.18285},
			{-5.17383,-1.17773,-2.1828},
			{2,-12.3975,-2.18271},
			{-4.03906,-11.5391,-2.18272},
			{-9.62109,-11.6016,-2.18272},
			{-15.1699,-11.5225,-2.18272},
			{-18.5156,-12.9307,-2.18271},
			{-20.3633,-10.1182,-2.18273},
			{-17.1367,-6.3623,-2.18276},
			{-12.0098,-3.98535,-2.18277},
			{-14.1758,4.46973,-2.18284},
			{-15.7285,-1.02539,-2.1828},
			{3.40625,4.30664,-2.18284},
			{6.83789,-3.75391,-1.36222},
			{-1.27344,10.9521,-1.36222},
			{-22.4199,9.1084,-1.36222},
			{1.22461,8.13672,-2.18285},
			{-3.18164,8.71484,-2.18285},
			{-7.77344,7.51563,-2.18285}};
	};
	class LAND_Zachytka : Residential
	{
		lootPos[] = {
			{3.79492,-4.12891,-2.02697},
			{-4.92285,-6.8584,-2.02697},
			{-3.6543,-6.7002,-2.02697},
			{-2.60449,-6.87891,-2.02697},
			{-1.82422,0.0361328,-2.02697},
			{-6.2832,-4.51074,-2.02697},
			{-3.60547,5.1875,-2.02697},
			{4.42188,11.2158,-2.02697}};
	};
	class LAND_hospoda  : Residential
	{
		lootPos[] = {
			{3.46094,-1.42871,-1.80302},
			{2.40137,-1.22656,-1.80307},
			{7.81836,-1.63281,-1.80282},
			{2.04004,-6.71777,-1.80289},
			{-5.56641,0.793945,-1.80295},
			{-4.18164,8.64063,-1.80286},
			{1.16602,5.0791,-1.80348},
			{1.21582,3.73242,-1.8034},
			{0.248047,5.55176,-1.80324},
			{-1.84766,3.92969,-1.80313},
			{-1.85254,0.222656,-1.80321}};
	};
	class LAND_Kiosk2 : Residential
	{
		lootPos[] = {
			{-20.7441,45.2878,3.05876},
			{-3.80933,-33.6328,3.02246},
			{-3.57007,-22.666,3.02246},
			{4.76587,-24.3711,-0.618923},
			{-1.10449,43.1938,-0.58263},
			{8.77441,23.7346,-0.845428},
			{-9.86914,41.6533,3.05876},
			{7.84668,20.991,4.76736},
			{6.91211,27.9067,10.1178}};
	};
	class Land_deutshe_mini : Residential
	{
		lootPos[] = {
			{-4.34277,-2.54297,-2.74846},
			{-0.624023,-0.357422,-2.74846},
			{0.853516,1.04395,-2.74846},
			{-2.75781,2.44336,-2.74846}};
	};
	class LAND_shopping_sab1 : Supermarket
	{
		lootPos[] = {
			{-30.0442,28.7891,-6.25663},
			{-18.561,23.7578,-6.25663},
			{1.32031,24.5879,-6.25663},
			{-7.86792,15.1182,-6.25663},
			{-22.3628,16.8828,-6.25663},
			{-26.7896,-24.9424,-6.25663},
			{-22.4546,-17.333,-6.25663},
			{-30.6628,-11.0195,-6.25663},
			{-2.51978,-23.1719,-6.25663},
			{0.889893,-14.1914,-6.25663},
			{23.3015,-15.1357,-6.25663},
			{42.353,-13.5322,-6.25663},
			{37.3396,-22.9014,-6.34278},
			{14.5388,-26.2158,-6.25663},
			{9.93091,-18.2871,-6.25663},
			{7.23315,24.9834,-6.25663},
			{8.8877,16.46,-6.25663},
			{16.9697,11.9541,-6.25663},
			{27.3679,21.3857,-6.25663},
			{-28.7632,27.7227,-2.38664},
			{33.5342,16.8047,-6.25663},
			{-31.0317,12.626,-2.38664},
			{-22.1975,16.3066,-2.38664},
			{-17.7339,21.0166,-2.38664},
			{-8.78564,27.5811,-2.38664},
			{-7.71826,15.2012,-2.38664},
			{1.65771,16.3496,-2.38664},
			{-36.4099,8.60352,-2.38664},
			{-43.6084,8.64258,-2.38664},
			{-41.8218,-2.6748,-2.38664},
			{-35.7854,-5.95313,-2.38664},
			{-16.2727,-13.2295,-2.38664},
			{-23.0032,-13.2764,-2.38664},
			{-25.6714,-25.6045,-2.38664},
			{-10.1611,-26.001,-2.38664},
			{2.98145,-26.7119,-2.38664},
			{2.59131,-13.5352,-2.38664},
			{10.7913,-16.2617,-2.38664},
			{17.1582,-27.3232,-2.38664},
			{26.3887,-25.0986,-2.38664},
			{30.8889,-22.1074,-2.38664},
			{42.4817,-21.6602,-2.47279},
			{41.8726,-13.7373,-2.38664},
			{32.7183,-12.5967,-2.38664},
			{34.2241,-5.04199,-2.38664},
			{40.2024,-7.14941,-2.38664},
			{39.8079,-0.0917969,-2.38664},
			{43.5059,6.59766,-2.38664},
			{33.3914,3.02148,-2.38664},
			{29.0322,11.1025,-2.38664},
			{33.1868,17.4531,-2.38664},
			{22.3228,26.3857,-2.38664},
			{7.32861,23.8564,-2.38664}};
	};
	class LAND_skola : Residential
	{
		lootPos[] = {
			{15.8508,20.459,-2.00361},
			{29.0132,22.3887,-2.00361},
			{30.6335,16.1104,-2.00361},
			{30.7412,5.33691,-2.00361},
			{18.7554,5.07324,-2.00361},
			{2.84912,14.2744,-2.00361},
			{-1.27197,12.2324,-2.00361},
			{-5.66699,16.6445,-2.00361},
			{-2.93408,22.0967,-2.00361},
			{5.48535,21.7969,-2.00361},
			{-9.52954,-8.64063,-2.00361},
			{-18.5305,-9.60449,-2.00361},
			{-23.9783,-0.905273,-2.00361},
			{-8.50586,13.9482,-2.00361},
			{5.84448,0.175781,-2.00361},
			{2.56885,-14.167,-2.00361},
			{-3.15063,-14.084,-2.00361},
			{-3.76294,-21.2754,-2.00361},
			{5.4397,-24.5635,-2.00361},
			{18.5049,-11.9141,-2.00361},
			{10.7795,-18.4443,-2.00361},
			{18.3979,-21.9854,1.22083},
			{20.1707,-14.1572,1.22083},
			{30.334,5.12402,1.22083},
			{22.9521,12.1387,1.22083},
			{1.45825,18.208,1.22083},
			{-5.56128,20.1572,1.22083},
			{-6.19165,15.4678,1.22083},
			{-1.05029,9.69141,1.22083},
			{6.17896,5.19434,1.22083},
			{5.00513,2.78711,1.22083},
			{5.81836,-5.65625,1.22083},
			{-0.54541,-15.1104,1.22083},
			{1.8418,-19.8584,1.22083},
			{-2.10864,-21.9961,1.22083},
			{-5.78857,-24.9277,1.22083},
			{16.3679,-15.4463,1.22083},
			{28.0537,-17.1328,1.22083},
			{22.1833,11.416,-2.00361}};
	};
	class LAND_konecna : Office
	{
		lootPos[] = {{14.8423,-0.987793,-1.59364},
			{16.873,-2.86865,-1.59364},
			{13.3672,-9.11377,-1.59364},
			{5.09497,-9.98682,-1.59364},
			{-24.8281,-1.17871,-1.59364},
			{-14.0747,-7.3042,-1.59364},
			{-19.0789,0.98291,-1.59364},
			{4.67944,0.805176,-1.59364},
			{-11.4639,-10.1475,-1.59364}};
	};
	class LAND_Tav_Panelak2 : Residential
	{
		lootPos[] = {{2.7627,-5.62524,5.43665},
			{2.63867,-0.156494,5.43665},
			{3.4873,2.76855,5.43665},
			{6.06152,3.64966,5.43665},
			{6.70996,0.734619,5.43665},
			{4.71875,-1.69263,5.43665},
			{-0.347656,-2.23315,5.43665},
			{0.814453,-1.73901,2.71097},
			{-0.545898,-2.29468,2.71097},
			{-0.415039,4.25122,1.32864},
			{0.75,-2.01318,0.0714264},
			{0.644531,-1.86401,-2.62859}};
	};
	class LAND_Tav_panelak : Residential
	{
		lootPos[] = {{5.24121,-6.39453,2.77144},
			{6.71191,-5.43262,2.77144},
			{4.65625,-1.83838,2.77144},
			{6.69531,0.225586,2.77144},
			{6.54395,3.06519,2.77144},
			{3.40234,3.32324,2.77144},
			{2.61523,0.798096,2.77144},
			{2.7041,-4.98389,2.77144},
			{3.66016,-6.17651,2.77144},
			{-0.982422,-1.86328,2.77144},
			{-0.904297,4.13086,1.32864},
			{0.942383,-2.10474,0.0714226},
			{-2.56836,-1.68628,0.0714226},
			{-2.69531,3.42407,0.0714226},
			{-6.24902,3.01392,0.0714226},
			{-6.07227,0.556396,0.0714226},
			{-5.75488,-2.03857,0.0714226},
			{-6.66406,-4.34497,0.0714226},
			{-5.49219,-6.70581,0.0714226},
			{-2.41602,-4.19434,0.0714226},
			{-3.70801,-6.17212,0.0714226}};
	};
	class LAND_Tav_Panelak3 : Residential
	{
		lootPos[] = {{0.0878906,0.793457,-10.8154},
			{-0.810547,3.44824,-10.8154}};
	};
	class LAND_Big_Panelak : Residential
	{
		lootPos[] = {{3.30566,-9.23413,-14.7521},
			{3.10059,-7.05005,-14.7521},
			{5.36914,0.495361,-14.7521},
			{-0.236328,-3.16772,-14.7521},
			{3.05078,-0.838379,-14.7521}};
	};
	
	class LAND_Posta : Residential
	{
		lootPos[] = {{-17.4678,-9.28809,1.00044},
			{-16.5732,-1.32227,1.00044},
			{-3.60254,-5.11377,1.00044},
			{9.72168,-6.61035,1.00044},
			{17.333,-8.2085,1.00044},
			{13.3633,7.1958,1.00044},
			{1.56445,8.49707,1.00044}};
	};
	 
	// Proving grounds PMC
	class Land_GeneralStore_01a_PMC : Supermarket
	{
		lootPos[] = {{-8.28796,-0.435303,-1.20155},
			{-4.33252,5.51575,-1.20155},
			{1.05743,5.22791,-1.20155},
			{7.36511,2.40076,-1.20155},
			{13.2913,4.79199,-1.20155},
			{3.06958,7.47021,-1.20155},
			{7.43213,-0.266724,-1.20155},
			{13.5172,-1.04089,-1.20155},
			{10.0657,-1.31946,-1.20155},
			{3.42236,-3.46387,-1.20155},
			{-1.89722,-2.65051,-1.20155},
			{-7.28711,-1.95728,-1.20155}};
	};
	class Land_ruin_01_PMC : Residential
	{
		lootPos[] = {{-2.57568,2.16443,-1.76358},
			{-2.64172,-2.50488,-1.76358},
			{0.851563,1.67505,-1.76358}};
	};
	class Land_Ruin_Cowshed_a_PMC : Residential
	{
		lootPos[] = {{-3.573,2.80774,-2.31227},
			{8.85077,-2.67871,-2.46388},
			{-2.83069,-5.90613,-2.46388},
			{8.89893,-5.66711,-2.46388}};
	};
	class Land_Ruin_Cowshed_b_PMC : Residential
	{
		lootPos[] = {{10.4032,2.35046,-3.14048},
			{2.99207,-3.36682,-3.13994}};
	};
	class Land_Ruin_Cowshed_c_PMC : Residential
	{
		lootPos[] = {{5.05737,2.52881,-3.09486}};
	};
	class Land_FuelStation_Build_PMC : IndustrialFuel
	{
		lootPos[] = {{-1.29761,-0.527832,-1.336},
			{-1.51141,1.30359,-1.33611},
			{2.23376,0.0710449,-1.33611}};
	};
	// Namalsk
	class land_seb_vod_vez: Industrial {
		lootPos[] = {{2.02881,0.0849609,15.155}};
	};
	class land_seb_near_fac: Industrial {
		lootPos[] = {{-10.4116,-18.0859,1.75552}};
	};
	class land_seb_rozvodna: Industrial {
		lootPos[] = {{-1.2168,2.9668,0.583904}};
	};
	class land_seb_mine_maringotka: Residential {
		lootPos[] = {{0.423828,0.721191,-0.612675},{-0.976563,-1.32764,-0.612675}};
	};
	class Land_hut_old01: Residential {
		lootPos[] = {{2.2793,-7.06348,-3.06107},{-3.3584,-1.7334,-3.01178},{-5.0332,-0.929688,-3.0112}};
	};
	class land_st_vez: MilitarySpecial {
		lootPos[] = {{-5.56445,4.23975,-3.31476},{-5.05566,-3.17627,-3.31476},{4.12109,3.92822,2.42732},{-1.73389,2.68896,6.40834},{-4.23584,1.29736,6.40834},{-3.80322,-1.09277,6.40834},{0.430664,1.31787,6.40834},{-2.45166,-2.16748,6.40834},{-0.608398,-0.57666,-11.095},{-2.08691,1.10303,-11.0649},{0.259277,-3.89697,-3.31476},{3.9375,3.30957,-8.50825}};
	};
	
	class Land_dulni_bs: Residential {
		lootPos[] = {{2.76758,2.70068,-1.75205},{2.34668,-1.28564,-1.75205},{-0.478516,-2.64844,-1.75205},{-0.53418,3.11133,-1.75205}};
	};
	class land_bunka: Office {
		lootPos[] = {{1.83496,0.451172,-1.51244},{-2.04492,2.11377,-1.51245},{3.07324,2.41675,-1.51245}};
	};
	class land_pozorovatelna: Military {
		lootPos[] = {{-2.36328,-2.79248,-2.49767},{3.11426,-2.92969,-2.49767},{0.740234,2.47852,-2.49767},{-1.67578,-2.50049,7.54509},{-1.23047,1.90283,7.54509},{2.88477,2.08496,7.54509},{2.61426,-2.48096,7.54509},{0.491211,-0.290527,7.54509}};
	};
	class land_panelova3: Residential {
		lootPos[] = {{-0.0615234,2.92871,0.0510063},{6.44482,-0.967773,0.0510063},{6.26807,-3.85547,0.0510063},{-0.0327148,-5.30273,0.0510063}};
	};
	class land_vysoky2: Residential {
		lootPos[] = {{6.74121,-2.95508,-15.7673},{6.63232,4.17676,-15.7673},{0.72998,-2.63574,-15.7051},{1.1958,0.116211,-15.6513},{2.84131,2.35742,13.1248},{-0.51123,2.16699,13.1248},{4.37012,0.773438,13.1248},{9.61328,13.2432,13.1248},{6.39307,-12.292,13.1248}};
	};
	class land_vysoky1: Residential {
		lootPos[] = {{-6.74414,5.46875,13.2833},{0.54541,4.38379,13.2833},{10.9004,1.47949,13.2833},{6.0415,-13.4297,13.2833},{1.12744,-2.39258,13.2833}};
	};
	class land_hotel_p2: Residential {
		lootPos[] = {{-3.26953,3.02783,-7.29951},{4.04395,-1.92188,-7.29951},{9.48145,0.459473,-7.32974},{1.53711,0.0078125,6.06893},{4.5332,0.862305,6.06893},{4.73438,-3.63232,6.06893}};
	};
	class land_hotel_p1: Residential {
		lootPos[] = {{-12.1006,-3.29248,-4.92428},{-3.09375,-1.66357,-4.92429},{-1.78125,3.53271,-4.92429},{-5.97852,3.80273,-4.92428},{13.8809,1.77246,-1.39091},{13.751,-9.81104,-1.39091},{12.1787,0.0078125,-3.22923}};
	};
	class land_trubice: Industrial {
		lootPos[] = {{-2.36719,2.7627,2.59438},{5.82715,3.01563,2.59438},{1.57617,0.709961,2.59438}};
	};
	class land_dlouhy1: Residential {
		lootPos[] = {{-6.40918,-0.21875,-9.60495},{-12.395,2.47559,-9.60091},{1.38428,3.15332,-9.61021},{1.91748,8.89746,-9.61057},{-6.90918,8.53027,-9.60461},{-12.3315,8.00195,-9.60096},{-17.9946,9.73926,-9.59713},{-9.91797,5.16699,-9.60259},{6.95801,9.37988,-9.61397},{4.39404,7.64941,-9.61224},{5.43994,9.80469,-5.09157},{0.418457,-0.611328,-5.09031},{-5.27051,7.41895,-5.08631},{2.20361,8.79004,-5.09157},{-8.93848,6.08301,-5.08698},{-9.49854,11.3086,-5.08437},{9.38232,1.54199,-5.09157},{8.95361,9.74707,-5.09157},{11.436,11.4756,-5.08435}};
	};
	class land_dlouhy2: Residential {
		lootPos[] = {{1.73047,5.30957,-9.32314},{-1.38867,-0.568848,-9.31474},{-1.47461,-5.5957,-9.3145}};
	};
	class land_jzd_kr2: Farm {
		lootPos[] = {{1.92139,-4.90527,-6.17321},{0.709961,5.00488,-6.17321},{1.8623,7.37109,1.40623},{3.00684,-3.30566,1.41873},{-3.0625,-3.38477,-2.05339},{-2.62646,10.8418,-2.05339}};
	};
	class land_jzd_kr1: Farm {
		lootPos[] = {{-1.04834,-3.67578,-6.27279},{1.63818,0.775391,-6.27279},{-1.41992,5.10449,-6.27279},{-0.993164,2.94629,-2.15298},{0.717285,-3.79688,-2.15298}};
	};
	class land_jzd_stodola2: Farm {
		lootPos[] = {{8.15527,11.8477,-2.0262},{5.5127,5.6377,-2.0262},{-4.16113,3.67383,-2.0262},{7.53223,-14.4741,-2.0262},{1.16992,0.390625,1.31123}};
	};
	class land_jzd_stodola1: Farm {
		lootPos[] = {{-3.81592,-11.418,-2.0262},{1.73877,-6.20605,-2.0262},{-4.13477,-0.265625,-2.0262},{-1.04883,0.180664,-2.0262}};
	};
	class land_jzd_silo_tes: Industrial {
		lootPos[] = {{2.74902,6.52246,0.214748},{11.5796,5.20703,0.214748},{5.72949,0.644531,0.21475},{10.6719,-6.1416,0.214748},{0.97998,-2.64844,0.214373},{3.22168,-7.55664,0.214746},{-2.62695,-0.580078,10.224}};
	};
	class land_rozvodna: Residential {
		lootPos[] = {{-6.8208,-1.58789,-0.369419}};
	};
	class land_jzd_4silka: Industrial {
		lootPos[] = {{0.551758,-5.24219,1.64133},{0.224609,1.37646,1.64133},{3.04492,0.456055,1.64133},{4.31641,5.94189,5.51407},{-3.53125,-5.80127,5.51407}};
	};
	class land_jzd_bezstrechy: Residential {
		lootPos[] = {{-10.4614,-2.97461,-5.22504},{0.170898,0.177734,-5.22504},{-0.368652,-3.34668,-5.22504},{0.905762,2.52344,-5.22504},{0.802246,2.12305,-0.40476},{1.05615,1.88574,-3.01179},{8.00244,0.787109,-5.22504}};
	};
	class land_AII_last_floor: MilitarySpecial {
		lootPos[] = {{-1.73975,-7.99756,11.6976},{-1.73975,-7.99756,11.6976},{-1.20801,5.45605,4.6129},{-3.82813,2.81494,5.46183}};
	};
	class land_AII_middle_floor: MilitarySpecial {
		lootPos[] = {{-7.64941,4.97412,0.510368},{-7.7207,5.10498,0.510216},{-7.27979,-0.931152,0.518509},{8.47461,-2.3252,-4.63377},{9.20508,0.508301,-4.63377},{4.36768,3.7998,-4.63377},{-0.669434,2.74805,-4.63377},{-10.3594,5.03516,-4.63377},{-13.9766,9.10059,-4.63377},{-8.021,1.22314,-4.63377},{6.07227,-2.64551,-4.63377},{-8.75293,8.79297,-2.10379}};
	};
	class land_x_skladiste_low_tex: Industrial {
		lootPos[] = {{-8.12354,-0.32373,-2.85032},{-2.31592,-4.27539,-2.5975},{8.15527,-6.89307,-2.5975},{0.398926,4.80029,-2.82628},{-6.0249,-7.64355,-2.85032}};
	};
	class Land_budova4_winter: MilitarySpecial {
		lootPos[] = {{-7.73389,0.300049,-1.09824},{-7.7666,1.97388,-1.09824},{-5.85645,1.92651,-1.09824},{-4.82373,0.194336,-1.09824},{-4.82715,-2.00244,-1.09824},{-8.09766,-2.28149,-1.09824},{-3.06787,2.24805,-1.09824},{-1.65283,-1.91821,-1.09824},{-1.41309,-0.034668,-1.09824},{0.266602,1.76807,-1.09824},{1.28369,0.289307,-1.09824},{1.81982,-2.28687,-1.09824},{4.37549,2.14941,-1.09824},{5.61865,1.71338,-1.09824},{5.06787,-1.74316,-1.09824},{2.54785,2.33716,-1.09824}};
	};
	class land_domek_podhradi_1: Residential {
		lootPos[] = {{5.20862,3.45215,-2.7391},{3.04761,1.61621,-2.73912},{2.7594,-1.33691,-2.73915},{-3.32617,4.14404,-2.73909}};
	};
	class land_b_small1: Industrial {
		lootPos[] = {{-3.14185,1.36816,-1.50033},{-0.0275879,-1.74707,-1.50033},{-3.59619,-3.18945,-1.50033},{-0.729004,-4.95996,-1.50033}};
	};
	class land_cast1: Industrial {
		lootPos[] = {{-5.39551,6.56055,-4.38392},{-5.68555,9.04297,-4.38393},{-5.57251,9.08203,-4.38393},{-3.05396,14.5527,-4.38392},{2.97681,13.9014,-4.38392},{-0.227783,11.8418,-4.38393},{1.44995,3.27246,-3.50372},{2.53198,-5.45508,-3.5118},{-4.85596,-2.20898,-3.4266},{1.04224,0.729492,-1.06585}};
	};
	class land_vstup: Military {
		lootPos[] = {{-11.51,-2.64844,-1.53312},{-6.24463,-2.85059,-1.53312},{-1.16992,-2.84961,-1.53312},{2.70898,-2.85059,-1.53312}};
	};
	class land_panelova: Industrial {
		lootPos[] = {{16,-14.6357,-4.04666},{3.79102,1.25659,-4.08966},{-15.4639,-8.38086,-4.08966},{-14.3535,-0.195313,-4.08966},{-1.61719,-12.8313,-4.08966},{15.4287,-4.25635,3.37273},{9.19336,-14.6272,3.37141},{5.80957,9.09253,3.37141},{9.95508,9.7937,3.37141},{-8.11523,-2.98291,3.34401},{-15.2598,-8.56641,3.34401}};
	};
	class land_garaze: Industrial {
		lootPos[] = {{-0.00292969,-7.72925,-2.12658},{3.7334,1.02759,-2.12658},{3.2793,6.28857,-2.12658},{6.72949,7.34131,-2.12658},{1.68848,-3.91479,-2.12658}};
	};
	class land_seb_bouda3: Industrial {
		lootPos[] = {{2.63574,-3.0332,-1.72872},{-2.71875,-5.08691,-1.72873},{-3.00293,-1.50781,-1.72877},{-2.91357,3.86328,-1.72876},{3.12891,3.01563,-1.72879}};
	};
	class Land_bouda2_vnitrek: Residential {
		lootPos[] = {{2.33496,0.372559,-0.610508},{-0.845703,2.32129,-0.610506},{-3.27344,-2.27295,-0.610508}};
	};
	class land_f_b2: Industrial {
		lootPos[] = {{1.58398,0.899414,-4.24147},{-1.33301,-0.991211,-4.24147},{1.91113,-1.68262,-4.24147}};
	};
	class land_bud2: Industrial {
		lootPos[] = {{-2.32031,-1.25,-1.76814},{-1.58008,-2.3125,-1.77484}};
	};
	class land_senik: Residential {
		lootPos[] = {{-4.56445,-2.97705,-4.13721},{13.1641,-6.80127,-4.28022},{-4.23242,-0.213379,-4.1315},{-3.44043,4.7998,-4.12115},{-7.64453,3.81445,-4.12319},{-14.0889,-5.66602,-4.14276},{-1.25977,-3.44336,-4.13817}};
	};
	class land_zd_1: Residential {
		lootPos[] = {{2.14258,3.37402,-3.67255},{-1.60645,-3.25098,-3.67255},{0.649902,-2.38086,-3.67255},{-1.16113,1.41406,-3.67255},{2.88721,-2.80078,-3.67255},{-4.45117,-3.0127,-4.04225},{-5.94385,3.13867,-4.04225}};
	};
	class Land_dum_ras: Residential {
		lootPos[] = {{-1.53223,3.34424,-2.66958},{1.36621,-0.507813,-2.66958},{0.860352,3.72705,0.272604},{-0.767578,-1.96289,0.272604},{-0.27832,-3.96045,0.272604}};
	};
	class land_kostelik_final_2122: Church {
		lootPos[] = {{5.41992,-3.45703,-5.57918},{-0.963379,4.74414,-5.57919},{1.09082,-2.79297,-5.57919},{-1.39063,-5.18555,-5.57918}};
	};
	class land_plynom: Residential {
		lootPos[] = {{1.07568,-0.65625,2.21929},{-0.184082,-1.46973,2.21929},{-1.24854,-0.0126953,2.21929},{1.1377,-0.887695,-2.60304},{-1.3877,0.386719,-2.60304},{-0.822754,-1.33398,-2.60304}};
	};
	class land_seb_mine_main_opt: Industrial {
		lootPos[] = {{0.590332,4.68115,-0.991421},{-1.86768,4.13525,-0.992432},{0.14209,2.53271,-0.995407},{-3.43457,2.68115,-0.995136},{-3.01416,2.59521,-5.08478},{0.776855,-2.89209,-5.11486},{-6.06885,3.33838,7.8684},{-6.38086,-2.05469,7.8684},{-1.7251,-3.09668,7.8684},{-5.64111,-0.92334,14.6913},{-6.23584,2.76465,14.6913}};
	};
	class land_seb_mine_near: Industrial {
		lootPos[] = {{7.87646,-5.52881,-8.8979},{9.02979,-5.5918,-8.8979},{4.37451,-7.10156,-8.8979}};
	};
	class land_x_vez_tex: Residential {
		lootPos[] = {{0.433105,-1.02734,-0.273926},{1.00391,3.02197,-0.272713},{1.36426,0.449219,-0.273571},{-1.89795,3.22168,-0.27232},{-5.00537,-3.64307,-0.274128}};
	};
	class land_marsh1: Residential {
		lootPos[] = {{3.76953,-5.73193,-3.95897},{-0.986816,-4.26074,-3.95897},{2.52637,0.376465,-3.95897},{4.78955,2.92969,-3.95897},{4.56543,6.82227,-3.95897},{-2.88184,4.24121,-4.01684}};
	};
	class land_molovabud1: Industrial {
	lootPos[] = {{-2.4458,2.20703,1.27995},{-4.68164,1.95508,1.27995},{-7.92822,6.29199,1.27995},{-1.81055,-1.29199,1.56745}};
	};
	class land_f_b1: Industrial {
		lootPos[] = {{-4.45996,-2.84619,-2.21533},{-1.81152,-5.01123,-2.21533},{-5.32227,-5.21875,-2.21533}};
	};
	class land_seb_bouda1: Residential {
		lootPos[] = {{2.49316,-2.44238,1.13067},{-0.645996,-2.44824,1.13067},{-0.924316,-0.460938,0.573963},{-2.89697,1.9043,0.571716},{2.80566,1.2334,-3.28989},{-2.38672,-0.893555,-3.28989},{-2.7666,2.41699,-3.28989}};
	};

	// Panthera
	class Land_sara_stodola: Farm {
		lootPos[] = {{5.01367,3.33118,-2.19523},{2.51758,1.05737,-2.19523},{-1.30957,-1.02954,-2.19523},{-4.24414,4.0238,-2.19523},{5.16211,-0.661621,-2.19523}};
	};
	class land_cihlovej_dum_mini: Residential {
		lootPos[] = {{-2.4646,-0.78418,-2.86942},{-1.75586,2.88525,-2.86942},{2.76587,2.08154,-2.86942},{1.96265,-1.98877,-2.86942},{0.0109863,0.876465,-2.86942},{0.116455,3.05762,-2.86942}};
	};
	class Land_hruzdum: Residential {
		lootPos[] = {{-0.108887,3.56494,1.59321},{-1.80371,0.838867,1.5932},{2.34106,3.8335,-1.16265},{0.032959,-1.2998,-1.16266},{-0.655273,2.18311,-1.16266},{-2.53687,-1.29932,-4.73357},{-1.63599,3.06152,-4.73357},{1.83984,2.125,-4.73357}};
	};
	class Land_cihlovej_dum_in: Residential {
		lootPos[] = {{-0.0117188,0.0441895,-1.81473},{-1.76758,2.24805,-1.8147},{-2.88965,-1.64795,-1.8147},{1.84277,-2.07983,-1.81471},{1.58691,-1.3374,-5.27588},{1.22852,2.57324,-5.27588}};
	};

};
