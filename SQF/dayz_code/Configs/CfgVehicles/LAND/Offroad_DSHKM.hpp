class Offroad_DSHKM_base: Car
{
	scope = 0;
	displayName = "Off-road";
	picture = "\ca\wheeled\data\ico\hilux_DSHK_CA.paa";
	icon = "\ca\wheeled\data\map_ico\icomap_hilux_DSHK_CA.paa";
	mapSize = 5.5;
	wheelCircumference = 2.532;
	maxSpeed = 150;
	steerAheadPlan = 0.2;
	terrainCoef = 2.5;
	soundGear[] = {"",0.000562341,1};
	SoundGetIn[] = {"\ca\sounds\vehicles\wheeled\offroad\ext\ext-offroad-getout-1",0.251189,1};
	SoundGetOut[] = {"\ca\sounds\vehicles\wheeled\offroad\ext\ext-offroad-getout-1",0.251189,1,30};
	soundEngineOnInt[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-start-1",0.316228,1};
	soundEngineOnExt[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-start-1",0.316228,1,200};
	soundEngineOffInt[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-stop-1",0.316228,1};
	soundEngineOffExt[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-stop-1",0.316228,1,200};
	buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01",0.707946,1,200};
	buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02",0.707946,1,200};
	buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03",0.707946,1,200};
	buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04",0.707946,1,200};
	soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
	WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01",0.707946,1,200};
	WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02",0.707946,1,200};
	WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03",0.707946,1,200};
	WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04",0.707946,1,200};
	WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05",0.707946,1,200};
	WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06",0.707946,1,200};
	soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
	ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01",0.707946,1,200};
	ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02",0.707946,1,200};
	ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03",0.707946,1,200};
	ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04",0.707946,1,200};
	soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
	class SoundEvents
	{
		class AccelerationIn
		{
			sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-acce-1",0.316228,1};
			limit = "0.7";
			expression = "(engineOn*(1-camPos))*gmeterZ*(speed factor[2.5, 4])";
		};
		class AccelerationOut
		{
			sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-acce-1",0.316228,1,250};
			limit = "0.7";
			expression = "(engineOn*camPos)*gmeterZ*(speed factor[2.5, 4])";
		};
	};
	class Sounds
	{
		class Engine
		{
			sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-low-1",0.398107,1,300};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "camPos*engineOn*((rpm factor[0.21, 0.5]) min (rpm factor[0.7, 0.3]))";
		};
		class EngineHighOut
		{
			sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-high-2",0.398107,1,400};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "camPos*engineOn*(rpm factor[0.5, 0.85])";
		};
		class IdleOut
		{
			sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-idle-5",0.223872,1,200};
			frequency = "1";
			volume = "camPos*engineOn*(rpm factor[0.4, 0])";
		};
		class TiresRockOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.316228,1,30};
			frequency = "1";
			volume = "camPos*rock*(speed factor[2, 20])";
		};
		class TiresSandOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.316228,1,30};
			frequency = "1";
			volume = "camPos*sand*(speed factor[2, 20])";
		};
		class TiresGrassOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",0.316228,1,30};
			frequency = "1";
			volume = "camPos*grass*(speed factor[2, 20])";
		};
		class TiresMudOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.316228,1,30};
			frequency = "1";
			volume = "camPos*mud*(speed factor[2, 20])";
		};
		class TiresGravelOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.316228,1,30};
			frequency = "1";
			volume = "camPos*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.316228,1,30};
			frequency = "1";
			volume = "camPos*asphalt*(speed factor[2, 20])";
		};
		class NoiseOut
		{
			sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-noise",0.316228,1,30};
			frequency = "1";
			volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
		};
		class EngineLowIn
		{
			sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-low-1",0.562341,1};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-camPos)*engineOn*((rpm factor[0.2, 0.4]) min (rpm factor[0.7, 0.3]))";
		};
		class EngineHighIn
		{
			sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-high-2",0.562341,1};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-camPos)*engineOn*(rpm factor[0.56, 0.8])";
		};
		class IdleIn
		{
			sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-idle-5",0.398107,1};
			frequency = "1";
			volume = "(1-camPos)*engineOn*(rpm factor[0.4, 0])";
		};
		class TiresRockIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",0.316228,1};
			frequency = "1";
			volume = "(1-camPos)*rock*(speed factor[2, 20])";
		};
		class TiresSandIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",0.316228,1};
			frequency = "1";
			volume = "(1-camPos)*sand*(speed factor[2, 20])";
		};
		class TiresGrassIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3",0.316228,1};
			frequency = "1";
			volume = "(1-camPos)*grass*(speed factor[2, 20])";
		};
		class TiresMudIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",0.316228,1};
			frequency = "1";
			volume = "(1-camPos)*mud*(speed factor[2, 20])";
		};
		class TiresGravelIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",0.316228,1};
			frequency = "1";
			volume = "(1-camPos)*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",0.316228,1};
			frequency = "1";
			volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
		};
		class NoiseIn
		{
			sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-noise-1",0.316228,1};
			frequency = "1";
			volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
		};
		class Movement
		{
			sound = "soundEnviron";
			frequency = "1";
			volume = "0";
		};
	};
	class TransportMagazines
	{
	};
	transportSoldier = 1;
	unitInfoType = "UnitInfoSoldier";
	driverAction = "Hilux_Driver";
	cargoAction[] = {"Hilux_cargo01"};
	driverCompartments = "Compartment1";
	cargoCompartments[] = {"Compartment1"};
	gunnerOpticsShowCursor = 1;
	threat[] = {0.6,0.4,0.5};
	class AnimationSources: AnimationSources
	{
		class ReloadAnim
		{
			source = "reload";
			weapon = "DShKM";
		};
		class ReloadMagazine
		{
			source = "reloadmagazine";
			weapon = "DShKM";
		};
		class Revolving
		{
			source = "revolving";
			weapon = "DShKM";
		};
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			body = "mainTurret";
			gun = "mainGun";
			outGunnerMayFire = 1;
			forceHideGunner = 1;
			castGunnerShadow = 1;
			viewGunnerInExternal = 1;
			gunnerOpticsModel = "\ca\Weapons\optika_empty";
			gunnerForceOptics = 0;
			weapons[] = {"DShKM"};
			soundServo[] = {};
			stabilizedInAxes = 0;
			magazines[] = {"50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM"};
			gunnerAction = "Hilux_Gunner";
			gunnerInAction = "Hilux_Gunner";
			ejectDeadGunner = 1;
			minElev = -18;
			maxElev = 60;
			minTurn = -360;
			maxTurn = 360;
			initTurn = 0;
			gunnerCompartments = "Compartment2";
		};
	};
	class Library
	{
//String STR_LIB_HILUX_DSHKM not found
		libTextDesc = "";
	};
	class Damage
	{
		tex[] = {};
		mat[] = {"Ca\wheeled_E\Hilux_Armed\Data\coyota_trup3.rvmat","Ca\wheeled_E\Hilux_Armed\Data\coyota_trup3_damage.rvmat","Ca\wheeled_E\Hilux_Armed\Data\coyota_trup3_destruct.rvmat","Ca\wheeled_E\Hilux_Armed\Data\drziaky.rvmat","Ca\wheeled_E\Hilux_Armed\Data\drziaky_damage.rvmat","Ca\wheeled_E\Hilux_Armed\Data\drziaky_destruct.rvmat","Ca\wheeled_E\Hilux_Armed\Data\coyota_armed.rvmat","Ca\wheeled_E\Hilux_Armed\Data\coyota_armed_damage.rvmat","Ca\wheeled_E\Hilux_Armed\Data\coyota_armed_destruct.rvmat","Ca\wheeled_E\Hilux_Armed\Data\coyota_interier.rvmat","Ca\wheeled_E\Hilux_Armed\Data\coyota_interier_damage.rvmat","Ca\wheeled_E\Hilux_Armed\Data\coyota_interier_destruct.rvmat","Ca\wheeled_E\Hilux_Armed\Data\coyota_kola.rvmat","Ca\wheeled_E\Hilux_Armed\Data\coyota_kola_damage.rvmat","Ca\wheeled_E\Hilux_Armed\Data\coyota_kola_destruct.rvmat","Ca\wheeled_E\Data\auta_skla_in.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\wheeled_E\Data\auta_skla.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
	};
	hiddenSelections[] = {"Camo"};
	outsideSoundFilter = 1;
	insideSoundCoef = 0.8;
	brakeDistance = 13;
	model = "\ca\wheeled_E\Hilux_Armed\hilux_DSHK";
};
class Offroad_DSHKM_Gue_DZ: Offroad_DSHKM_base
{
	scope = 2;
	side = 2;
	faction = "GUE";
	crew = "";
	typicalCargo[] = {""};
	displayName = "Off-road (DShKM) DZ";
	hiddenSelectionsTextures[] = {"\ca\wheeled\hilux_armed\data\coyota_trup4_CO.paa"};
	class Damage
	{
		tex[] = {};
		mat[] = {"ca\wheeled\hilux_armed\data\detailmapy\coyota_armed.rvmat","ca\wheeled\hilux_armed\data\detailmapy\coyota_armed.rvmat","ca\wheeled\hilux_armed\data\detailmapy\coyota_armed_destruct.rvmat","ca\weapons\data\dshk.rvmat","ca\weapons\data\dshk.rvmat","ca\weapons\data\dshk_destruct.rvmat","ca\weapons\data\tripod_dshk.rvmat","ca\weapons\data\tripod_dshk.rvmat","ca\wheeled\hilux_armed\data\detailmapy\tripod_dshk_destruct.rvmat","ca\weapons\data\pkm.rvmat","ca\weapons\data\pkm.rvmat","ca\weapons\data\pkm_destruct.rvmat","ca\wheeled\hilux_armed\data\detailmapy\coyota_trup3.rvmat","ca\wheeled\hilux_armed\data\detailmapy\coyota_trup3.rvmat","ca\wheeled\hilux_armed\data\detailmapy\coyota_trup3_destruct.rvmat","ca\wheeled\hilux_armed\data\detailmapy\drziaky.rvmat","ca\wheeled\hilux_armed\data\detailmapy\drziaky.rvmat","ca\wheeled\hilux_armed\data\detailmapy\drziaky_destruct.rvmat","ca\wheeled\data\detailmapy\coyota_kola.rvmat","ca\wheeled\data\detailmapy\coyota_kola.rvmat","ca\wheeled\data\detailmapy\coyota_kola_destruct.rvmat","ca\wheeled\data\detailmapy\coyota_interier.rvmat","ca\wheeled\data\detailmapy\coyota_interier.rvmat","ca\wheeled\data\detailmapy\coyota_interier_destruct.rvmat","ca\wheeled\data\detailmapy\auta_skla.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			body = "mainTurret";
			gun = "mainGun";
			outGunnerMayFire = 1;
			forceHideGunner = 1;
			castGunnerShadow = 1;
			viewGunnerInExternal = 1;
			gunnerOpticsModel = "\ca\Weapons\optika_empty";
			gunnerForceOptics = 0;
			weapons[] = {"DShKM"};
			soundServo[] = {};
			stabilizedInAxes = 0;
			magazines[] = {"50Rnd_127x107_DSHKM"};
			gunnerAction = "Hilux_Gunner";
			gunnerInAction = "Hilux_Gunner";
			ejectDeadGunner = 1;
			minElev = -18;
			maxElev = 60;
			minTurn = -360;
			maxTurn = 360;
			initTurn = 0;
			gunnerCompartments = "Compartment2";
		};
	};
};

