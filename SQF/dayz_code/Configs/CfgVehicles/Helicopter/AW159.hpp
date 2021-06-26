class AW159_Lynx_BAF: Helicopter {
	class Turrets;
	class MainTurret;
};
class AW159_Lynx_BAF_DZ: AW159_Lynx_BAF {
	displayname = "$STR_VEH_NAME_AW159";
	vehicleClass = "DayZ Epoch Vehicles";
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"120Rnd_CMFlareMagazine"};
	enablemanualfire = 0;
	crew = "";	
	typicalCargo[] = {};
	radartype = 0;
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 20;
	transportMaxMagazines = 120;
	transportMaxBackpacks = 6;
	fuelCapacity = 2200;
	supplyRadius = 2.6;
	armor = 30;
	side = 1;
	faction = "USMC";
	
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			body = "obsTurret";
			gun = "obsGun";
			animationSourceBody = "obsTurret";
			animationSourceGun = "obsGun";
			stabilizedInAxes = "StabilizedInAxesBoth";
			memoryPointGunnerOptics = "commanderview";
			minElev = -40;
			maxElev = 20;
			initElev = 0;
			minTurn = -120;
			maxTurn = 120;
			initTurn = 0;
			gunBeg = "commanderview";
			gunEnd = "laserstart";
			memoryPointGun = "laserstart";
			turretInfoType = "RscWeaponZeroing";
			discreteDistance[] = {300,400,500,600,700,800};
			discreteDistanceInitIndex = 1;			
			weapons[] = {"M240BC_veh"};
			soundServo[] = {"\ca\sounds\vehicles\servos\turret-1",0.01,1.0,30};
			magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
			inGunnerMayFire = 1;
			gunnerAction = "AW159_Pilot_BAF";
			gunnerGetInAction = "GetInLow";
			gunnerGetOutAction = "GetOutLow";
			gunnerOpticsEffect[] = {};
			gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64";
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
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64";
				};
				class Medium: Wide
				{
					opticsDisplayName = "M";
					initFov = 0.093;
					minFov = 0.093;
					maxFov = 0.093;
					gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64_2";
				};
				class Narrow: Wide
				{
					opticsDisplayName = "N";
					gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64_3";
					initFov = 0.029;
					minFov = 0.029;
					maxFov = 0.029;
				};
			};
			class OpticsOut
			{
				class Monocular
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 1.1;
					minFov = 0.133;
					maxFov = 1.1;
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "";
					gunnerOpticsEffect[] = {};
				};
			};
			startEngine = 0;
			gunnerHasFlares = 0;
		};
	};	
};

class AW159_Lynx_BAF_DZE: AW159_Lynx_BAF_DZ {	
	cargoCompartments[] = {"Compartment1","Compartment2","Compartment3"};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			gunnerCompartments = "compartment3";
			magazines[] = {};
		};
	};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"AW159_Lynx_BAF_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class AW159_Lynx_BAF_DZE1: AW159_Lynx_BAF_DZE
{
	displayName = "$STR_VEH_NAME_AW159+";
	original = "AW159_Lynx_BAF_DZE";
	armor = 80;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"AW159_Lynx_BAF_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class AW159_Lynx_BAF_DZE2: AW159_Lynx_BAF_DZE1
{
	displayName = "$STR_VEH_NAME_AW159++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 240;
	transportMaxBackpacks = 12;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"AW159_Lynx_BAF_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class AW159_Lynx_BAF_DZE3: AW159_Lynx_BAF_DZE2
{
	displayName = "$STR_VEH_NAME_AW159+++";
	fuelCapacity = 4500;
};