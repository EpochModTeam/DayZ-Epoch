class RHIB;
class RHIB_DZ : RHIB
{
	scope = 2;
	displayName = $STR_VEH_NAME_RHIB_M2;
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	enablemanualfire = 0;
	enableGPS = 0;
	supplyRadius = 3;
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class Turrets;
	class NewTurret;	
};

class RHIB_DZE : RHIB_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: NewTurret
		{
			class HitPoints
			{
				class HitTurret
				{
					armor = 0.8;
					material = 60;
					name = "vez";
					visual = "vez";
					passThrough = 1;
				};
				class HitGun
				{
					armor = 0.6;
					material = 60;
					name = "zbran";
					visual = "zbran";
					passThrough = 1;
				};
			};
			stabilizedInAxes = 0;
			body = "MainTurret";
			gun = "MainGun";
			animationSourceBody = "mainTurret";
			animationSourceGun = "mainGun";
			gunnerAction = "RHIB_Gunner";
			gunnerGetInAction = "GetInMedium";
			gunnerGetOutAction = "GetOutMedium";
			ejectDeadGunner = 1;
			outGunnerMayFire = 1;
			inGunnerMayFire = 0;
			minElev = -25;
			maxElev = 60;
			initElev = 5;
			minTurn = -135;
			maxTurn = 135;
			initTurn = 0;
			soundServo[] = {"\ca\sounds\vehicles\servos\turret-1",0.0056234132,1.0};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
			discreteDistanceInitIndex = 2;
			turretInfoType = "RscWeaponZeroing";
			weapons[] = {"M2BC"};
			magazines[] = {};
			gunnerName = "$STR_POSITION_FRONTGUNNER";
			gunnerOpticsModel = "\ca\weapons\optika_empty";
			gunnerForceOptics = 0;
			startEngine = 0;
			commanding = 2;
			primaryGunner = 0;
			primaryObserver = 1;
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
			class ViewGunner
			{
				initAngleX = 5;
				minAngleX = -65;
				maxAngleX = 85;
				initAngleY = 0;
				minAngleY = -150;
				maxAngleY = 150;
				initFov = 0.7;
				minFov = 0.25;
				maxFov = 1.1;
			};
		};
	};
};

class RHIB2Turret;
class RHIB2Turret_DZ : RHIB2Turret
{
	scope = 2;
	displayName = $STR_VEH_NAME_RHIB_MK19;
	enablemanualfire = 0;
	enableGPS = 0;
	supplyRadius = 3;	
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class Turrets;
	class MainTurret;	
};

class RHIB2Turret_DZE : RHIB2Turret_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
		class BackTurret: MainTurret
		{
			body = "Turret_2";
			gun = "Gun_2";
			animationSourceBody = "Turret_2";
			animationSourceGun = "Gun_2";
			animationSourceHatch = "";
			selectionFireAnim = "zasleh_1";
			stabilizedInAxes = 0;
			proxyIndex = 2;
			gunnerName = "$STR_POSITION_REARGUNNER";
			commanding = -2;
			gunnerOpticsModel = "\ca\weapons\optika_empty";
			minElev = -50;
			maxElev = 25;
			initElev = -5;
			minTurn = 120;
			maxTurn = 240;
			initTurn = 180;
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
			weapons[] = {"MK19BC"};			
			gunBeg = "usti hlavne_1";
			gunEnd = "konec hlavne_1";
			primaryGunner = 1;
			primaryObserver = 0;
			memoryPointGun = "kulas_1";
			memoryPointGunnerOptics = "gunnerview_1";
		};
	};
};