class CfgVehicles {
class Citizen1;	// External class reference
	class zZombie_Base : Citizen1 {
		scope = public;
		glassesEnabled = 0;
		vehicleClass = "Zombie";
		displayName = "Zombie";
		fsmDanger = "";
		fsmFormation = "";
		zombieLoot = "civilian";
		moves = "CfgMovesZombie";
		isMan = false;
		weapons[] = {};
		magazines[] = {};
		sensitivity = 4;	// sensor sensitivity
		sensitivityEar = 2;
		identityTypes[] = {"zombie1", "zombie2"};
		class TalkTopics {};
		languages[] = {};
		
		class Eventhandlers {
			init = "_this call zombie_initialize;";
			local = "if(_this select 1) then {[(position (_this select 0)),(_this select 0),true] execFSM '\z\AddOns\dayz_code\system\zombie_agent.fsm'};";
		};
		
		class HitPoints {
			class HitHead {
				armor = 0.3;
				material = -1;
				name = "head_hit";
				passThrough = true;
				memoryPoint = "pilot";
			};
			
			class HitBody : HitHead {
				armor = 2;
				name = "body";
				memoryPoint = "aimPoint";
			};
			
			class HitSpine : HitHead {
				armor = 2;
				name = "Spine2";
				memoryPoint = "aimPoint";
			};
			
			class HitHands : HitHead {
				armor = 0.5;
				material = -1;
				name = "hands";
				passThrough = true;
			};
			
			class HitLArm : HitHands {
				name = "LeftArm";
				memoryPoint = "lelbow";
			};
			
			class HitRArm : HitHands {
				name = "RightArm";
				memoryPoint = "relbow";
			};
			
			class HitLForeArm : HitHands {
				name = "LeftForeArm";
				memoryPoint = "lwrist";
			};
			
			class HitRForeArm : HitHands {
				name = "RightForeArm";
				memoryPoint = "rwrist";
			};
			
			class HitLHand : HitHands {
				name = "LeftHand";
				memoryPoint = "LeftHandMiddle1";
			};
			
			class HitRHand : HitHands {
				name = "RightHand";
				memoryPoint = "RightHandMiddle1";
			};
			
			class HitLegs : HitHands {
				name = "legs";
				memoryPoint = "pelvis";
			};
			
			class HitLLeg : HitHands {
				name = "LeftLeg";
				memoryPoint = "lknee";
			};
			
			class HitLLegUp : HitHands {
				name = "LeftUpLeg";
				memoryPoint = "lfemur";
			};
			
			class HitRLeg : HitHands {
				name = "RightLeg";
				memoryPoint = "rknee";
			};
			
			class HitRLegUp : HitHands {
				name = "RightUpLeg";
				memoryPoint = "rfemur";
			};
		};
	};
	class AllVehicles;
	class Air : AllVehicles 
	{
	class NewTurret;
	class ViewPilot;
	class AnimationSources;
	};
	class Helicopter : Air 
	{
		class HitPoints; 
		class Turrets
        {
            class MainTurret: NewTurret
            {
                class Turrets;
				class ViewOptics;
            };
        };
	};
	
