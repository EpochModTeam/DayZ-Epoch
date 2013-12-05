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
		requiredAddons[] = {"dayz_equip","dayz_weapons","dayz_sfx","CAMisc3","CABuildingParts","CABuildingParts_Signs","CAStructuresHouse","CAStructuresLand_Ind_Stack_Big","CAStructures_Misc_Powerlines","CAStructures","CABuildings","CABuildings2","Ind_MalyKomin","CAStructures_A_CraneCon","CAStructures_Mil","CAStructures_Nav","CAStructures_Rail","A_Crane_02","A_TVTower","CAStructures_Railway","CAStructuresHouse","CAStructuresHouse_HouseBT","asc_eu_lights","gnt_c185"};
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
		version = "1.0.3";
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
#include "Configs\CfgGlasses.hpp"
#include "Configs\CfgMagazines.hpp"
#include "Configs\CfgMarkers.hpp"
#include "Configs\CfgAmmo.hpp"
#include "Configs\CfgBuildingLoot\CfgBuildingLoot.hpp"
#include "Configs\CfgArma.hpp"

#include "external\R3F_Realism\R3F_Weight\R3F_CfgWeight.h"