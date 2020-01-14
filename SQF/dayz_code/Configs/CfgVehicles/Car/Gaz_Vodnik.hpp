class GAZ_Vodnik_HMG;
class GAZ_Vodnik_HMG_DZ : GAZ_Vodnik_HMG {
	scope = public;
	displayname = $STR_VEH_NAME_VODNIK_BPPU;
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class Turrets;
	class NewTurret;
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;	
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
    transportmaxbackpacks = 4;
};

class GAZ_Vodnik_HMG_DZE : GAZ_Vodnik_HMG_DZ {
	class Turrets: Turrets {
		class MainTurret: NewTurret
		{
			outGunnerMayFire = 1;
			minElev = -8;
			maxElev = 40;
			minTurn = -180;
			maxTurn = 180;
			initTurn = 0;
			gunBeg = "muzzle_1";
			gunEnd = "chamber_1";
			memoryPointGun = "machinegun";
			weapons[] = {"2A42","PKT_veh"};
			magazines[] = {};
			gunnerOutOpticsShowCursor = 0;
			gunnerOpticsShowCursor = 0;
			gunnerAction = "GAZ_Gunner";
			gunnerInAction = "GAZ_Gunner";
			primaryGunner = 1;
			commanding = 2;
			primaryObserver = 1;
			stabilizedInAxes = "StabilizedInAxesNone";
			forceHideGunner = 1;
			gunnerOpticsModel = "\ca\weapons\2Dscope_BMPgun";
			gunnerForceOptics = 1;
			class ViewOptics
			{
				initAngleX = 5;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = 0;
				maxAngleY = 0;
				initFov = 0.203;
				minFov = 0.203;
				maxFov = 0.203;
			};
			soundServo[] = {"\ca\wheeled\Data\Sound\servo4",0.0056234132,1.0,15};
			startEngine = 1;
			class HitPoints
			{
				class HitTurret
				{
					armor = 0.8;
					material = -1;
					name = "vez";
					visual = "vez";
					passThrough = 0.5;
				};
				class HitGun
				{
					armor = 0.4;
					material = -1;
					name = "zbran";
					visual = "zbran";
					passThrough = 0.1;
				};
			};
		};
	};
};

class GAZ_Vodnik;
class GAZ_Vodnik_DZ : GAZ_Vodnik {
	scope = public;
	displayname = $STR_VEH_NAME_VODNIK_PKT;
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};	
	class Turrets;
	class MainTurret;
	class BackTurret;
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
    transportmaxbackpacks = 4;	
};

class GAZ_Vodnik_DZE : GAZ_Vodnik_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			minElev = -25;
			maxElev = 60;
			minTurn = -90;
			maxTurn = 90;
			initElev = 23;
			gunnerName = "$STR_POSITION_FRONTGUNNER";
			weapons[] = {"PKT"};
			magazines[] = {};
			soundServo[] = {};
			viewGunnerInExternal = 1;
			castGunnerShadow = 1;
			gunnerForceOptics = 0;
			gunnerOpticsModel = "\ca\weapons\optika_empty";
			LODTurnedOut = 1000;
			LODTurnedIn = 1000;
			forceHideGunner = 0;
			commanding = 2;
			primaryGunner = 0;
			stabilizedInAxes = "StabilizedInAxesNone";
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
			startEngine = 0;
		};
		class BackTurret: MainTurret
		{
			body = "turret_2";
			gun = "gun_2";
			weapons[] = {"PKT_2"};
			animationSourceBody = "turret_2";
			animationSourceGun = "gun_2";
			selectionFireAnim = "zasleh2";
			proxyIndex = 2;
			gunnerName = "$STR_POSITION_REARGUNNER";
			forceHideGunner = 0;
			commanding = -2;
			primaryGunner = 1;
			primaryObserver = 0;
			minTurn = 90;
			maxTurn = 270;
			initTurn = 180;
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "muzzle_2";
			gunEnd = "chamber_2";
			memoryPointGun = "machinegun2";
			memoryPointGunnerOptics = "gunnerview2";
			startEngine = 0;
		};
	};
};

class GAZ_Vodnik_MedEvac;
class GAZ_Vodnik_MedEvac_DZE : GAZ_Vodnik_MedEvac {
	displayname = "$STR_DN_GAZ_VODNIK_MEDEVAC";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
    transportmaxbackpacks = 4;	
	attendant = 0;
};