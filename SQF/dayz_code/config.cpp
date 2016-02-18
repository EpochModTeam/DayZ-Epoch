#include "Configs\basicdefines.hpp"
#include "Configs\CfgNonAIVehicles.hpp"

class CfgPatches {
	class dayz_code {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
				"map_eu",
				//dayz_anim references all CA addons
				"dayz_anim",
				
				//dayz addons
				"dayz",
				"dayz_buildings",
				"dayz_communityassets",
				"dayz_communityweapons",
				"dayz_equip",
				"dayz_sfx",
				"dayz_vehicles",
				"dayz_weapons",
				"community_crossbow",
				"dayz_epoch_b",
				
				//shacktac addons
				"st_bunnyhop",
				"st_collision",
				"st_evasive",
				
				//Extra Epoch Addons
				"asc_eu_lights",
				"gnt_c185",
				"usec_ch53",
				"RedRyder"
			};
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
		version = "1.0.6";
		hiveVersion = 0.96; //0.93
	};
};


class CfgMissions
{
	 class Cutscenes
	 {
	  class ChernarusIntro1
		  {
			directory = "z\addons\dayz_code\Configs\CfgWorlds\intro.Chernarus";
		  };
	 };
};

class CfgWorlds
{
	initWorld = "Chernarus";
	demoWorld = "Chernarus";
	class DefaultWorld
	{
		class Weather
		{
			class Overcast
			{
				class Weather1;
				class Weather2;
				class Weather3;
				class Weather4;
				class Weather5;
			};
		};
	};
	class CAWorld: DefaultWorld
	{
		class Weather: Weather
		{
			class Overcast: Overcast
			{
				class Weather1: Weather1
				{
					waves = 0.2;
				};
				class Weather7: Weather1
				{
					waves = 0.2;
				};
				class Weather2: Weather2
				{
					waves = 0.22;
				};
				class Weather3: Weather3
				{
					waves = 0.32;
				};
				class Weather4: Weather4
				{
					waves = 0.52;
				};
				class Weather5: Weather5
				{
					waves = 0.72;
				};
				class Weather6: Weather5
				{
					waves = 2.00;
				};
			};
		};
	};
};

class CfgAddons
{
	access = 1;
	class PreloadBanks {};
	class PreloadAddons
	{
		class dayz
		{
			list[] =
			{
				"dayz_code",
				"dayz",
				"dayz_equip",
				"dayz_communityassets",
				"dayz_weapons",
				"dayz_communityweapons",
				"dayz_sfx",
				"ST_bunnyhop",
				"st_collision",
				"st_evasive",
				"asc_eu_lights",
				"gnt_c185",
				"usec_ch53",
				"RedRyder",
				"dayz_epoch_b",
				"CfgVehicles"
			};
		};
	};
};

#include "Configs\rscTitles.hpp"
#include "Configs\CfgWorlds.hpp"
#include "Configs\CfgMoves.hpp"
#include "Configs\CfgVehicles\CfgVehicles.hpp"
#include "Configs\CfgWeapons\CfgWeapons.hpp"
#include "Configs\CfgCrafting\CfgCrafting.hpp"
#include "Configs\CfgConstruction\CfgConstruction.hpp"
#include "Configs\CfgMagazines\CfgMagazines.hpp"
#include "Configs\CfgLoot\CfgLoot.hpp"
#include "Configs\CfgMarkers.hpp"
#include "Configs\CfgAmmo.hpp"
#include "Configs\CfgObjectCompositions.hpp"
#include "Configs\CfgTownGenerator\CfgTownGeneratorChernarus.hpp"
#include "Configs\CfgGrid\CfgGrid.hpp"
#include "Configs\CfgFaces.hpp"
#include "Configs\CfgGlasses.hpp"
#include "Configs\CfgArma.hpp"
#include "Configs\CfgRecoils.hpp"
#include "gui\padlock\padlock_ui.hpp"

//Epoch Additions
#include "Configs\RscDisplay\safegui.hpp"
#include "Configs\RscDisplay\dialog.hpp"
#include "Configs\RscDisplay\deathboards.hpp"
#include "Configs\CfgVoice.hpp"			
#include "Configs\CfgIdentities.hpp"
#include "Configs\CfgExtra\snappoints.hpp"
#include "external\R3F_Realism\R3F_Weight\R3F_CfgWeight.h"


//Duplicates that need to be checked against first block
//#include "Configs\CfgVehicles.hpp"
//#include "Configs\CfgMagazines.hpp"
//#include "Configs\CfgAmmo.hpp"
//#include "Configs\CfgLoot\CfgBuildingLoot.hpp"
//#include "Configs\CfgArma.hpp"

