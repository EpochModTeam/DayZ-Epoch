class AH6J_EP1_DZ: AH6_Base_EP1
{
	scope = public;
	side = 2;
	displayName = "AH6J_DZ";
	crew = "";
	typicalCargo[] = {};
	weapons[] = {"TwinM134","CMFlareLauncher"};
	magazines[] = {"4000Rnd_762x51_M134","60Rnd_CMFlareMagazine"};
	threat[] = {0.6,0.4,0.1};
	gunBeg[] = {"muzzle_1","muzzle_2"};
	gunEnd[] = {"chamber_1","chamber_2"};
	radarType = 0;
	class TransportMagazines {};
	class TransportWeapons {};
	class Turrets {};
	class AnimationSources
	{
		class Gatling_1
		{
			source = "revolving";
			weapon = "TwinM134";
		};
		class Gatling_2
		{
			source = "revolving";
			weapon = "TwinM134";
		};
	};
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"ca\air_e\ah6j\data\ah6_merge1_co.paa","ca\air_e\ah6j\data\default_co.paa"};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 3;
	transportMaxMagazines = 10;
	transportmaxbackpacks = 2;
	class DefaultEventhandlers;
	class EventHandlers: DefaultEventhandlers
	{
		killed = "_this call BIS_Effects_EH_Killed;";
		fired = "_this call BIS_Effects_EH_Fired;";
	};
};
class AH6J_EP1_DZE: AH6J_EP1_DZ
{
	scope = public;
	side = 2;
	displayName = "AH6J_DZE";
	magazines[] = {"60Rnd_CMFlareMagazine"};
};
class AH6X_DZ: AH6X_EP1 {
	displayname = $STR_VEH_NAME_AH6X;
	displaynameshort = $STR_EP1_DN_AH6X;
	audible = 6;
	enablemanualfire = 0;
	scope = public;
	side = 2;
	crew = "";
	typicalCargo[] = {};
	hiddenselections[] = {"camo1"};
	hiddenselectionstextures[] = {"ca\air_e\ah6j\data\ah6_merge1_co.paa"};
	icon = "\ca\air_e\data\UI\Icon_ah6x_CA.paa";
	model = "\ca\air_e\ah6j\ah6x";
	picture = "\ca\air_e\data\UI\Picture_ah6x_CA.paa";
	isuav = 0;
	radartype = 0;
	class TransportMagazines{};
	class TransportWeapons{};
	weapons[] = {};
	magazines[] = {};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 3;
	transportMaxMagazines = 30;
	transportmaxbackpacks = 2;
	fuelCapacity = 242;
	transportSoldier = 0;
	memoryPointsGetInGunner = "pos_cargo";
	memoryPointsGetInGunnerDir = "pos_cargo_dir";
	class NewTurret;
	class Turrets
	{
		class ObserverTurret: NewTurret
		{
			ProxyType = CPCargo;
			proxyIndex = 1;
			startEngine = 0;
			hasgunner = 1;
			body = "FLIR_turret";
			gun = "FLIR_gun";
			animationSourceBody = "FLIR_turret";
			animationSourceGun = "FLIR_gun";
			gunBeg = "FLIR_end";
			gunEnd = "FLIR_begin";
			memoryPointGun = "FLIR_end";
			turretAxis = "FLIR_turret_axis";
			gunAxis = "FLIR_gun_axis";
			commanding = -1;
			class Viewoptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				minFov = 0.01;
				initFov = 0.50;
				maxFov = 0.80;
				visionMode[] = {"Normal","NVG"};
				thermalMode[] = {};
			};
			gunnerAction = "AH6j_Cargo_EP1";
			gunnerOpticsModel = "\ca\weapons\2Dscope_UAV.p3d";
			memoryPointGunnerOptics = "gunnerview";
			//gunnerOpticsModel = "\ca\weapons\optika_SOFLAM";
			soundServo[] = {"",0.01,1};
			gunnerForceOptics = 0;
			gunnerGetInAction = "GetInLow";
			gunnerGetOutAction = "GetOutLow";
			gunnerName = "Observer";
			animationSourceHatch = "";
			minElev = -90;
			maxElev = 60;
			initElev = 0;
			minTurn = -360;
			maxTurn = 360;
			initTurn = 0;
			weapons[] = {};
			magazines[] = {};
		};
	};
	class DefaultEventhandlers;
	class EventHandlers: DefaultEventhandlers
	{
		killed = "_this call BIS_Effects_EH_Killed;";
	};
};