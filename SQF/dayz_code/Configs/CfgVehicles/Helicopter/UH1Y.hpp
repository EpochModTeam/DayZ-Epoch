class UH1_Base: Helicopter {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			class ViewOptics: ViewOptics {};
			class Turrets: Turrets {};
		};
		class RightDoorGun: MainTurret {
			class Turrets: Turrets {};
		};
		class CoPilotObs: MainTurret {
			class Turrets: Turrets {};
		};
	};
};
class UH1Y_DZ: UH1_Base {
	scope = 2;
	displayname = "$STR_VEH_NAME_UH1Y";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 10;
	transportMaxMagazines = 30;
	transportmaxbackpacks = 4;
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"120Rnd_CMFlareMagazine"};	
	fuelCapacity = 1333;
	radartype = 0;
	supplyRadius = 2.6;
	
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			//gunnerOpticsModel = "\ca\Weapons\optika_empty";
			magazines[] = {"2000Rnd_762x51_M134"};
		};
		class RightDoorGun: RightDoorGun
		{
			//gunnerOpticsModel = "\ca\Weapons\optika_empty";
			visionMode[] = {"Normal","NVG"};
			magazines[] = {"2000Rnd_762x51_M134"};
		};
		class CoPilotObs: CoPilotObs
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "W";
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.466;
					minFov = 0.466;
					maxFov = 0.466;
					visionMode[] = {"Normal","NVG"};
					thermalMode[] = {};
					gunnerOpticsModel = "\ca\weapons\optika_SOFLAM";
				};
				class Medium: Wide
				{
					opticsDisplayName = "M";
					initFov = 0.093;
					minFov = 0.093;
					maxFov = 0.093;
					gunnerOpticsModel = "\ca\weapons\optika_SOFLAM";
				};
				class Narrow: Wide
				{
					opticsDisplayName = "N";
					gunnerOpticsModel = "\ca\weapons\optika_SOFLAM";
					initFov = 0.029;
					minFov = 0.029;
					maxFov = 0.029;
				};
			};
		};
	};

	class DefaultEventhandlers;
	class EventHandlers: DefaultEventhandlers
	{
		killed = "_this call BIS_Effects_EH_Killed;";
		engine = "if (_this select 1) then {(_this select 0) animate ['mainrotor_folded',1]; (_this select 0) animate ['mainrotor_unfolded',0];} else {_this select 0 setVariable ['engineOffTime',diag_tickTime,false];};"; //Unfold
	};
	class UserActions {
		class HUDoff {
			displayName = $STR_AM_HUDON;
			displayNameDefault = $STR_AM_HUDON;
			priority = 0;
			position = "zamerny";
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
			condition = "(player==driver this)and(this animationphase ""HUDAction"" !=1)";
			statement = "this animate [""HUDAction"",1];this animate [""HUDAction_1"",1]";
		};
		class HUDon {
			displayName = $STR_AM_HUDOFF;
			displayNameDefault = $STR_AM_HUDOFF;
			priority = 0;
			position = "zamerny";
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
			condition = "(player==driver this)and(this animationphase ""HUDAction"" !=0)";
			statement = "this animate [""HUDAction"",0];this animate [""HUDAction_1"",0]";
		};
		class Fold {
			displayName = $STR_AM_PACK;
			displayNameDefault = $STR_AM_PACK;
			priority = 0;
			position = "zamerny";
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
			condition = "!isEngineOn this && {player == driver this} && {this animationPhase 'mainrotor_unfolded' == 0} && {diag_tickTime - (this getVariable ['engineOffTime',0]) > 20}";
			statement = "this animate ['mainrotor_folded',0]; this animate ['mainrotor_unfolded',1];";
		};
		class Unfold {
			displayName = $STR_AM_UNPACK;
			displayNameDefault = $STR_AM_UNPACK;
			priority = 0;
			position = "zamerny";
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
			condition = "!isEngineOn this && {player == driver this} && {this animationPhase 'mainrotor_unfolded' == 1}";
			statement = "this animate ['mainrotor_folded',1]; this animate ['mainrotor_unfolded',0];";
		};
	};
};
class UH1Y_DZE: UH1Y_DZ {
	enableManualFire = 0;
	class Turrets : Turrets {
		class MainTurret: MainTurret
		{
			//gunnerOpticsModel = "\ca\Weapons\optika_empty";
			magazines[] = {};
		};
		class RightDoorGun: RightDoorGun
		{
			//gunnerOpticsModel = "\ca\Weapons\optika_empty";
			visionMode[] = {"Normal","NVG"};
			magazines[] = {};
		};
		class CoPilotObs: CoPilotObs
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "W";
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.466;
					minFov = 0.466;
					maxFov = 0.466;
					visionMode[] = {"Normal","NVG"};
					thermalMode[] = {};
					gunnerOpticsModel = "\ca\weapons\optika_SOFLAM";
				};
				class Medium: Wide
				{
					opticsDisplayName = "M";
					initFov = 0.093;
					minFov = 0.093;
					maxFov = 0.093;
					gunnerOpticsModel = "\ca\weapons\optika_SOFLAM";
				};
				class Narrow: Wide
				{
					opticsDisplayName = "N";
					gunnerOpticsModel = "\ca\weapons\optika_SOFLAM";
					initFov = 0.029;
					minFov = 0.029;
					maxFov = 0.029;
				};
			};
		};
	};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"UH1Y_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class UH1Y_DZE1: UH1Y_DZE
{
	displayName = "$STR_VEH_NAME_UH1Y+";
	original = "UH1Y_DZE";
	armor = 70;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"UH1Y_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class UH1Y_DZE2: UH1Y_DZE1
{
	displayName = "$STR_VEH_NAME_UH1Y++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 60;
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"UH1Y_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class UH1Y_DZE3: UH1Y_DZE2
{
	displayName = "$STR_VEH_NAME_UH1Y+++";
	fuelCapacity = 3000;
};

class UH1Y_M240_DZ: UH1Y_DZ {
	displayname = "$STR_VEH_NAME_UH1Y_M240";
	
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			weapons[] = {"M240BC_veh"};
			magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
		};
		class RightDoorGun: RightDoorGun
		{
			weapons[] = {"M240BC_veh"};
			magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
		};
	};
};
class UH1Y_M240_DZE: UH1Y_DZE {
	displayname = "$STR_VEH_NAME_UH1Y_M240";
	
	class Turrets : Turrets 
	{
		class MainTurret: MainTurret
		{
			weapons[] = {"M240BC_veh"};
			magazines[] = {};
		};
		class RightDoorGun: RightDoorGun
		{
			weapons[] = {"M240BC_veh"};
			magazines[] = {};
		};
	
	};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"UH1Y_M240_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class UH1Y_M240_DZE1: UH1Y_M240_DZE
{
	displayName = "$STR_VEH_NAME_UH1Y_M240+";
	original = "UH1Y_M240_DZE";
	armor = 70;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"UH1Y_M240_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class UH1Y_M240_DZE2: UH1Y_M240_DZE1
{
	displayName = "$STR_VEH_NAME_UH1Y_M240++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 60;
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"UH1Y_M240_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class UH1Y_M240_DZE3: UH1Y_M240_DZE2
{
	displayName = "$STR_VEH_NAME_UH1Y_M240+++";
	fuelCapacity = 3000;
};
