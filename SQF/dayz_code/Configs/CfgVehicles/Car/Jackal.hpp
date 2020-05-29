class BAF_Jackal2_L2A1_D;
class BAF_Jackal2_L2A1_D_DZ : BAF_Jackal2_L2A1_D 
{
	scope = 2;
	displayname = $STR_VEH_NAME_JACKAL_L2A1_DESERT;
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};	
	transportMaxMagazines = 100;
	transportMaxWeapons = 10;
	transportmaxbackpacks = 5;
	class Turrets;
	class MainTurret;
	supplyRadius = 1.5;
};

class BAF_Jackal2_L2A1_D_DZE : BAF_Jackal2_L2A1_D_DZ 
{
	class Turrets: Turrets
	{
		class M420_Turret: MainTurret
		{
			gunnerName = "$STR_POSITION_COMMANDER";
			primaryGunner = 0;
			primaryObserver = 1;
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
			discreteDistanceInitIndex = 2;	
			turretInfoType = "RscWeaponZeroing";			
			commanding = 2;
			body = "mainTurret_2";
			gun = "mainGun_2";
			animationSourceBody = "mainTurret_2";
			animationSourceGun = "mainGun_2";
			proxyIndex = 2;
			gunBeg = "usti hlavne_2";
			gunEnd = "konec hlavne_2";
			memoryPointGun = "gun_muzzle";
			selectionFireAnim = "zasleh_2";
			memoryPointGunnerOptics = "gunnerview_2";
			LODTurnedOut = 1100;
			LODTurnedIn = 1100;
			minElev = -18;
			maxElev = 40;
			minTurn = -35;
			maxTurn = 45;
			initTurn = 0;
			gunnerOpticsModel = "\ca\Weapons\optika_empty";
			gunnerForceOptics = 0;
			weapons[] = {"BAF_M240_veh","SmokeLauncher"};
			magazines[] = {"SmokeLauncherMag","SmokeLauncherMag"};
			soundServo[] = {};
			gunnerAction = "Jackal_commander_BAF";
			gunnerInAction = "Jackal_commander_BAF";
			ejectDeadGunner = 0;
			stabilizedInAxes = "StabilizedInAxesNone";
			memoryPointsGetInGunner = "pos codriver";
			memoryPointsGetInGunnerDir = "pos codriver dir";
		};
		class M2_Turret: MainTurret
		{
			body = "mainTurret";
			gun = "mainGun";
			animationSourceBody = "mainTurret";
			animationSourceGun = "mainGun";
			turretInfoType = "RscWeaponZeroing";
			discreteDistance[] = {100,200,300,400,500,600,800,1000,1200,1500};
			discreteDistanceInitIndex = 2;
			gunnerForceOptics = 0;
			gunnerOutOpticsShowCursor = 0;
			weapons[] = {"BAF_L2A1"};
			minElev = -25;
			maxElev = 40;
			soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.0099999998,1,10};	
			magazines[] = {};
			gunnerAction = "Jackal_gunner_L2A1_BAF";
			ejectDeadGunner = 0;
			castGunnerShadow = 1;
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			memoryPointGunnerOptics = "gunnerview";
			optics = 1;
			gunnerOpticsModel = "ca\Weapons_baf\ACOG_optic";
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.0623;
				minFov = 0.0623;
				maxFov = 0.0623;
			};
			class GunFire: WeaponCloudsMGun
			{
				interval = 0.01;
			};
			memoryPointsGetInGunner = "pos gunner";
			memoryPointsGetInGunnerDir = "pos gunner dir";
		};
	};
};

class BAF_Jackal2_L2A1_W_DZ : BAF_Jackal2_L2A1_D_DZ
{
	model = "\CorePatch\CorePatch_Vehicles\models\Jackal_L2A1_W_BAF";
	displayname = $STR_VEH_NAME_JACKAL_L2A1_WOODLAND;
	class Turrets;
	class MainTurret;
	class M420_Turret;
};