	class Mi17_base: Helicopter 
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics: ViewOptics {};
				class Turrets: Turrets {};
			};
			class BackTurret: MainTurret
			{
				class Turrets: Turrets {};
			};
		};
	};
	
	class Mi17_DZ: Mi17_base	
	{
		displayname = "Mi-17";
		displaynameshort = "Mi17_DZ";
		scope = 2;
		side = 2;
		crew = "";
		typicalCargo[] = {};
		hiddenSelections[] = {};
		class TransportMagazines{};
		class TransportWeapons{};
		commanderCanSee = 2+16+32;
		gunnerCanSee = 2+16+32;
		driverCanSee = 2+16+32;
		transportMaxWeapons = 10;
		transportMaxMagazines = 50;
        transportmaxbackpacks = 10;
		
		class Turrets : Turrets 
		{
			class MainTurret : MainTurret 
			{
				magazines[] = {"100Rnd_762x54_PK"};
			};
			class BackTurret : BackTurret
			{
				magazines[] = {"100Rnd_762x54_PK"};
			};
		};
	};
	class Mi17_Civilian;
	class Mi17_Civilian_DZ: Mi17_Civilian	
	{
		displayname = "Mi-17 (Civilian)";
		displaynameshort = "Mi-17 (Civ)";
		scope = 2;
		side = 3;
		crew = "";
		typicalCargo[] = {};
		class TransportMagazines{};
		class TransportWeapons{};
		commanderCanSee = 2+16+32;
		gunnerCanSee = 2+16+32;
		driverCanSee = 2+16+32;
		transportMaxWeapons = 10;
		transportMaxMagazines = 50;
        transportmaxbackpacks = 10;
	};



	class UH1H_base: Helicopter 
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics: ViewOptics {};
				class Turrets: Turrets {};
			};
			class LeftDoorGun: MainTurret
			{
				class Turrets: Turrets {};
			};
		};
	};
	
	class UH1H_DZ: UH1H_base
	{
		scope = 2;
		side = 2;
		crew = "";
		typicalCargo[] = {};
		hiddenSelections[] = {};
		class TransportMagazines{};
		class TransportWeapons{};
		commanderCanSee = 2+16+32;
		gunnerCanSee = 2+16+32;
		driverCanSee = 2+16+32;
		transportMaxWeapons = 5;
		transportMaxMagazines = 25;
        transportmaxbackpacks = 4;
		
		class Turrets : Turrets 
		{
			class MainTurret : MainTurret 
			{
				magazines[] = {"100Rnd_762x51_M240"};
			};
			class LeftDoorGun : LeftDoorGun
			{
				magazines[] = {"100Rnd_762x51_M240"};
			};
		};
	};
	class AH6_Base_EP1;
	//class AH6X_EP1: AH6_Base_EP1 {};
	class AH6X_DZ: AH6_Base_EP1
	{
		displayname = "AH6X Little Bird";
		displaynameshort = "AH6X_DZ";
		audible = 6;
		enablemanualfire = 0;
		scope = 2;
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
		transportMaxMagazines = 10;
        transportmaxbackpacks = 2;
		class Turrets {};
	};
	class CH_47F_EP1;
	class CH_47F_EP1_DZ : CH_47F_EP1 { 
		accuracy = 1000; 
		model = "\ca\air_E\CH47\CH_47F"; 
		scope = 2; 
		displayName = "CH-47F"; 
		crew = ""; 
		typicalCargo[] = {}; 
		commanderCanSee = 2+16+32;
		gunnerCanSee = 2+16+32;
		driverCanSee = 2+16+32;
		transportMaxWeapons = 10;
		transportMaxMagazines = 200;
        transportmaxbackpacks = 5;
	};

	class ArmoredSUV_PMC;
	class ArmoredSUV_PMC_DZ : ArmoredSUV_PMC { 
		scope = 2; 
		side = 2; 
		faction = "PMC_BAF";
		crew = ""; 
		typicalCargo[] = {}; 
		transportMaxWeapons = 20; 
		transportMaxMagazines = 400; 
		transportmaxbackpacks = 10;
	};
	class HMMWV_Base;
	class HMMWV_DZ: HMMWV_Base {
		accuracy = 0.32;
		displayname = "HMMWV_DZ";
		hasgunner = 0;
		hiddenselections[] = {"Camo1"};
		hiddenselectionstextures[] = {"\ca\wheeled\hmmwv\data\hmmwv_body_co.paa"};
		icon = "\Ca\wheeled\data\map_ico\icomap_hmwv_CA.paa";
		mapsize = 5;
		model = "ca\wheeled_E\HMMWV\HMMWV";
		picture = "\Ca\wheeled\data\ico\HMMWV_CA.paa";
		scope = 2;
		side = 2;
		crew = "";
		typicalCargo[] = {};
		transportMaxWeapons = 4;
		transportMaxMagazines = 12;
        transportmaxbackpacks = 4;
		class Turrets {};
		class Damage {
			mat[] = {"ca\wheeled\hmmwv\data\hmmwv_details.rvmat", "Ca\wheeled\HMMWV\data\hmmwv_details_damage.rvmat", "Ca\wheeled\HMMWV\data\hmmwv_details_destruct.rvmat", "ca\wheeled\hmmwv\data\hmmwv_body.rvmat", "Ca\wheeled\HMMWV\data\hmmwv_body_damage.rvmat", "Ca\wheeled\HMMWV\data\hmmwv_body_destruct.rvmat", "ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat", "ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat", "ca\wheeled\data\hmmwv_clocks_destruct.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_Half_D.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_Half_D.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_in.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_in_Half_D.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_in_Half_D.rvmat"};
			tex[] = {};
		};
	};
	class RubberBoat;
	class PBX: RubberBoat {
		cargoaction[] = {"PBX_Cargo01", "PBX_Cargo02", "PBX_Cargo03"};
		crew = "";
		displayname = "PBX";
		driveraction = "PBX_Driver";
		extcameraposition[] = {0, 4, -14};
		faction = "RU";
		icon = "\Ca\water\Data\map_ico\icomap_rubber_CA.paa";
		mapsize = 6;
		maxspeed = 65;
		model = "\ca\water\PBX";
		picture = "\ca\water\data\ico\pbx_CA.paa";
		scope = 2;
		side = 0;
		transportsoldier = 3;
		typicalcargo[] = {};
		class TransportMagazines {};
		class Library {
			libtextdesc = "The PBX is a Combat Rubber Craft very similar to the CRRC in design. It is intended to be used for maritime raids and infiltration, as well as riverine operations.";
		};
		class Damage {
			mat[] = {"ca\water\data\pbx_engine.rvmat", "ca\water\data\pbx_engine.rvmat", "ca\water\data\pbx_engine_destruct.rvmat", "ca\water\data\pbx_01.rvmat", "ca\water\data\pbx_01.rvmat", "ca\water\data\pbx_01_destruct.rvmat", "ca\water\data\pbx_02.rvmat", "ca\water\data\pbx_02.rvmat", "ca\water\data\pbx_02_destruct.rvmat"};
			tex[] = {};
		};
		transportMaxMagazines = 50;
        transportMaxWeapons = 5;
        transportMaxBackpacks = 1;
	};
	class TT650_Base;
	class TT650_Ins: TT650_Base {
		crew = "";
		faction = "INS";
		hiddenselectionstextures[] = {"\ca\wheeled3\tt650\data\Yam650_skin1_CO.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {};
	};
	class V3S_Base;
	class V3S_Civ: V3S_Base {
		crew = "";
		faction = "CIV";
		rarityurban = 0.3;
		scope = 2;
		side = 3;
		typicalcargo[] = {};
		class Library {
			libtextdesc = "The V3S is a Czech-made military 6x6 cargo truck capable of carrying cargo up to 5 tons, or up to 3 tons in rough terrain.<br/>This one is a harmless civilian vehicle.";
		};
	};
	class SkodaBase;
	 class car_hatchback: SkodaBase {
		armorcrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01", 0.707946, 1, 200};
		armorcrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02", 0.707946, 1, 200};
		armorcrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03", 0.707946, 1, 200};
		armorcrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04", 0.707946, 1, 200};
		brakedistance = 10;
		buildcrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01", 0.707946, 1, 200};
		buildcrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02", 0.707946, 1, 200};
		buildcrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03", 0.707946, 1, 200};
		buildcrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04", 0.707946, 1, 200};
		cargoaction[] = {"Hatchback_Cargo01"};
		cargoiscodriver[] = {1, 0};
		crew = "";
		displayname = "Old hatchback";
		driveraction = "Hatchback_Driver";
		faction = "CIV";
		hiddenselections[] = {"Camo1"};
		hiddenselectionstextures[] = {"\ca\wheeled\data\hatchback_co.paa"};
		icon = "\Ca\wheeled\data\map_ico\icomap_skoda_CA.paa";
		mapsize = 6;
		maxspeed = 125;
		model = "\ca\Wheeled\car_hatchback";
		picture = "\Ca\wheeled\data\ico\car_hatchback_CA.paa";
		rarityurban = 0.6;
		scope = 2;
		soundarmorcrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
		soundbuildingcrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
		soundengineoffext[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-stop-1", 0.398107, 1, 250};
		soundengineoffint[] = {"ca\sounds\vehicles\Wheeled\sedan\int\int-sedan-stop-1", 0.398107, 1};
		soundengineonext[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-start-1", 0.398107, 1, 250};
		soundengineonint[] = {"ca\sounds\vehicles\Wheeled\sedan\int\int-sedan-start-1", 0.398107, 1};
		soundgear[] = {"", "5.62341e-005", 1};
		soundgetin[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-getout-1", 0.316228, 1};
		soundgetout[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-getout-1", 0.316228, 1, 30};
		soundwoodcrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
		typicalcargo[] = {};
		wheelcircumference = 2.148;
		woodcrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01", 0.707946, 1, 200};
		woodcrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02", 0.707946, 1, 200};
		woodcrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03", 0.707946, 1, 200};
		woodcrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04", 0.707946, 1, 200};
		woodcrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05", 0.707946, 1, 200};
		woodcrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06", 0.707946, 1, 200};
		class SoundEvents {
			class AccelerationIn {
				expression = "(engineOn*(1-camPos))*gmeterZ";
				limit = 0.5;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\sedan\int\int-sedan-acce-1", 0.398107, 1};
			};
			class AccelerationOut {
				expression = "(engineOn*camPos)*gmeterZ";
				limit = 0.5;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\sedan\ext\ext-sedan-acce-1", 0.398107, 1, 250};
			};
		};
		class Sounds {
			class Engine {
				frequency = "(randomizer*0.05+0.95)*rpm";
				sound[] = {"\ca\sounds\Vehicles\Wheeled\sedan\ext\ext-sedan-low-1", 0.398107, 0.9, 300};
				volume = "engineOn*camPos*(rpm factor[0.6, 0.2])";
			};
			class EngineHighOut {
				frequency = "(randomizer*0.05+0.95)*rpm";
				sound[] = {"\ca\sounds\Vehicles\Wheeled\sedan\ext\ext-sedan-high-1", 0.398107, 0.8, 380};
				volume = "engineOn*camPos*(rpm factor[0.45, 0.9])";
			};
			class IdleOut {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\sedan\ext\ext-sedan-idle-1", 0.281838, 1, 200};
				volume = "engineOn*camPos*(rpm factor[0.3, 0])";
			};
			class TiresRockOut {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.316228, 1, 30};
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.316228, 1, 30};
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3", 0.316228, 1, 30};
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.316228, 1, 30};
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.316228, 1, 30};
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.316228, 1, 30};
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\int-noise3", 0.316228, 1, 30};
				volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
			};
			class EngineLowIn {
				frequency = "(randomizer*0.05+0.95)*rpm";
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\sedan\int\int-sedan-low-1", 0.562341, 0.8};
				volume = "((engineOn*thrust) factor[0.65, 0.2])*(1-camPos)";
			};
			class EngineHighIn {
				frequency = "(randomizer*0.05+0.95)*rpm";
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\sedan\int\int-sedan-high-1", 0.562341, 0.8};
				volume = "((engineOn*thrust) factor[0.55, 0.95])*(1-camPos)";
			};
			class IdleIn {
				frequency = 1;
				sound[] = {"\ca\sounds\Vehicles\Wheeled\sedan\int\int-sedan-idle-1", 0.316228, 1};
				volume = "engineOn*(rpm factor[0.3, 0])*(1-camPos)";
			};
			class TiresRockIn {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", 0.177828, 1};
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", 0.177828, 1};
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3", 0.177828, 1};
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", 0.177828, 1};
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", 0.177828, 1};
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", 0.177828, 1};
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\BUS\int\noise3", 0.177828, 1};
				volume = "(damper0 max 0.04)*(speed factor[0, 8])*(1-camPos)";
			};
			class Movement {
				frequency = 1;
				sound = "soundEnviron";
				volume = 0;
			};
		};
		class Damage {
			mat[] = {"ca\wheeled\data\hatchback.rvmat", "ca\wheeled\data\hatchback.rvmat", "ca\wheeled\data\hatchback_destruct.rvmat", "ca\wheeled\data\hatchback.rvmat", "ca\wheeled\data\hatchback.rvmat", "ca\wheeled\data\hatchback_destruct.rvmat", "ca\wheeled\data\detailmapy\auta_skla.rvmat", "ca\wheeled\data\detailmapy\auta_skla_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
			tex[] = {};
		};
		class Library {
			libtextdesc = "Civilian Car";
		};
	};
	class UAZ_Unarmed_Base;
	class UAZ_CDF: UAZ_Unarmed_Base {
		accuracy = 0.3;
		crew = "";
		faction = "CDF";
		hiddenselectionstextures[] = {"\ca\wheeled\data\Uaz_main_002_CO.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {};
	};	
	class MH6J_DZ: AH6_Base_EP1
	{
		scope = 2;
		side = 2;
		crew = "";
		enablemanualfire = 0;
		typicalCargo[] = {};
		displayname = "MH-6J Little Bird";
		displaynameshort = "MH6J_DZ";
		hiddenselections[] = {"camo1", "camo2"};
		transportsoldier = 5;
		hiddenselectionstextures[] = {"ca\air_e\ah6j\data\ah6_merge1_co.paa", "ca\air_e\ah6j\data\default_co.paa"};
		icon = "\ca\air_e\data\UI\Icon_mh6j_CA.paa";
		model = "\ca\air_e\ah6j\mh6j";
		picture = "\ca\air_e\data\UI\Picture_mh6j_CA.paa";
		radartype = 0;
		class TransportMagazines{};
		class TransportWeapons{};
		weapons[] = {};
		magazines[] = {};
		commanderCanSee = 2+16+32;
		gunnerCanSee = 2+16+32;
		driverCanSee = 2+16+32;
		transportMaxWeapons = 3;
		transportMaxMagazines = 20;
        transportmaxbackpacks = 5;
		class Turrets {};
	};	
	class Animal;
	class Pastor;
	class Fin;
	class DZAnimal: Animal
	{
		scope = 0;
		side = 1;
		accuracy = 0.25;
		boneHead = "head";
		bonePrimaryWeapon = "head";
		triggerAnim = "";
		picture = "";
		icon = "\Ca\animals2\data\mapicon_animals_ca.paa";
		mapSize = 10;
		weaponSlots = 0;
		fsmFormation = "";
		fsmDanger = "";
		agentTasks[] = {};
		moves = "CfgMovesAnimal";
		memoryPointHeadAxis = "head_axis";
		woman = 0;
		faceType = "Default";
		boneLEye = "l_eye";
		boneREye = "r_eye";
		boneLEyelidUp = "eye_upl";
		boneREyelidUp = "eye_upr";
		boneLEyelidDown = "eye_lwl";
		boneREyelidDown = "eye_lwr";
		boneLPupil = "l_pupila";
		boneRPupil = "r_pupila";
		memoryPointAim = "aimPoint";
		memoryPointCameraTarget = "camera";
		extCameraPosition[] = {0,0.5,-2.5};
		class EventHandlers{};
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		class VariablesScalar {};
		class VariablesString {};
	};
	class DZ_Pastor : Pastor {
		scope = 2;
		side = 1;
		model = "\ca\animals2\Dogs\Pastor\Pastor";
		displayName = "Alsatian";
		moves = "CfgMovesDogDZ";
		gestures = "CfgGesturesDogDZ";
		fsmDanger = "";
		fsmFormation = "";
		agentTasks[] = {};
		woman = 0;
		class EventHandlers{};
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		class VariablesScalar {};
		class VariablesString {};
	};
	
	class DZ_Fin : Fin {
		scope = 2;
		model = "\ca\animals2\Dogs\Fin\Fin";
		displayName = "Fin";
		moves = "CfgMovesDogDZ";
		gestures = "CfgGesturesDogDZ";
		fsmDanger = "";
		fsmFormation = "";
	};

	class Soldier_Crew_PMC;
	class Bandit1_DZ : Soldier_Crew_PMC {
		displayName = "$STR_CHAR_2";
		side = 1;
		weapons[] = {"Throw","Put"};
		model = "\dayz\characters\man_bandit";
		portrait = "\Ca\characters_E\data\portraits\ger_soldier_CA";
		magazines[] = {};
		backpack = "";
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
	class Bandit2_DZ: Soldier_Crew_PMC
	{
		scope = 2;
		displayName = "$STR_CHAR_2";
		weapons[] = {"Throw","Put"};
		model = "\ca\characters_E\GER\GER_rifleman";
		portrait = "\Ca\characters_E\data\portraits\ger_soldier_CA";
		magazines[] = {};
		backpack = "";
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\dayz\textures\clothes\bandit_tex1_co.paa"};
		weaponSlots = "1 + 4 + 12* 256 + 2* 4096 + 2 + 8* 16 + 12*131072";
		canHideBodies = 1;
	};

	class BAF_Soldier_Officer_W;
	class Rocket_DZ: BAF_Soldier_Officer_W {
		displayName = "Officer";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
	class RU_Policeman;
	class RU_Policeman_DZ: RU_Policeman {
		displayName = "Policeman";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
		canCarryBackPack = 1;
	};
	class Pilot_EP1;
	class Pilot_EP1_DZ: Pilot_EP1 {
		displayName = "Pilot";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
		canCarryBackPack = 1;
	};
	class Haris_Press_EP1;
	class Haris_Press_EP1_DZ: Haris_Press_EP1 {
		displayName = "Press";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
		canCarryBackPack = 1;
	};
	class Ins_Soldier_GL;
	class Ins_Soldier_GL_DZ: Ins_Soldier_GL {
		displayName = "Terrorist";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
		canCarryBackPack = 1;
	};
	class GUE_Commander;
	class GUE_Commander_DZ: GUE_Commander {
		displayName = "Rebel";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
		canCarryBackPack = 1;
	};
	class Functionary1_EP1;
	class Functionary1_EP1_DZ: Functionary1_EP1 {
		displayName = "Business Suit";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
		canCarryBackPack = 1;
	};
	class Priest;
	class Priest_DZ: Priest {
		displayName = "Priest";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
		canCarryBackPack = 1;
	};
	class Rocker2;
	class Rocker2_DZ: Rocker2 {
		displayName = "Rocker";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
		canCarryBackPack = 1;
	};

	class TK_INS_Warlord_EP1;
	class TK_INS_Warlord_EP1_DZ: TK_INS_Warlord_EP1 {
		displayName = "Takistani Warlord";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
	
	class TK_INS_Soldier_EP1;
	class TK_INS_Soldier_EP1_DZ: TK_INS_Soldier_EP1 {
		displayName = "Takistani Soldier";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
		
	class CZ_Special_Forces_GL_DES_EP1;
	class CZ_Special_Forces_GL_DES_EP1_DZ: CZ_Special_Forces_GL_DES_EP1 {
		displayName = "Special Forces";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
		
	class Drake_Light;
	class Drake_Light_DZ: Drake_Light {
		displayName = "Desert Camo";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
	class Soldier_Bodyguard_AA12_PMC;
	class Soldier_Bodyguard_AA12_PMC_DZ: Soldier_Bodyguard_AA12_PMC {
		displayName = "Bodyguard";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
	class Soldier_Sniper_PMC;
	class Soldier_Sniper_PMC_DZ: Soldier_Sniper_PMC {
		displayName = "Marksman";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};	
	class Soldier_TL_PMC;
	class Soldier_TL_PMC_DZ: Soldier_TL_PMC {
		displayName = "Team Leader";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
	class FR_OHara;
	class FR_OHara_DZ: FR_OHara {
		displayName = "Jungle Camo";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
		canCarryBackPack = 1;
		attendant = 0; 
	};
	class FR_Rodriguez;
	class FR_Rodriguez_DZ: FR_Rodriguez {
		displayName = "Gunner Outfit";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
		canCarryBackPack = 1;
	};
	class CZ_Soldier_Sniper_EP1;
	class CZ_Soldier_Sniper_EP1_DZ: CZ_Soldier_Sniper_EP1 {
		displayName = "Desert Guille";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
		canCarryBackPack = 1;
	};
	class Graves_Light;
	class Graves_Light_DZ: Graves_Light {
		displayName = "Urban Camo";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
		canCarryBackPack = 1;
	};
	

	class BAF_Soldier_W;
	class Soldier1_DZ: BAF_Soldier_W {
		displayName = "Soldier";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
	class BAF_Soldier_SniperH_W;
	class Sniper1_DZ: BAF_Soldier_SniperH_W {
		displayName = "Sniper";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
	class BAF_Soldier_L_W;
	class Camo1_DZ: BAF_Soldier_L_W {
		displayName = "Survivor";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};	
	class Bag_Base_EP1;	
	class Bag_Base_BAF;
	class DZ_Patrol_Pack_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "Patrol Pack (coyote)";
		picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_COYOTE_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapsize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault_Coyote.p3d";
		transportMaxWeapons = 1;
		transportMaxMagazines = 8;
	};

	class DZ_Assault_Pack_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "Assault Pack (ACU)";
		picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapSize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault.p3d";
		transportMaxWeapons = 1;
		transportMaxMagazines = 12;
	};

	class DZ_Czech_Vest_Puch: Bag_Base_EP1
	{
		displayname = "Czech Vest Pouch";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapsize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_acr_small.p3d";
		picture = "\ca\weapons_e\data\icons\backpack_ACR_small_CA.paa";
		scope = 2;
		transportmaxmagazines = 12;
		transportmaxweapons = 0;
	};

	class DZ_ALICE_Pack_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "ALICE Pack";
		picture = "\ca\weapons_e\data\icons\backpack_TK_ALICE_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapsize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_tk_alice.p3d";
		transportMaxWeapons = 2;
		transportMaxMagazines = 16;
	};

	class DZ_TK_Assault_Pack_EP1 : Bag_Base_BAF
	{
		scope = 2;
		displayName = "Survival ACU";
		mapSize = 2;
		picture = "\ca\weapons_e\data\icons\backpack_CIVIL_ASSAULT_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		model = "\ca\weapons_e\AmmoBoxes\backpack_civil_assault.p3d";
		transportMaxWeapons = 2;
		transportMaxMagazines = 16;
	};

	class DZ_British_ACU : Bag_Base_BAF
	{
		scope = 2;
		displayName = "British Assault Pack";
		mapSize = 2;
		model = "\ca\weapons_baf\Backpack_Small_BAF";\
		picture = "\ca\weapons_baf\data\UI\backpack_BAF_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		transportMaxWeapons = 3;
		transportMaxMagazines = 18;
	};

	class DZ_CivilBackpack_EP1: Bag_Base_EP1    
	{
		scope = 2;
		displayName = "Czech Backpack";
		picture = "\ca\weapons_e\data\icons\backpack_ACR_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapsize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_acr.p3d";
		transportMaxWeapons = 4;
		transportMaxMagazines = 24;
	};

	class DZ_Backpack_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "Backpack (coyote)";
		picture = "\ca\weapons_e\data\icons\backpack_US_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapsize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_us.p3d";
		transportMaxWeapons = 6;
		transportMaxMagazines = 30;
	};
	
	class DZ_LargeGunBag_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "Large Gunbag";
		model = "\ca\weapons_e\AmmoBoxes\StaticX.p3d"; 
		picture = "\ca\weapons_e\data\icons\staticX_CA.paa"; 
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa"; 
		mapsize = 2;
		transportMaxWeapons = 10;
		transportMaxMagazines = 45;
	};
	class DZ_GunBag_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "Gunbag";
		model = "\ca\weapons_e\AmmoBoxes\StaticY.p3d"; 
		picture = "\ca\weapons_e\data\icons\staticY_CA.paa"; 
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa"; 
		mapsize = 2;
		transportMaxWeapons = 6;
		transportMaxMagazines = 8;
	};
	class DZ_CompactPack_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "Compact Pack"; 
		picture = "\ca\weapons_e\data\icons\backpack_RPG_CA.paa"; 
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa"; 
		mapsize = 2; 
		model = "\ca\weapons_e\AmmoBoxes\backpack_rpg.p3d"; 
		transportMaxWeapons = 1;
		transportMaxMagazines = 18;
	};
	class DZ_TerminalPack_EP1: Bag_Base_EP1
	{
		scope = 2;
	    displayName = "Terminal Pack"; 
		picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_CA.paa"; 
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa"; 
		mapSize = 2; 
		model = "\ca\weapons_e\AmmoBoxes\backpack_us_AUV"; 
		transportMaxWeapons = 1;
		transportMaxMagazines = 12;
	};

	//An2_TK_EP1
	class An2_Base_EP1;
	class AN2_DZ: An2_Base_EP1
	{
		displayname = "AN2 Cargo Plane";
		displaynameshort = "AN2_DZ";
		scope = 2;
		side = 2;
		crew = "";
		typicalCargo[] = {};
		hiddenSelections[] = {};
		class TransportMagazines{};
		class TransportWeapons{};
		weapons[] = {};
		magazines[] = {};
		gunnerHasFlares = false;
		commanderCanSee = 2+16+32;
		gunnerCanSee = 2+16+32;
		driverCanSee = 2+16+32;
		transportMaxWeapons = 10;
		transportMaxMagazines = 80;
		transportmaxbackpacks = 15;
	};
	class House {
		class DestructionEffects;
	};
	
	// This parent class is made to make referring to these objects easier later with allMissionObjects
	class SpawnableWreck : House {};

	class UH1Wreck_DZ: SpawnableWreck
	{
		model = "\ca\air2\UH1Y\UH1Y_Crashed.p3d";
		icon = "\ca\air2\data\UI\icon_UH1Y_CA.paa";
		mapSize = 15;
		displayName = "Crashed UH-1Y";
		vehicleClass = "Wrecks";
	};
	class UH60Wreck_DZ: SpawnableWreck
	{
		model = "\Ca\Misc_E\Wreck_UH60_EP1.p3d";
		icon = "ca\Misc_E\data\Icons\Icon_uh60_wreck_CA";
		mapSize = 15;
		displayName = "UH-60 Wreck";
		vehicleClass = "Wrecks";
	};
	class Strategic;
	class NonStrategic;

	class Land_A_FuelStation_Feed: Strategic
	{
		model = "\ca\structures\House\A_FuelStation\A_FuelStation_Feed";
		transportFuel = 0; //50000;
		nameSound = "fuelstation";
	};

	class Land_Ind_FuelStation_Feed_EP1: Strategic
	{
		model = "\ca\Structures_E\Ind\Ind_FuelStation\Ind_FuelStation_Feed_ep1.p3d"; 
		transportFuel = 0; 
		nameSound = "fuelstation";
	};

	class FuelStation : Strategic { 
	  icon = "\Ca\buildings\Icons\i_fuel_CA.paa"; 
	  scope = 0; 
	  animated = 0; 
	  armor = 20; 
	  displayName = "Fuel station"; 
	  accuracy = 0.5; 
	  transportFuel = 0; 
	};

	class Land_FuelStation_Feed_PMC : Strategic { 
	  model = "\ca\Structures_PMC\Ind\FuelStation\FuelStation_Feed_PMC.p3d"; 
	  transportFuel = 0; 
	  nameSound = "fuelstation"; 
	};

	// lingor
	class Land_ibr_FuelStation_Feed : Strategic { 
		model = "\ibr\lingor_fuel\ibr_FuelStation_Feed.p3d"; 
		transportFuel = 0; 
		nameSound = "fuelstation"; 
	};
	// lingor
	class Land_fuelstation_army : Strategic { 
		model = "\ibr\ibr_plants\fuelstation_army"; 
		transportFuel = 0; 
		nameSound = "fuelstation"; 
	}
	// lingor
	class Land_fuelstation : Strategic { 
		model = "\ibr\ibr_plants\fuelstation";
		transportFuel = 0; 
		nameSound = "fuelstation"; 
	}
	// Lingor hangars
	class land_ibr_hangar : House { 
		model = "\ibr\ibr_hangars\ibr_hangar"; 
		scope = 2; 
		vehicleClass = "ibr_hangars"; 
		transportFuel = 0; 
		transportRepair = 0; 
		icon = "\ibr\ibr_hangars\icons\icon5.paa"; 
		mapSize = 40; 
		displayName = "House"; 
		destrType = "DestructBuilding"; 
		armor = 1200; 
	};
	
	class Ship: AllVehicles 
	{
        displayName = "Ship";
        transportMaxMagazines = 2000;
        transportMaxWeapons = 200;
        transportMaxBackpacks = 40;
	};
    class SmallShip: Ship 
	{
        displayName = "Small Ship";
        transportMaxMagazines = 100;
        transportMaxWeapons = 20;
	};
    class BigShip: Ship 
	{
        displayName = "Big Ship";
        transportMaxMagazines = 500;
        transportMaxWeapons = 200;
	};
    class Fishing_Boat: Ship 
	{
        displayName = "Fishing boat";
		maxSpeed = 40;
        transportMaxMagazines = 400;
        transportMaxWeapons = 40;
        transportMaxBackpacks = 8;
	};
    class Smallboat_1: Ship 
	{
        displayName = "Small boat";
		maxSpeed = 30;    
		transportMaxMagazines = 200;
        transportMaxWeapons = 20;
        transportMaxBackpacks = 4;
	};
    class smallboat_2: Smallboat_1 
	{
        displayName = "Small boat II";
	};
    class Boat: Ship 
	{
        transportMaxMagazines = 100;
        transportMaxWeapons = 10;
        transportMaxBackpacks = 2;
	};
    class RHIB: Boat 
	{
        displayName = "RHIB";
	};
    class RHIB2Turret: RHIB 
	{
        displayName = "RHIB (Mk19)";
	};
	class M113Ambul_UN_EP1;
	class M113Ambul_UN_EP1_DZ: M113Ambul_UN_EP1
	{
		scope = 2;
		side = 2;
		crew = "";
		typicalCargo[] = {};
		hiddenSelections[] = {};
		class TransportMagazines{};
		class TransportWeapons{};
		commanderCanSee = 2+16+32;
		gunnerCanSee = 2+16+32;
		driverCanSee = 2+16+32;
		transportMaxWeapons = 5;
		transportMaxMagazines = 25;
        transportmaxbackpacks = 4;
	};
	class M113Ambul_TK_EP1;
	class M113Ambul_TK_EP1_DZ: M113Ambul_TK_EP1
	{
		scope = 2;
		side = 2;
		crew = "";
		typicalCargo[] = {};
		hiddenSelections[] = {};
		class TransportMagazines{};
		class TransportWeapons{};
		commanderCanSee = 2+16+32;
		gunnerCanSee = 2+16+32;
		driverCanSee = 2+16+32;
		transportMaxWeapons = 5;
		transportMaxMagazines = 25;
        transportmaxbackpacks = 4;
	};
	class KamazRefuel;
	class KamazRefuel_DZ: KamazRefuel
	{
		scope = 2;
		side = 2;
		crew = "";
		typicalCargo[] = {};
		hiddenSelections[] = {};
		class TransportMagazines{};
		class TransportWeapons{};
		transportFuel = 0;
		fuelCapacity = 10000;
	};
	class UralRefuel_TK_EP1;
	class UralRefuel_TK_EP1_DZ: UralRefuel_TK_EP1
	{
		scope = 2;
		side = 2;
		crew = "";
		typicalCargo[] = {};
		hiddenSelections[] = {};
		class TransportMagazines{};
		class TransportWeapons{};
		transportFuel = 0;
		fuelCapacity = 10000;
	};
	class MtvrRefuel_DES_EP1;
	class MtvrRefuel_DES_EP1_DZ: MtvrRefuel_DES_EP1
	{
		scope = 2;
		side = 2;
		crew = "";
		typicalCargo[] = {};
		hiddenSelections[] = {};
		class TransportMagazines{};
		class TransportWeapons{};
		transportFuel = 0;
		fuelCapacity = 10000;
	};
	class V3S_Refuel_TK_GUE_EP1;
	class V3S_Refuel_TK_GUE_EP1_DZ: V3S_Refuel_TK_GUE_EP1
	{
		scope = 2;
		side = 2;
		crew = "";
		typicalCargo[] = {};
		hiddenSelections[] = {};
		class TransportMagazines{};
		class TransportWeapons{};
		transportFuel = 0;
		fuelCapacity = 10000;
	};
	

};	