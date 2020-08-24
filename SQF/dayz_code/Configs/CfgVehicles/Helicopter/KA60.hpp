class Ka60_GL_BASE_PMC;
class Ka60_GL_PMC: Ka60_GL_BASE_PMC {
	class Turrets;
	class MainTurret;
};

class Ka60_GL_PMC_DZ: Ka60_GL_PMC {	
	displayName = "$STR_VEH_NAME_KA60";
	vehicleClass = "DayZ Epoch Vehicles";
	scope = 2;
	crew = "";
	typicalCargo[] = {};
	radartype = 0;
	class TransportMagazines{};
	class TransportWeapons{};
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"120Rnd_CMFlareMagazine"};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 20;
	transportMaxMagazines = 120;
	transportMaxBackpacks = 6;
	fuelCapacity = 2200;
	supplyRadius = 2.6;		
	
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			body = "mainTurret";
			gun = "mainGun";
			minElev = -50;
			maxElev = 30;
			initElev = 0;
			minTurn = 20;
			maxTurn = 155;
			initTurn = 80;
			soundServo[] = {"",0.01,1.0};
			animationSourceHatch = "";
			stabilizedInAxes = "StabilizedInAxesBoth";
			gunBeg = "muzzle_1";
			gunEnd = "chamber_1";
			turretInfoType = "RscWeaponZeroing";
			discreteDistance[] = {300,400,500,600,700,800};
			discreteDistanceInitIndex = 1;
			gunnerForceOptics = 0;			
			weapons[] = {"PKTBC"};
			maxHorizontalRotSpeed = 1.6;
			maxVerticalRotSpeed = 1.6;
			magazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK"};
			gunnerName = $STR_POSITION_DOORGUNNER;	
			gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64";			
			gunnerAction = "Mi8_Gunner";
			gunnerInAction = "Mi8_Gunner";			
			commanding = -2;
			primaryGunner = 1;			
			
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "W";
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = -10;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.1;
					minFov = 0.1;
					maxFov = 0.1;
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64";
				};
				class Medium: Wide
				{
					opticsDisplayName = "M";
					initFov = 0.063;
					minFov = 0.063;
					maxFov = 0.063;
					gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64";
				};
				class Narrow: Wide
				{
					opticsDisplayName = "N";
					gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64";
					initFov = 0.019;
					minFov = 0.019;
					maxFov = 0.019;
				};
			};
			class OpticsOut
			{
				class Monocular
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = -10;
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
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.7;
				minFov = 0.25;
				maxFov = 1.1;
			};
			gunnerCompartments = "Compartment1";
		};
	};
};

class Ka60_GL_PMC_DZE: Ka60_GL_PMC_DZ {	
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
	};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"Ka60_GL_PMC_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};	
};

class Ka60_GL_PMC_DZE1: Ka60_GL_PMC_DZE
{
	displayName = "$STR_VEH_NAME_KA60+";
	original = "Ka60_GL_PMC_DZE";
	armor = 70;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"Ka60_GL_PMC_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class Ka60_GL_PMC_DZE2: Ka60_GL_PMC_DZE1
{
	displayName = "$STR_VEH_NAME_KA60++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 240;
	transportMaxBackpacks = 12;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"Ka60_GL_PMC_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class Ka60_GL_PMC_DZE3: Ka60_GL_PMC_DZE2
{
	displayName = "$STR_VEH_NAME_KA60+++";
	fuelCapacity = 4500;
};