class BAF_Jackal2_L2A1_W_DZE : BAF_Jackal2_L2A1_W_DZ
{
	class Turrets: Turrets
	{
		class M420_Turret: MainTurret
		{
			gunnerName = "$STR_POSITION_COMMANDER";
			primaryGunner = 0;
			primaryObserver = 1;
			turretInfoType = "RscWeaponZeroing";
			discreteDistance[] = {100,200,300,400,500,600,800,1000,1200,1500};
			discreteDistanceInitIndex = 2;			
			commanding = 2;
			body = "mainTurret_2";
			gun = "mainGun_2";
			animationSourceBody = "mainTurret_2";
			animationSourceGun = "mainGun_2";
			proxyIndex = 2;
			gunBeg = "usti hlavne_2";
			gunEnd = "konec hlavne_2";
			memoryPointGun = "gun_muzzle";
			selectionFireAnim = "zasleh_2";
			memoryPointGunnerOptics = "gunnerview_2";
			LODTurnedOut = 1100;
			LODTurnedIn = 1100;
			minElev = -18;
			maxElev = 40;
			minTurn = -35;
			maxTurn = 45;
			initTurn = 0;
			gunnerOpticsModel = "\ca\Weapons\optika_empty";
			gunnerForceOptics = 0;
			weapons[] = {"BAF_M240_veh","SmokeLauncher"};
			magazines[] = {"SmokeLauncherMag","SmokeLauncherMag"};
			soundServo[] = {};
			gunnerAction = "Jackal_commander_BAF";
			gunnerInAction = "Jackal_commander_BAF";
			ejectDeadGunner = 0;
			stabilizedInAxes = "StabilizedInAxesNone";
			memoryPointsGetInGunner = "pos codriver";
			memoryPointsGetInGunnerDir = "pos codriver dir";
		};
		class M2_Turret: MainTurret
		{
			body = "mainTurret";
			gun = "mainGun";
			animationSourceBody = "mainTurret";
			animationSourceGun = "mainGun";
			turretInfoType = "RscWeaponZeroing";
			discreteDistance[] = {100,200,300,400,500,600,800,1000,1200,1500};
			discreteDistanceInitIndex = 2;
			gunnerForceOptics = 0;
			gunnerOutOpticsShowCursor = 0;
			weapons[] = {"BAF_L2A1"};
			minElev = -25;
			maxElev = 40;
			soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.0099999998,1,10};			
			magazines[] = {};
			gunnerAction = "Jackal_gunner_L2A1_BAF";
			ejectDeadGunner = 0;
			castGunnerShadow = 1;
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			memoryPointGunnerOptics = "gunnerview";
			optics = 1;
			gunnerOpticsModel = "ca\Weapons_baf\ACOG_optic";
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.0623;
				minFov = 0.0623;
				maxFov = 0.0623;
			};
			class GunFire: WeaponCloudsMGun
			{
				interval = 0.01;
			};
			memoryPointsGetInGunner = "pos gunner";
			memoryPointsGetInGunnerDir = "pos gunner dir";
		};
	};
};

class BAF_Jackal2_GMG_D;
class BAF_Jackal2_GMG_D_DZ : BAF_Jackal2_GMG_D
{
	displayname = $STR_VEH_NAME_JACKAL_MK19_DESERT;
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};	
	transportMaxMagazines = 100;
	transportMaxWeapons = 10;
	transportmaxbackpacks = 5;	
	class Turrets;
	class MainTurret;
	class M420_Turret;
	class GMG_Turret;
	supplyRadius = 1.5;
};

class BAF_Jackal2_GMG_D_DZE : BAF_Jackal2_GMG_D_DZ
{
	displayname = $STR_VEH_NAME_JACKAL_MK19_DESERT;
	class Turrets: Turrets
	{
		class M420_Turret: M420_Turret{
			magazines[] = {};
		};
		class GMG_Turret: MainTurret
		{
			body = "mainTurret";
			gun = "mainGun";
			animationSourceBody = "mainTurret";
			animationSourceGun = "mainGun";
			turretInfoType = "RscWeaponZeroing";
			discreteDistance[] = {100,200,300,400,600,800,1000,1200,1500,1800};
			discreteDistanceInitIndex = 3;
			gunnerForceOptics = 0;
			gunnerOutOpticsShowCursor = 0;
			minElev = -25;
			maxElev = 40;
			soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.0099999998,1,10};
			weapons[] = {"BAF_GMG"};
			magazines[] = {};
			gunnerAction = "Jackal_gunner_GMG_BAF";
			ejectDeadGunner = 0;
			castGunnerShadow = 1;
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			class GunFire: WeaponCloudsMGun
			{
				interval = 0.01;
			};
			memoryPointsGetInGunner = "pos gunner";
			memoryPointsGetInGunnerDir = "pos gunner dir";
			memoryPointGunnerOptics = "gunnerview";
			optics = 1;
			gunnerOpticsModel = "\ca\Weapons_baf\nlaw_optic";
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.0623;
				minFov = 0.0623;
				maxFov = 0.0623;
			};
		};
	};
};

class BAF_Jackal2_GMG_W_DZ : BAF_Jackal2_GMG_D_DZ
{
	model = "\CorePatch\CorePatch_Vehicles\models\Jackal_GMG_W_BAF";
	displayname = $STR_VEH_NAME_JACKAL_MK19_WOODLAND;
	class Turrets;
	class MainTurret;
	class M420_Turret;
	class GMG_Turret;
};

class BAF_Jackal2_GMG_W_DZE : BAF_Jackal2_GMG_W_DZ
{
	class Turrets: Turrets
	{
		class M420_Turret: M420_Turret{
			magazines[] = {};
		};
		class GMG_Turret: MainTurret
		{
			body = "mainTurret";
			gun = "mainGun";
			animationSourceBody = "mainTurret";
			animationSourceGun = "mainGun";
			turretInfoType = "RscWeaponZeroing";
			discreteDistance[] = {100,200,300,400,600,800,1000,1200,1500,1800};
			discreteDistanceInitIndex = 3;
			gunnerForceOptics = 0;
			gunnerOutOpticsShowCursor = 0;
			minElev = -25;
			maxElev = 40;
			soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.0099999998,1,10};
			weapons[] = {"BAF_GMG"};
			magazines[] = {};
			gunnerAction = "Jackal_gunner_GMG_BAF";
			ejectDeadGunner = 0;
			castGunnerShadow = 1;
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			class GunFire: WeaponCloudsMGun
			{
				interval = 0.01;
			};
			memoryPointsGetInGunner = "pos gunner";
			memoryPointsGetInGunnerDir = "pos gunner dir";
			memoryPointGunnerOptics = "gunnerview";
			optics = 1;
			gunnerOpticsModel = "\ca\Weapons_baf\nlaw_optic";
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.0623;
				minFov = 0.0623;
				maxFov = 0.0623;
			};
		};
	};
};