class Offroad_DSHKM_Gue_DZE: Offroad_DSHKM_base
{
	scope = 2;
	side = 2;
	faction = "GUE";
	crew = "";
	typicalCargo[] = {};
	displayName = "Off-road (DShKM) AL";
	hiddenSelectionsTextures[] = {"\ca\wheeled\hilux_armed\data\coyota_trup4_CO.paa"};
	class Damage
	{
		tex[] = {};
		mat[] = {"ca\wheeled\hilux_armed\data\detailmapy\coyota_armed.rvmat","ca\wheeled\hilux_armed\data\detailmapy\coyota_armed.rvmat","ca\wheeled\hilux_armed\data\detailmapy\coyota_armed_destruct.rvmat","ca\weapons\data\dshk.rvmat","ca\weapons\data\dshk.rvmat","ca\weapons\data\dshk_destruct.rvmat","ca\weapons\data\tripod_dshk.rvmat","ca\weapons\data\tripod_dshk.rvmat","ca\wheeled\hilux_armed\data\detailmapy\tripod_dshk_destruct.rvmat","ca\weapons\data\pkm.rvmat","ca\weapons\data\pkm.rvmat","ca\weapons\data\pkm_destruct.rvmat","ca\wheeled\hilux_armed\data\detailmapy\coyota_trup3.rvmat","ca\wheeled\hilux_armed\data\detailmapy\coyota_trup3.rvmat","ca\wheeled\hilux_armed\data\detailmapy\coyota_trup3_destruct.rvmat","ca\wheeled\hilux_armed\data\detailmapy\drziaky.rvmat","ca\wheeled\hilux_armed\data\detailmapy\drziaky.rvmat","ca\wheeled\hilux_armed\data\detailmapy\drziaky_destruct.rvmat","ca\wheeled\data\detailmapy\coyota_kola.rvmat","ca\wheeled\data\detailmapy\coyota_kola.rvmat","ca\wheeled\data\detailmapy\coyota_kola_destruct.rvmat","ca\wheeled\data\detailmapy\coyota_interier.rvmat","ca\wheeled\data\detailmapy\coyota_interier.rvmat","ca\wheeled\data\detailmapy\coyota_interier_destruct.rvmat","ca\wheeled\data\detailmapy\auta_skla.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			body = "mainTurret";
			gun = "mainGun";
			outGunnerMayFire = 1;
			forceHideGunner = 1;
			castGunnerShadow = 1;
			viewGunnerInExternal = 1;
			gunnerOpticsModel = "\ca\Weapons\optika_empty";
			gunnerForceOptics = 0;
			weapons[] = {"DShKM"};
			soundServo[] = {};
			stabilizedInAxes = 0;
			magazines[] = {};
			gunnerAction = "Hilux_Gunner";
			gunnerInAction = "Hilux_Gunner";
			ejectDeadGunner = 1;
			minElev = -18;
			maxElev = 60;
			minTurn = -360;
			maxTurn = 360;
			initTurn = 0;
			gunnerCompartments = "Compartment2";
		};
	};
};

// Performance 1
class Offroad_DSHKM_Gue_DZE1: Offroad_DSHKM_Gue_DZE
{
	maxspeed = 170; // Offroad_DSHKM_base 150 | car 100
};
// Armmor 2
class Offroad_DSHKM_Gue_DZE2: Offroad_DSHKM_Gue_DZE1
{
	armor = 50; // car 20
};
// Cargo 3
class Offroad_DSHKM_Gue_DZE3: Offroad_DSHKM_Gue_DZE2
{
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50 
    transportmaxbackpacks = 4; // car 2
};
// Fuel 4
class Offroad_DSHKM_Gue_DZE4: Offroad_DSHKM_Gue_DZE3
{
	fuelCapacity = 210; // car 100
};
	
