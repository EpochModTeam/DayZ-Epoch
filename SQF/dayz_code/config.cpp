#include "Configs\basicDefines.hpp"
#include "version.hpp"
#include "Configs\CfgNonAIVehicles.hpp" //Axeman lights

class CfgPatches
{
	class dayz_code
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"pook_h13",
			"map_eu",
			
			//dayz_anim references all CA addons
			"dayz_anim",
			
			//dayz addons
			"dayz",
			"dayz_buildings", // Overwrite classes that use vanilla ItemPadlock with Epoch ItemComboLock
			"dayz_communityassets",
			"dayz_communityweapons",
			"dayz_equip",
			"dayz_sfx",
			"dayz_vehicles",
			"dayz_weapons",
			"community_crossbow",
			
			//shacktac addons
			"st_bunnyhop",
			"st_collision",
			"st_evasive",
			
			//Extra Epoch Addons
			"asc_eu_lights"
		};
	};
};

class CfgMods
{
	class DayZ
	{
		dir = "DayZ_Epoch";
		name = "DayZ Epoch";
		picture = "z\addons\dayz_code\gui\loadingscreen.paa";
		hidePicture = 0;
		hideName = 0;
		action = "http://www.dayzepoch.com";
		version = DayZVersion;
		hiveVersion = 0.96;
		//requiredAddons[] = {"Chernarus"}; // No need to load for other maps
	};
};

class CfgAddons
{
	//access = 1;
	class PreloadBanks {};
	class PreloadAddons
	{
		class dayz
		{
			list[] =
			{
				"csj_gyroac", // do not move down!
				"pook_h13", // do not move down!
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
				"redryder",
				"Anzio_20",
				"nst",
				"dayz_epoch_b",
				"CfgVehicles",
				"dayz_epoch_c"				
			};
		};
	};
};

class DefaultEventhandlers {
	init = "if (isNil 'BIS_Effects_Init_DZ') then {[] call compile preProcessFileLineNumbers '\z\addons\dayz_code\system\BIS_Effects\init.sqf';};";
};

#include "Configs\rscTitles.hpp"
#include "Configs\CfgWorlds.hpp"
#include "Configs\CfgMoves.hpp"
#include "Configs\CfgBody.hpp"
#include "Configs\CfgVehicles\CfgVehicles.hpp"
#include "Configs\CfgWeapons\CfgWeapons.hpp"
#include "Configs\CfgMagazines\CfgMagazines.hpp"
#include "Configs\CfgMarkers.hpp"
#include "Configs\CfgAmmo.hpp"
#include "Configs\CfgObjectCompositions.hpp"
#include "Configs\CfgTownGenerator\CfgTownGeneratorChernarus.hpp"
#include "Configs\CfgGrid\CfgGrid.hpp"
#include "Configs\CfgFaces.hpp"
#include "Configs\CfgGlasses.hpp"
#include "Configs\CfgArma.hpp"
#include "Configs\CfgRecoils.hpp"
#include "Configs\CfgParticles.hpp"
//#include "Configs\RadioProtocol.hpp"
//#include "gui\padlock\padlock_ui.hpp"

//Epoch Additions
#include "Configs\RscDisplay\safegui.hpp"
#include "Configs\RscDisplay\ZSCdefines.hpp"
#include "Configs\RscDisplay\advancedTrading.hpp"
#include "Configs\RscDisplay\plotManagement.hpp"
#include "Configs\RscDisplay\deathboards.hpp"
#include "Configs\CfgExtra\snappoints.hpp"
#include "Configs\CfgExtra\HelperVectors.hpp"
#include "external\R3F_Realism\R3F_Weight\R3F_CfgWeight.hpp"
#include "Configs\RscDisplay\doorManagement\doorManagement.hpp"
#include "Configs\RscDisplay\doorManagement\doorAccess.hpp"
#include "Configs\RscDisplay\zscDialogs.hpp"
#include "Configs\RscDisplay\remoteVehicle.hpp"
#include "Configs\RscDisplay\vehicleKeyChanger.hpp"
#include "Configs\RscDisplay\virtualGarage.hpp"
//#include "Configs\RscDisplay\tradermenu.hpp"

class CfgTasks
{
	//agentTasks[] = {"ZedMainTask"};
	class ZedMainTask
	{
		name = "Zed Main Task";
		//fsm = "\ca\animals2\Data\scripts\main.fsm";
		fsm = "\z\AddOns\dayz_code\system\main.fsm";
		condition = "\ca\animals2\Data\scripts\createSingleTask.sqf";
		description = "Zed master task";
		destination = "";
		resources[] = {};
	};
};
