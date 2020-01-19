class T810_DZE_Base_ACR: Truck
{
	scope = private;
	mapSize = 8;
	picture = "\Ca\Wheeled_ACR\Data\UI\Picture_T810_CA.paa";
	Icon = "\Ca\Wheeled_ACR\Data\UI\Icon_T810_CA.paa";
	vehicleClass = "Car";
	class Library
	{
		libTextDesc = "$STR_ACR_LIB_T810";
	};
	fuelCapacity = 100;
	maxSpeed = 106;
	wheelCircumference = 3.5814157;
	turnCoef = 5.0;
	steerAheadSimul = 0.2;
	steerAheadPlan = 0.3;
	predictTurnSimul = 0.9;
	predictTurnPlan = 1.0;
	brakeDistance = 9.5;
	transportMaxWeapons = 50;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 10;	
	armor = 40;
	damageResistance = 0.03;
	weapons[] = {"TruckHorn"};
	magazines[] = {};
	threat[] = {1,0.1,0.4};
	class DestructionEffects: DestructionEffects{};
	class HitPoints: HitPoints
	{
		class HitLFWheel: HitLFWheel
		{
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.3;
		};
		class HitLMWheel: HitLMWheel
		{
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.3;
		};
		class HitRMWheel: HitRMWheel
		{
			armor = 0.3;
		};
		class HitFuel
		{
			armor = 1.4;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1
		{
			armor = 0.003;
		};
		class HitGlass2: HitGlass2
		{
			armor = 0.02;
		};
		class HitGlass3: HitGlass3
		{
			armor = 0.02;
		};
		class HitGlass4: HitGlass4
		{
			armor = 0.02;
		};
	};
	transportAmmo = 0;
	transportRepair = 0;
	transportFuel = 0;
	transportSoldier = 11;
	crew = "";
	driverAction = "MTVR_Driver";
	typicalCargo[] = {};
	cargoAction[] = {"Truck_Cargo01","Truck_Cargo01","Truck_Cargo04","Truck_Cargo04","Truck_Cargo02","Truck_Cargo03","Truck_Cargo04","Truck_Cargo02","Truck_Cargo04","Truck_Cargo04","Truck_Cargo04","Truck_Cargo04"};
	initCargoAngleY = 185;
	getInAction = "GetInHigh";
	getOutAction = "GetOutHigh";
	cargoIsCoDriver[] = {1,0,0};
	class Turrets: Turrets
	{
		class MainTurret;
		class PKBTurret: MainTurret
		{
			startEngine = 0;
			hasGunner = 1;
			memoryPointGunnerOptics = "eye";
			gunnerOpticsModel = "\ca\Weapons\optika_empty";
			gunnerForceOptics = 0;
			gunnerOpticsShowCursor = 0;
			selectionFireAnim = "zasleh";
			gunnerAction = "T810gunner";
			gunnerInAction = "T810gunner";
			gunnerName = "PKB Gunner";
			gunnerGetInAction = "GetInHigh";
			gunnerGetOutAction = "GetOutHigh";
			weapons[] = {"PKT"};
			magazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK"};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			animationSourceBody = "OtocVez";
			animationSourceGun = "OtocHlaven";
			memoryPointGun = "usti hlavne";
			body = "OtocVez";
			gun = "OtocHlaven";
			gunAxis = "osa_hlavne";
			turretAxis = "osa_veze";
			minElev = -15;
			maxElev = 35;
			initElev = 0;
			minTurn = -360;
			maxTurn = 360;
			initTurn = 0;
			soundServo[] = {};
			outGunnerMayFire = 1;
			inGunnerMayFire = 1;
			castGunnerShadow = 1;
			class ViewGunner
			{
				initAngleX = 7;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -60;
				maxAngleY = 60;
				initFov = 0.8;
				minFov = 0.5;
				maxFov = 0.7;
			};
		};
	};
	SoundGear[] = {"",0.0017782794,1};
	soundGetIn[] = {"ca\sounds\vehicles\Wheeled\MTVR\ext\ext-truck-getin",0.70794576,1};
	soundGetOut[] = {"ca\sounds\vehicles\Wheeled\MTVR\ext\ext-truck-getout",0.56234133,1,50};
	soundEngineOnInt[] = {"CA\Sounds_ACR\wheeled\T810\t810_int_start",0.56234133,1.0};
	soundEngineOnExt[] = {"CA\Sounds_ACR\wheeled\T810\t810_ext_start",0.56234133,1.0,350};
	soundEngineOffInt[] = {"CA\Sounds_ACR\wheeled\T810\t810_int_stop",0.56234133,1.0};
	soundEngineOffExt[] = {"CA\Sounds_ACR\wheeled\T810\t810_ext_stop",0.56234133,1.0,350};
	buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01",0.70794576,1,200};
	buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02",0.70794576,1,200};
	buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03",0.70794576,1,200};
	buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04",0.70794576,1,200};
	soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
	WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01",0.70794576,1,200};
	WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02",0.70794576,1,200};
	WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03",0.70794576,1,200};
	WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04",0.70794576,1,200};
	WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05",0.70794576,1,200};
	WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06",0.70794576,1,200};
	soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
	ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01",0.70794576,1,200};
	ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02",0.70794576,1,200};
	ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03",0.70794576,1,200};
	ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04",0.70794576,1,200};
	soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
	class SoundEvents
	{
		class AccelerationIn
		{
			sound[] = {"CA\Sounds_ACR\wheeled\T810\t810_int_acceleration",0.39810717,1.0};
			limit = "0.15";
			expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
		};
		class AccelerationOut
		{
			sound[] = {"CA\Sounds_ACR\wheeled\T810\t810_ext_acceleration",0.56234133,1.0,390};
			limit = "0.15";
			expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
		};
	};
	class Sounds
	{
		class Engine
		{
			sound[] = {"CA\Sounds_ACR\wheeled\T810\t810_ext_low",1.0,1.0,450};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "engineOn*camPos*(rpm factor[0.7, 0.2])";
		};
		class EngineHighOut
		{
			sound[] = {"CA\Sounds_ACR\wheeled\T810\t810_ext_high",1.0,1.0,550};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "engineOn*camPos*(rpm factor[0.5, 0.95])";
		};
		class IdleOut
		{
			sound[] = {"CA\Sounds_ACR\wheeled\T810\t810_ext_idle",0.56234133,1.0,350};
			frequency = "1";
			volume = "engineOn*camPos*(rpm factor[0.4, 0])";
		};
		class TiresRockOut
		{
			sound[] = {"CA\Sounds_ACR\wheeled\T810\ext-tires-rock2",0.1,1.0,50};
			frequency = "1";
			volume = "camPos*rock*(speed factor[2, 20])";
		};
		class TiresSandOut
		{
			sound[] = {"CA\Sounds_ACR\wheeled\T810\ext-tires-sand2",0.1,1.0,50};
			frequency = "1";
			volume = "camPos*sand*(speed factor[2, 20])";
		};
		class TiresGrassOut
		{
			sound[] = {"CA\Sounds_ACR\wheeled\T810\ext-tires-grass3",0.1,1.0,50};
			frequency = "1";
			volume = "camPos*grass*(speed factor[2, 20])";
		};
		class TiresMudOut
		{
			sound[] = {"CA\Sounds_ACR\wheeled\T810\ext-tires-mud2",0.1,1.0,50};
			frequency = "1";
			volume = "camPos*mud*(speed factor[2, 20])";
		};
		class TiresGravelOut
		{
			sound[] = {"CA\Sounds_ACR\wheeled\T810\ext-tires-gravel2",0.1,1.0,50};
			frequency = "1";
			volume = "camPos*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltOut
		{
			sound[] = {"CA\Sounds_ACR\wheeled\T810\ext-tires-asphalt3",0.1,1.0,50};
			frequency = "1";
			volume = "camPos*asphalt*(speed factor[2, 20])";
		};
		class NoiseOut
		{
			sound[] = {"CA\Sounds_ACR\wheeled\T810\ext-noise2",0.01,1.0,50};
			frequency = "1";
			volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
		};
		class EngineLowIn
		{
			sound[] = {"CA\Sounds_ACR\wheeled\T810\t810_int_low",1.0,1.0};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "((engineOn*rpm) factor[0.65, 0.2])*(1-camPos)";
		};
		class EngineHighIn
		{
			sound[] = {"CA\Sounds_ACR\wheeled\T810\t810_int_high",1.0,1.0};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "((engineOn*rpm) factor[0.4, 1.0])*(1-camPos)";
		};
		class IdleIn
		{
			sound[] = {"CA\Sounds_ACR\wheeled\T810\t810_int_idle",0.39810717,1.0};
			frequency = "1";
			volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
		};
		class TiresRockIn
		{
			sound[] = {"CA\Sounds_ACR\wheeled\T810\int-tires-rock2",0.17782794,1.0};
			frequency = "1";
			volume = "(1-camPos)*rock*(speed factor[2, 20])";
		};
		class TiresSandIn
		{
			sound[] = {"CA\Sounds_ACR\wheeled\T810\int-tires-sand2",0.17782794,1.0};
			frequency = "1";
			volume = "(1-camPos)*sand*(speed factor[2, 20])";
		};
		class TiresGrassIn
		{
			sound[] = {"CA\Sounds_ACR\wheeled\T810\int-tires-grass3",0.17782794,1.0};
			frequency = "1";
			volume = "(1-camPos)*grass*(speed factor[2, 20])";
		};
		class TiresMudIn
		{
			sound[] = {"CA\Sounds_ACR\wheeled\T810\int-tires-mud2",0.17782794,1.0};
			frequency = "1";
			volume = "(1-camPos)*mud*(speed factor[2, 20])";
		};
		class TiresGravelIn
		{
			sound[] = {"CA\Sounds_ACR\wheeled\T810\int-tires-gravel2",0.17782794,1.0};
			frequency = "1";
			volume = "(1-camPos)*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltIn
		{
			sound[] = {"CA\Sounds_ACR\wheeled\T810\int-tires-asphalt3",0.17782794,1.0};
			frequency = "1";
			volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
		};
		class NoiseIn
		{
			sound[] = {"CA\Sounds_ACR\wheeled\T810\int-noise2",0.017782794,1.0};
			frequency = "1";
			volume = "(damper0 max 0.04)*(speed factor[0, 8])*(1-camPos)";
		};
		class Movement
		{
			sound = "soundEnviron";
			frequency = "1";
			volume = "0";
		};
	};
	memoryPointExhaust = "vyfuk start";
	memoryPointExhaustDir = "vyfuk konec";
	class Damage
	{
		tex[] = {};
		mat[] = {"Ca\Wheeled_ACR\T810\data\auta_skla.rvmat","Ca\Wheeled_ACR\T810\data\auta_skla_damage.rvmat","Ca\Wheeled_ACR\T810\data\auta_skla_damage.rvmat","Ca\Wheeled_ACR\T810\data\auta_skla_in.rvmat","Ca\Wheeled_ACR\T810\data\auta_skla_in_damage.rvmat","Ca\Wheeled_ACR\T810\data\auta_skla_in_damage.rvmat","Ca\Wheeled_ACR\T810\data\bed.rvmat","Ca\Wheeled_ACR\T810\data\bed_damage.rvmat","Ca\Wheeled_ACR\T810\data\bed_destruct.rvmat","Ca\Wheeled_ACR\T810\data\cabin.rvmat","Ca\Wheeled_ACR\T810\data\cabin_damage.rvmat","Ca\Wheeled_ACR\T810\data\cabin_destruct.rvmat","Ca\Wheeled_ACR\T810\data\cabin2.rvmat","Ca\Wheeled_ACR\T810\data\cabin2_damage.rvmat","Ca\Wheeled_ACR\T810\data\cabin2_destruct.rvmat","Ca\Wheeled_ACR\T810\data\undercarriage.rvmat","Ca\Wheeled_ACR\T810\data\undercarriage_damage.rvmat","Ca\Wheeled_ACR\T810\data\undercarriage_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
	};
	class TransportMagazines {};
	class TransportWeapons {};

	class NVGMarkers
	{
		class NVGMarker01
		{
			name = "nvg_marker";
			color[] = {0.03,0.003,0.003,1};
			ambient[] = {0.003,0.0003,0.0003,1};
			brightness = 0.001;
			blinking = 1;
		};
	};
	class AnimationSources;
};

class T810A_PKT_ACR_DZ: T810_DZE_Base_ACR
{
	scope = public;
	displayname = $STR_VEH_NAME_TATRA_PKT_WOODLAND;
	model = "\Ca\Wheeled_ACR\T810\t810_vp2_acr.p3d";
	picture = "\Ca\Wheeled_ACR\Data\UI\Picture_T810_MG_CA.paa";
	class AnimationSources: AnimationSources
	{
		class Select_plachta
		{
			source = "user";
			animPeriod = 1e-007;
			initPhase = 0;
		};
		class ReloadMagazine
		{
			source = "reloadmagazine";
			weapon = "PKT";
		};
		class Revolving
		{
			source = "revolving";
			weapon = "PKT";
		};
		class belt_rotation
		{
			source = "reload";
			weapon = "PKT";
		};
		class recoil
		{
			source = "reload";
			weapon = "PKT";
		};
		class bolt
		{
			source = "reload";
			weapon = "PKT";
		};
	};
	hiddenSelections[] = {"camo1","camo2","camo3"};
	hiddenSelectionsTextures[] = {"Ca\Wheeled_ACR\T810\data\cabin2_co.paa","Ca\Wheeled_ACR\T810\data\bed2_co.paa","ca\wheeled_acr\t810\data\undercarriage_co.paa"};
	class Damage;
};

class T810A_PKT_ACR_DZE: T810A_PKT_ACR_DZ
{
	class Turrets: Turrets
	{
		class MainTurret;
		class PKBTurret: MainTurret
		{
			startEngine = 0;
			hasGunner = 1;
			memoryPointGunnerOptics = "eye";
			gunnerOpticsModel = "\ca\Weapons\optika_empty";
			gunnerForceOptics = 0;
			gunnerOpticsShowCursor = 0;
			selectionFireAnim = "zasleh";
			gunnerAction = "T810gunner";
			gunnerInAction = "T810gunner";
			gunnerName = "PKB Gunner";
			gunnerGetInAction = "GetInHigh";
			gunnerGetOutAction = "GetOutHigh";
			weapons[] = {"PKT"};
			magazines[] = {};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			animationSourceBody = "OtocVez";
			animationSourceGun = "OtocHlaven";
			memoryPointGun = "usti hlavne";
			body = "OtocVez";
			gun = "OtocHlaven";
			gunAxis = "osa_hlavne";
			turretAxis = "osa_veze";
			minElev = -15;
			maxElev = 35;
			initElev = 0;
			minTurn = -360;
			maxTurn = 360;
			initTurn = 0;
			soundServo[] = {};
			outGunnerMayFire = 1;
			inGunnerMayFire = 1;
			castGunnerShadow = 1;
			class ViewGunner
			{
				initAngleX = 7;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -60;
				maxAngleY = 60;
				initFov = 0.8;
				minFov = 0.5;
				maxFov = 0.7;
			};
		};
	};
};

class T810A_PKT_DES_ACR_DZ: T810A_PKT_ACR_DZ
{
	displayname = $STR_VEH_NAME_TATRA_PKT_DESERT;
	hiddenSelections[] = {"camo1","camo2","camo3"};
	hiddenSelectionsTextures[] = {"Ca\Wheeled_ACR\T810\data\cabin2_des_CO.paa","Ca\Wheeled_ACR\T810\data\bed_desert_co.paa","Ca\Wheeled_ACR\T810\data\undercarriage_des_CO.paa"};	
};

class T810A_PKT_DES_ACR_DZE: T810A_PKT_ACR_DZE
{
	displayname = $STR_VEH_NAME_TATRA_PKT_DESERT;
	hiddenSelections[] = {"camo1","camo2","camo3"};
	hiddenSelectionsTextures[] = {"Ca\Wheeled_ACR\T810\data\cabin2_des_CO.paa","Ca\Wheeled_ACR\T810\data\bed_desert_co.paa","Ca\Wheeled_ACR\T810\data\undercarriage_des_CO.paa"};	
};

class T810A_ACR_DZE: T810A_PKT_ACR_DZ
{
	displayname = $STR_VEH_NAME_TATRA_WOODLAND;
	transportSoldier = 12;
	cargoIsCoDriver[] = {1,1,0};	
	class Turrets {};
	model = "\Ca\Wheeled_ACR\T810\t810_v_acr.p3d";
	class AnimationSources: AnimationSources
	{
		class Select_plachta
		{
			source = "user";
			animPeriod = 1e-007;
			initPhase = 0;
		};
	};
};	

class T810A_ACR_DES_DZE: T810A_ACR_DZE
{
	displayname = $STR_VEH_NAME_TATRA_DESERT;
	hiddenSelections[] = {"camo1","camo2","camo3","camo6"};
	hiddenSelectionsTextures[] = {"Ca\Wheeled_ACR\T810\data\cabin_desert_co.paa","Ca\Wheeled_ACR\T810\data\bed_desert_co.paa","Ca\Wheeled_ACR\T810\data\undercarriage_des_CO.paa","Ca\Wheeled_ACR\T810\data\T810_desert_mlod_CO.paa"};
};

class T810A_ACR_OPEN_DZE: T810A_ACR_DZE
{
	displayname = $STR_VEH_NAME_TATRA_OPEN_WOODLAND;
	class AnimationSources: AnimationSources
	{
		class Select_plachta
		{
			source = "user";
			animPeriod = 1e-007;
			initPhase = 1;
		};
	};
};

class T810A_ACR_DES_OPEN_DZE: T810A_ACR_OPEN_DZE
{
	displayname = $STR_VEH_NAME_TATRA_OPEN_DESERT;
	hiddenSelections[] = {"camo1","camo2","camo3","camo6"};
	hiddenSelectionsTextures[] = {"Ca\Wheeled_ACR\T810\data\cabin_desert_co.paa","Ca\Wheeled_ACR\T810\data\bed_desert_co.paa","Ca\Wheeled_ACR\T810\data\undercarriage_des_CO.paa","Ca\Wheeled_ACR\T810\data\T810_desert_mlod_CO.paa"};
};

class T810A_ACR_REFUEL_DZE: T810A_ACR_DZE
{
	displayName = $STR_VEH_NAME_TATRA_WOODLAND_REFUEL;
	model = "\Ca\Wheeled_ACR\T810\t810_refuel_acr.p3d";
	picture = "\Ca\Wheeled_ACR\Data\UI\Picture_T810refuel_CA.paa";
	Icon = "\Ca\Wheeled_ACR\Data\UI\Icon_T810fuel_CA.paa";
	transportSoldier = 2;
	cargoAction[] = {"Truck_Cargo01"};
	fuelCapacity = 10000;
	class Damage
	{
		tex[] = {};
		mat[] = {"Ca\Wheeled_ACR\T810\data\auta_skla.rvmat","Ca\Wheeled_ACR\T810\data\auta_skla_damage.rvmat","Ca\Wheeled_ACR\T810\data\auta_skla_damage.rvmat","Ca\Wheeled_ACR\T810\data\auta_skla_in.rvmat","Ca\Wheeled_ACR\T810\data\auta_skla_in_damage.rvmat","Ca\Wheeled_ACR\T810\data\auta_skla_in_damage.rvmat","Ca\Wheeled_ACR\T810\data\t810_fueltank.rvmat","Ca\Wheeled_ACR\T810\data\t810_fueltank_damage.rvmat","Ca\Wheeled_ACR\T810\data\t810_fueltank_destruct.rvmat","Ca\Wheeled_ACR\T810\data\cabin.rvmat","Ca\Wheeled_ACR\T810\data\cabin_damage.rvmat","Ca\Wheeled_ACR\T810\data\cabin_destruct.rvmat","Ca\Wheeled_ACR\T810\data\undercarriage.rvmat","Ca\Wheeled_ACR\T810\data\undercarriage_damage.rvmat","Ca\Wheeled_ACR\T810\data\undercarriage_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
	};	
};

class T810A_ACR_REFUEL_DES_DZE: T810A_ACR_REFUEL_DZE
{
	displayName = $STR_VEH_NAME_TATRA_DESERT_REFUEL;
	hiddenSelections[] = {"camo1","camo2","camo3","camo6"};
	hiddenSelectionsTextures[] = {"Ca\Wheeled_ACR\T810\data\cabin_desert_co.paa","Ca\Wheeled_ACR\T810\data\t810_fueltank_desert_co.paa","Ca\Wheeled_ACR\T810\data\undercarriage_des_CO.paa","Ca\Wheeled_ACR\T810\data\T810_desert_mlod_CO.paa"};
};

class T810_ACR_REAMMO_DZE: T810A_ACR_DZE
{
	displayName = $STR_VEH_NAME_TATRA_WEAPONS_WOODLAND;
	model = "\Ca\Wheeled_ACR\T810\t810_reammo_acr.p3d";
	cargoAction[] = {"Truck_Cargo01"};
	transportSoldier = 2;
	transportMaxWeapons = 75;
	transportMaxMagazines = 100;
	transportmaxbackpacks = 8;
};

class T810_ACR_REAMMO_DES_DZE: T810_ACR_REAMMO_DZE
{
	displayName = $STR_VEH_NAME_TATRA_WEAPONS_DESERT;
	hiddenSelections[] = {"camo1","camo2","camo3","camo6"};
	hiddenSelectionsTextures[] = {"Ca\Wheeled_ACR\T810\data\cabin_desert_co.paa","Ca\Wheeled_ACR\T810\data\bed_desert_co.paa","Ca\Wheeled_ACR\T810\data\undercarriage_des_CO.paa","Ca\Wheeled_ACR\T810\data\T810_desert_mlod_CO.paa"};
};

class T810_ACR_REPAIR_DZE: T810A_ACR_DZE
{
	displayName = $STR_VEH_NAME_TATRA_AMMO_WOODLAND;
	model = "\Ca\Wheeled_ACR\T810\t810_repair_acr.p3d";
	Icon = "\Ca\Wheeled_ACR\Data\UI\Icon_T810repair_CA.paa";
	transportSoldier = 2;
	cargoAction[] = {"Truck_Cargo01"};
	transportMaxWeapons = 25;
	transportMaxMagazines = 300;
	transportmaxbackpacks = 8;
};

class T810_ACR_REPAIR_DES_DZE: T810_ACR_REPAIR_DZE
{
	displayName = $STR_VEH_NAME_TATRA_AMMO_DESERT;
	hiddenSelections[] = {"camo1","camo2","camo3","camo6"};
	hiddenSelectionsTextures[] = {"Ca\Wheeled_ACR\T810\data\cabin_desert_co.paa","Ca\Wheeled_ACR\T810\data\bed_desert_co.paa","Ca\Wheeled_ACR\T810\data\undercarriage_des_CO.paa","Ca\Wheeled_ACR\T810\data\T810_desert_mlod_CO.paa"};
};