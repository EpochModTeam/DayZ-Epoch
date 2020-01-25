class MH60S;
class MH60S_DZ : MH60S {
	displayName = $STR_VEH_NAME_MH60;
	vehicleClass = "DayZ Epoch Vehicles";
	scope = public;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"120Rnd_CMFlareMagazine"};	
	class Turrets;	
	class MainTurret;
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 6;
	armor = 35;
	damageResistance = 0.00242;
	attendant = 0;
	transportAmmo = 0;
	radartype = 0;
	supplyRadius = 2.6;
	enableManualFire = 0;
	fuelCapacity = 2760;
};

class MH60S_DZE : MH60S_DZ {
	class Turrets : Turrets {
		class MainTurret : MainTurret {
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
			discreteDistanceInitIndex = 2;
			gunnerCompartments = "Compartment1";
			initElev = 5;
			initTurn = 80;			
			body = "mainTurret";
			gun = "mainGun";
			minElev = -80;
			maxElev = 25;
			minTurn = 30;
			maxTurn = 150;
			soundServo[] = {"",0.01,1};
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "muzzle_1";	// endpoint of the gun
			gunEnd = "chamber_1";	// chamber of the gun
			turretInfoType = "RscWeaponZeroing";
			weapons[] = {"M240BC_veh"};
			magazines[] = {};
			gunnerName = $STR_POSITION_CREWCHIEF;
			gunnerOpticsModel = "\ca\weapons\optika_empty";
			gunnerOutOpticsShowCursor = 1;
			gunnerOpticsShowCursor = 1;
			gunnerAction = "MH60_Gunner";
			gunnerInAction = "MH60_Gunner";
			primaryGunner = 1;
			class ViewOptics {
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
		};

		class RightDoorGun : MainTurret {
			body = "Turret_2";
			gun = "Gun_2";
			animationSourceBody = "Turret_2";
			animationSourceGun = "Gun_2";
			weapons[] = {"M240BC_veh_2"};
			animationSourceHatch = "";
			selectionFireAnim = "zasleh_1";
			proxyIndex = 2;
			gunnerName = $STR_POSITION_DOORGUNNER;
			commanding = -2;
			minTurn = -150;
			maxTurn = -30;
			initTurn = -80;
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "muzzle_2";	// endpoint of the gun
			gunEnd = "chamber_2";	// chamber of the gun
			primaryGunner = 0;
			memoryPointGun = "machinegun_2";
			memoryPointGunnerOptics = "gunnerview_2";
		};
	};
};

class UH60M_EP1;
class UH60M_EP1_DZ: UH60M_EP1 {
	displayName = $STR_VEH_NAME_UH60;
	vehicleClass = "DayZ Epoch Vehicles";
	scope = public;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"120Rnd_CMFlareMagazine"};
	class Turrets;
	class MainTurret;
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 6;
	fuelCapacity = 2760;
	radartype = 0;
	supplyRadius = 2.6;
};

class UH60M_EP1_DZE: UH60M_EP1_DZ {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			body = "mainTurret";
			gun = "mainGun";
			minElev = -60;
			maxElev = 30;
			initElev = 0;
			minTurn = -7;
			maxTurn = 183;
			initTurn = 0;
			soundServo[] = {"",0.01,1};
			animationSourceHatch = "";
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "muzzle_1";
			gunEnd = "chamber_1";
			weapons[] = {"M134"};
			magazines[] = {};
			gunnerName = $STR_POSITION_CREWCHIEF;
			gunnerOpticsModel = "\ca\weapons\optika_empty";
			gunnerOutOpticsShowCursor = 1;
			gunnerOpticsShowCursor = 1;
			gunnerAction = "UH60M_Gunner_EP1";
			gunnerInAction = "UH60M_Gunner_EP1";
			commanding = -2;
			primaryGunner = 1;
			class ViewOptics {
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
			gunnerCompartments = "Compartment2";
		};
		class RightDoorGun: MainTurret {
			body = "Turret_2";
			gun = "Gun_2";
			animationSourceBody = "Turret_2";
			animationSourceGun = "Gun_2";
			weapons[] = {"M134_2"};
			magazines[] = {};
			stabilizedInAxes = "StabilizedInAxesNone";
			selectionFireAnim = "zasleh_1";
			proxyIndex = 2;
			gunnerName = $STR_POSITION_DOORGUNNER;
			commanding = -3;
			minElev = -60;
			maxElev = 30;
			initElev = 0;
			minTurn = -183;
			maxTurn = 7;
			initTurn = 0;
			gunBeg = "muzzle_2";
			gunEnd = "chamber_2";
			primaryGunner = 0;
			memoryPointGun = "machinegun_1";
			memoryPointGunnerOptics = "gunnerview_2";
		};
	};
};

// Unarmed medevac
class UH60M_MEV_EP1;
class UH60M_MEV_EP1_DZ : UH60M_MEV_EP1 {
	displayname = $STR_VEH_NAME_HH60;
	vehicleClass = "DayZ Epoch Vehicles";
	scope = public; 
	crew = ""; 
	typicalCargo[] = {}; 
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 6;
	fuelCapacity = 2760;
	class TransportMagazines{};
	class TransportWeapons{};
	attendant = 0;
	radartype = 0;
	supplyRadius = 2.6;
};