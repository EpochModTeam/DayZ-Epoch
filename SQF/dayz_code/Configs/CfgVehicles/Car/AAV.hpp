class AAV;
class AAV_DZ : AAV {
	scope = 2;
	side = 1;
	faction = "USMC";
	displayName = $STR_VEH_NAME_AAV;
	vehicleClass = "DayZ Epoch Vehicles";
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;	
	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportmaxbackpacks = 6;
	
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};	
	
	class Turrets;
	class MainTurret;
	class NewTurret;
	class CommanderOptics;
	
};

class AAV_DZE : AAV_DZ {
	class Turrets : Turrets {
		class MainTurret : MainTurret {
			magazines[] = {"SmokeLauncherMag", "SmokeLauncherMag"};
		};
		class CommanderOptics : NewTurret {
			proxyType = "CPCommander";
			proxyIndex = 1;
			gunnerName = "commander";
			primaryGunner = 0;
			primaryObserver = 1;
			gunnerForceOptics = 0;
			body = "ObsTurret";
			gun = "ObsGun";
			animationSourceBody = "obsTurret";
			animationSourceGun = "obsGun";
			gunnerAction = "AAV_Commander_OUT";
			gunnerInAction = "AAV_Commander";
			soundServo[] = {"", 0.00316228, 1};
			gunBeg = "";
			gunEnd = "";
			commanding = 2;
			gunnerOpticsModel = "\ca\weapons\2Dscope_com2";
			gunnerOpticsColor[] = {1, 1, 1, 1};
			gunnerOutOpticsModel = "";
			gunnerOutOpticsShowCursor = 0;
			memoryPointGunnerOutOptics = "commander_weapon_view";
			memoryPointGunnerOptics = "commanderview";
			memoryPointsGetInGunner = "pos commander";
			memoryPointsGetInGunnerDir = "pos commander dir";
			gunnerGetInAction = "GetInHigh";
			gunnerGetOutAction = "GetOutHigh";
			animationSourceHatch = "hatchCommander";
			minElev = -10;
			maxElev = 35;
			initElev = 0;
			minTurn = -360;
			maxTurn = 360;
			initTurn = 0;
			class ViewOptics {
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.466;
				minFov = 0.466;
				maxFov = 0.466;
				visionMode[] = {"Normal", "NVG", "Ti"};
				thermalMode[] = {4, 5};
			};
			startEngine = 0;
			stabilizedInAxes = 0;
		};		
	};	
	
};

class AAV_DZE1: AAV_DZE {
	displayName = "$STR_VEH_NAME_AAV+";
	original = "AAV_DZE";
	maxspeed = 110; // base 72
	turnCoef = 0.5;  // base 1
	
	class Upgrades {
		ItemTankAVE[] = {"AAV_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class AAV_DZE2: AAV_DZE1 {
	displayName = "$STR_VEH_NAME_AAV++";
	armor = 350; // base 210
	damageResistance = 0.023; // base 0.01168
	
	class Upgrades {
		ItemTankLRK[] = {"AAV_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class AAV_DZE3: AAV_DZE2 {
	displayName = "$STR_VEH_NAME_AAV+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 12;
	
	class Upgrades {
		ItemTankTNK[] = {"AAV_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class AAV_DZE4: AAV_DZE3 {
	displayName = "$STR_VEH_NAME_AAV++++";
	fuelCapacity = 980; // base 700	
};

