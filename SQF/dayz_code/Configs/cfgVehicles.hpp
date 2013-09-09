class CfgVehicles {

	#include "CfgVehicles\Zeds\Zeds.hpp"
	#include "CfgVehicles\Zeds\NewZeds.hpp"
	#include "CfgVehicles\Zeds\PlayerZeds.hpp"
	#include "CfgVehicles\Females\females.hpp"

	class All;
	class HouseBase;
	class Ruins: HouseBase {};

	#include "CfgVehicles\DZE\Doors.hpp"

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


	class VIL_asistvan;
	class VIL_asistvan_DZE: VIL_asistvan 
	{
		transportrepair = 0;
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

	// UH1Y
	class UH1_Base: Helicopter 
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics: ViewOptics {};
				class Turrets: Turrets {};
			};
			class RightDoorGun: MainTurret
			{
				class Turrets: Turrets {};
			};
			class CoPilotObs: MainTurret
			{
				class Turrets: Turrets {};
			};
			
		};
	};
	class UH1Y_DZ: UH1_Base
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
		weapons[] = {}; 
		magazines[] = {}; 
		
		class Turrets : Turrets 
		{
			class MainTurret : MainTurret 
			{
				magazines[] = {"2000Rnd_762x51_M134"};
			};
			class RightDoorGun : RightDoorGun
			{
				magazines[] = {"2000Rnd_762x51_M134"};
			};
		};
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
	class UH60M_EP1;
	class UH60M_EP1_DZ : UH60M_EP1
	{
		scope = 2; 
		crew = ""; 
		commanderCanSee = 2+16+32;
		gunnerCanSee = 2+16+32;
		driverCanSee = 2+16+32;
	};
	class MV22;
	class MV22_DZ : MV22 { 
		accuracy = 1000; 
		scope = 2; 
		displayName = "MV-22"; 
		crew = ""; 
		typicalCargo[] = {}; 
		commanderCanSee = 2+16+32;
		gunnerCanSee = 2+16+32;
		driverCanSee = 2+16+32;
		transportMaxWeapons = 20;
		transportMaxMagazines = 400;
        transportmaxbackpacks = 10;
	};

	class ArmoredSUV_PMC;
	class ArmoredSUV_PMC_DZ : ArmoredSUV_PMC { 
		scope = 2; 
		side = 2; 
		faction = "PMC_BAF";
		enableGPS = 1;
		crew = ""; 
		typicalCargo[] = {}; 
		transportMaxWeapons = 20; 
		transportMaxMagazines = 400; 
		transportmaxbackpacks = 10;
	};
	class SUV_TK_CIV_EP1;
	class SUV_Camo: SUV_TK_CIV_EP1
	{
		displayName = "SUV Camo";
		hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\camo10.paa"};
		transportMaxWeapons = 10; 
		transportMaxMagazines = 100; 
		transportmaxbackpacks = 5;
		armor = 50;
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
		transportMaxMagazines = 120;
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

	// new bandits
	class GUE_Soldier_MG;
	class GUE_Soldier_MG_DZ: GUE_Soldier_MG {
		displayName = "Bandit Gunner";
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
	class GUE_Soldier_Sniper;
	class GUE_Soldier_Sniper_DZ: GUE_Soldier_Sniper {
		displayName = "Bandit Sniper";
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
	class GUE_Soldier_Crew;
	class GUE_Soldier_Crew_DZ: GUE_Soldier_Crew {
		displayName = "Bandit ";
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
	class GUE_Soldier_CO;
	class GUE_Soldier_CO_DZ: GUE_Soldier_CO {
		displayName = "Bandit Gunner";
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
	class GUE_Soldier_2;
	class GUE_Soldier_2_DZ: GUE_Soldier_2 {
		displayName = "Bandit Gunner";
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
	class Rocker1;
	class Rocker1_DZ: Rocker1 {
		displayName = "Rocker (black)";
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
		displayName = "Rocker (brown)";
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
	class Rocker3;
	class Rocker3_DZ: Rocker3 {
		displayName = "Rocker (blue)";
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
	class Rocker4;
	class Rocker4_DZ: Rocker4 {
		displayName = "Rocker (green)";
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
		displayName = "Desert Ghillie";
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

	#include "CfgVehicles\Bags.hpp"
	
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
	class Mass_grave;
	class Mass_grave_DZ: Mass_grave
	{
		displayName = "Mass Grave W/ Zombies";
	};

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
	};
	// lingor
	class Land_fuelstation : Strategic { 
		model = "\ibr\ibr_plants\fuelstation";
		transportFuel = 0; 
		nameSound = "fuelstation"; 
	};
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
	// Panthera
	class Land_benzina_schnell: Strategic
	{
		model = "\ibr\ibr_plants\benzina_schnell"; 
		transportFuel = 0; 
		nameSound = "fuelstation";
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
	
	// Vehicle Upgrades

	// Performance 1
	class Offroad_DSHKM_Gue;
	class Offroad_DSHKM_Gue_DZE1: Offroad_DSHKM_Gue
	{
		maxspeed = 110;
	};
	// Armmor 2
	class Offroad_DSHKM_Gue_DZE2: Offroad_DSHKM_Gue_DZE1
	{
		armor = 100;
	};
	// Cargo 3
	class Offroad_DSHKM_Gue_DZE3: Offroad_DSHKM_Gue_DZE2
	{
		transportMaxWeapons = 10;
		transportMaxMagazines = 200;
        transportmaxbackpacks = 5;
	};
	// Fuel 4
	class Offroad_DSHKM_Gue_DZE4: Offroad_DSHKM_Gue_DZE3
	{
		fuelCapacity = 210;
	};
	
	//class NonStrategic;
	class BuiltItems: NonStrategic{};
	class ModularItems: NonStrategic{
	
		class DestructionEffects {
			class Sound {
				simulation = "sound";
				type = "DestrHouse";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 0.05;
			};

			class DestroyPhase1 {
				simulation = "destroy";
				type = "DelayedDestruction";
				lifeTime = 2.5;
				position = "";
				intensity = 1;
				interval = 1;
			};

			class DamageAround1 {
				simulation = "damageAround";
				type = "DamageAroundHouse";
				position = "";
				intensity = 0.1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class TrapItems: NonStrategic{};
	// buildables
	class Hedgehog_DZ: BuiltItems
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0.5};
		model = "\ca\misc\jezek_kov";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 400;
		displayName = "Hedgehog (Steel)";
		vehicleClass = "Fortifications";
		constructioncount = 3;
		removeoutput[] = {{"ItemTankTrap",1}};
	};
	// WorkBench_DZ
	class WorkBench_DZ: BuiltItems
	{
		scope = 2;
		destrType = "DestructTree";
		cost = 100;
		offset[] = {0,1.5,0.5};
		model = "\z\addons\dayz_epoch\models\workbench.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 400;
		displayName = "Workbench";
		vehicleClass = "Fortifications";
		maintainBuilding[] = {{"PartWoodLumber",1}};
		constructioncount = 1;
		removeoutput[] = {{"PartWoodPlywood",1},{"PartWoodLumber",2}};
	};

	// belt buckle
	class Helper_Base_EP1;
	class BeltBuckle_DZE : Helper_Base_EP1 { 
		scope = 2; 
		model = "\z\addons\dayz_epoch\models\skull.p3d"; 
		displayName = "Belt Buckle"; 
		accuracy = 1000; 
		hiddenSelections[] = {"camo1"}; 
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,0.5,0.5,0.5,ca)"};
	};

	// Metal Panel
	class MetalPanel_DZ: BuiltItems
	{
		scope = 2;
		destrType = "DestructTree";
		cost = 100;
		offset[] = {0,2.5,0.5};
		model = "\ca\structures\wall\wall_indcnc2_3.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 1000;
		displayName = "Metal Panel";
		vehicleClass = "Fortifications";
		constructioncount = 6;
		removeoutput[] = {{"metal_panel_kit",1}};
	};
	class Generator_DZ: BuiltItems
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0};
		model = "\dayz_equip\models\generator.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 400;
		displayName = "Generator";
		vehicleClass = "Fortifications";
		constructioncount = 1;
		removeoutput[] = {{"ItemGenerator",1}};
	};
	class FuelPump_DZ: BuiltItems
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,2,0};
		model = "\ca\Structures_E\Ind\Ind_FuelStation\Ind_FuelStation_Feed_ep1.p3d"; 
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 400;
		displayName = "Fuel Pump";
		vehicleClass = "Fortifications";
		constructioncount = 2;
		removeoutput[] = {{"ItemFuelPump",1}};
	};

	class Fort_RazorWire : BuiltItems { 
	  scope = 2; 
	  animated = 0; 
	  vehicleClass = "Fortifications"; 
	  model = "\ca\misc\Fort_Razorwire"; 
	  icon = "\Ca\misc\data\icons\I_drutkolczasty_CA.paa"; 
	  offset[] = {0,1.5,0.5};
	  accuracy = 0.3; 
	  mapSize = 5.5; 
	  displayName = "Wire"; 
	  destrType = "DestructTent"; 
	  armor = 100; 
	  GhostPreview = "Fort_RazorWirePreview"; 
	};

	class Sandbag1_DZ: BuiltItems
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		model = "\ca\misc2\BagFenceLong.p3d";
		icon = "\Ca\misc3\data\Icons\icon_fortBagFenceLong_ca.paa";
		offset[] = {0,1.5,0.5};
		mapSize = 2;
		armor = 400;
		displayName = "Bag Fence";
		vehicleClass = "Fortifications";
		constructioncount = 3;
		removeoutput[] = {{"ItemSandbag",1}};
	};

	class Land_HBarrier1_DZ : BuiltItems { 
		scope = 2; 
		animated = 0; 
		vehicleClass = "Fortifications"; 
		typicalCargo[] = {}; 
		offset[] = {0,2,0};
		irTarget = 0; 
		accuracy = 0.3; 
		transportAmmo = 0; 
		transportRepair = 0; 
		transportFuel = 0; 
		destrType = "DestructBuilding"; 
		armor = 500; 
		coefInside = 0.5; 
		coefInsideHeur = 0.8; 
		cost = 0; 
		picture = "\CA\ui\data\icon_wf_barriers_ca.paa"; 
		model = "\ca\misc2\HBarrier1.p3d"; 
		icon = "\Ca\misc2\data\Icons\icon_hescoBarrier1_ca.paa"; 
		mapSize = 2; 
		displayName = "H-barrier cube"; 
		GhostPreview = "Land_HBarrier1Preview"; 
		constructioncount = 4;
		removeoutput[] = {{"ItemSandbagLarge",1}};
	};
	class Land_HBarrier3_DZ : BuiltItems { 
		model = "\ca\misc2\HBarrier3.p3d"; 
		icon = "\Ca\misc2\data\Icons\icon_hescoBarrier3_ca.paa"; 
		mapSize = 3.5; 
		displayName = "H-barrier (short)"; 
		GhostPreview = "Land_HBarrier3ePreview"; 
		scope = 2; 
		animated = 0; 
		vehicleClass = "Fortifications"; 
		typicalCargo[] = {}; 
		irTarget = 0; 
		accuracy = 0.3; 
		transportAmmo = 0; 
		transportRepair = 0; 
		transportFuel = 0; 
		destrType = "DestructBuilding"; 
		armor = 500; 
		coefInside = 0.5; 
		coefInsideHeur = 0.8; 
		cost = 0; 
		picture = "\CA\ui\data\icon_wf_barriers_ca.paa";
		offset[] = {0,2.5,0};
		constructioncount = 8;
		removeoutput[] = {{"ItemSandbagExLarge",1}};
	};
		
	class SandNest_DZ : BuiltItems { 
		scope = 2; 
		model = "\ca\Misc_E\fortified_nest_small_ep1"; 
		displayName = "Sandbag Nest";
		expansion = 1; 
		icon = "\Ca\misc3\data\Icons\icon_fortNestSmall_ca.paa"; 
		mapSize = 5; 
		armor = 500; 
		irTarget = 0; 
		vehicleClass = "Fortifications"; 
		GhostPreview = "Land_fortified_nest_smallPreview"; 
		animated = 0; 
		simulation = "house"; 
		accuracy = 0.2; 
		cost = 0; 
		ladders[] = {}; 
		TextPlural = "Houses"; 
		TextSingular = "House"; 
		nameSound = "obj_house"; 
		offset[] = {0,3,1};
		removeoutput[] = {{"sandbag_nest_kit",1}};
	};

	// modular
	class MetalFloor_DZ: ModularItems
	{
		scope = 2;
		destrType = "DestructBuilding";
		cost = 100;
		offset[] = {0,4,0};
		model="\z\addons\dayz_epoch\models\metal_floor.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 1600;
		displayName = "Metal Floor";
		vehicleClass = "Fortifications";
		GhostPreview = "MetalFloor_Preview_DZ";
	};
	class CinderWallHalf_DZ: ModularItems
	{
		scope = 2;
		destrType = "DestructBuilding";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\cinder_wall_half.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 1600;
		displayName = "Half Cinder Block Wall";
		vehicleClass = "Fortifications";
		upgradeBuilding[] = {"CinderWall_DZ",{{"CinderBlocks",4},{"MortarBucket",1}}};
		maintainBuilding[] = {{"MortarBucket",1}};
		GhostPreview = "CinderWallHalf_Preview_DZ";
	};
	class CinderWall_DZ: ModularItems
	{
		scope = 2;
		destrType = "DestructBuilding";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\cinder_wall_full.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 1600;
		displayName = "Cinder Block Wall";
		vehicleClass = "Fortifications";
		maintainBuilding[] = {{"MortarBucket",1}};
		GhostPreview = "CinderWall_Preview_DZ";
	};

	class CinderWallDoorway_DZ: ModularItems
	{
		scope = 2;
		destrType = "DestructBuilding";
		cost = 100;
		offset[] = {0,2,0};
		model="\z\addons\dayz_epoch\models\steel_garage_frame.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 1600;
		displayName = "Block Garage Doorway";
		vehicleClass = "Fortifications";
		maintainBuilding[] = {{"MortarBucket",1}};
		upgradeBuilding[] = {"CinderWallDoor_DZ",{{"ItemPole",3},{"ItemTankTrap",3}}};
		GhostPreview = "CinderWallDoorway_Preview_DZ";
	};	
	
	class CinderWallSmallDoorway_DZ: ModularItems
	{
		scope = 2;
		destrType = "DestructBuilding";
		cost = 100;
		offset[] = {0,2,0};
		model="\z\addons\dayz_epoch\models\Steel_door_frame.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 1600;
		displayName = "Block Doorway";
		vehicleClass = "Fortifications";
		maintainBuilding[] = {{"MortarBucket",1}};
		upgradeBuilding[] = {"CinderWallDoorSmall_DZ",{{"ItemPole",1},{"ItemTankTrap",1}}};
		GhostPreview = "CinderWallSmallDoorway_Preview_DZ"; // todo change this
	};	

	class WoodFloor_DZ: ModularItems
	{
		scope = 2;
		destrType = "DestructBuilding";
		cost = 100;
		offset[] = {0,4,0};
		model="\z\addons\dayz_epoch\models\Wood_Floor.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 200;
		displayName = "Wood Floor";
		vehicleClass = "Fortifications";
		maintainBuilding[] = {{"PartWoodLumber",4}};
		GhostPreview = "WoodFloor_Preview_DZ";
	};
	class WoodFloorHalf_DZ: ModularItems
	{
		scope = 2;
		destrType = "DestructBuilding";
		cost = 100;
		offset[] = {0,4,0};
		model="\z\addons\dayz_epoch\models\half_floor.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 200;
		displayName = "Wood Floor 1/2";
		vehicleClass = "Fortifications";
		maintainBuilding[] = {{"PartWoodLumber",2}};
		constructioncount = 2;
		GhostPreview = "WoodFloorHalf_Preview_DZ";
	};
	class WoodFloorQuarter_DZ: ModularItems
	{
		scope = 2;
		destrType = "DestructBuilding";
		cost = 100;
		offset[] = {0,4,0};
		model="\z\addons\dayz_epoch\models\quarter_floor.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 200;
		displayName = "Wood Floor 1/4";
		vehicleClass = "Fortifications";
		maintainBuilding[] = {{"PartWoodLumber",1}};
		constructioncount = 1;
		GhostPreview = "WoodFloorQuarter_Preview_DZ";
	};

	class WoodLargeWall_DZ: ModularItems
	{
		scope = 2;
		destrType = "DestructBuilding";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\large_wall.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 200;
		displayName = "Large Wall";
		vehicleClass = "Fortifications";
		upgradeBuilding[] = {"WoodLargeWallWin_DZ",{{"PartGlass",1}}};
		maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
		GhostPreview = "WoodLargeWall_Preview_DZ"; 
	};
	
	class WoodLargeWallDoor_DZ: ModularItems
	{
		scope = 2;
		destrType = "DestructBuilding";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\large_wall_door.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 200;
		displayName = "Large Wall Doorway";
		vehicleClass = "Fortifications";
		maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
		upgradeBuilding[] = {"Land_DZE_LargeWoodDoor",{{"PartWoodPlywood",1},{"PartWoodLumber",1}}};
		GhostPreview = "WoodLargeWallDoor_Preview_DZ"; 
	};
	class WoodLargeWallWin_DZ: ModularItems
	{
		scope = 2;
		destrType = "DestructBuilding";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\large_wall_win.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 200;
		displayName = "Large Wall Window";
		vehicleClass = "Fortifications";
		maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
		GhostPreview = "WoodLargeWallWin_Preview_DZ"; 
	};
	
	class WoodSmallWall_DZ: ModularItems
	{
		scope = 2;
		destrType = "DestructBuilding";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\small_wall.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 200;
		displayName = "Small Wall";
		vehicleClass = "Fortifications";
		maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
		upgradeBuilding[] = {"WoodSmallWallWin_DZ",{{"PartGlass",1}}};
		GhostPreview = "WoodSmallWall_Preview_DZ"; 
	};
	class WoodSmallWallThird_DZ: ModularItems
	{
		scope = 2;
		destrType = "DestructBuilding";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\third_wall.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 200;
		displayName = "Wood Wall 1/3";
		vehicleClass = "Fortifications";
		maintainBuilding[] = {{"PartWoodLumber",1}};
		constructioncount = 1;
		GhostPreview = "WoodSmallWallThird_Preview_DZ"; 
	};

	class WoodSmallWallWin_DZ: ModularItems
	{
		scope = 2;
		destrType = "DestructBuilding";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\small_wall_win.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 200;
		displayName = "Small Wall Window";
		vehicleClass = "Fortifications";
		maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
		GhostPreview = "WoodSmallWallWin_Preview_DZ"; 
	};
	class WoodSmallWallDoor_DZ: ModularItems
	{
		scope = 2;
		destrType = "DestructBuilding";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\small_wall_door.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 200;
		displayName = "Small Wall Door";
		vehicleClass = "Fortifications";
		upgradeBuilding[] = {"Land_DZE_WoodDoor",{{"PartWoodPlywood",1},{"PartWoodLumber",1}}};
		maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
		GhostPreview = "WoodSmallWallDoor_Preview_DZ"; 
	};
	class WoodStairs_DZ: ModularItems
	{
		scope = 2;
		destrType = "DestructBuilding";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\wood_stairs.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 200;
		displayName = "Wood Stairs";
		vehicleClass = "Fortifications";
		maintainBuilding[] = {{"PartWoodLumber",1}};
		GhostPreview = "WoodStairs_Preview_DZ"; 
	};	
	class WoodLadder_DZ: ModularItems
	{
		scope = 2;
		destrType = "DestructBuilding";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\wood_ladder.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 50;
		displayName = "Wood Ladder";
		vehicleClass = "Fortifications";
		maintainBuilding[] = {{"PartWoodLumber",1}};
		GhostPreview = "WoodLadder_Preview_DZ"; 
		ladders[] = {{"start1","end1"}};
	};
	
	class WoodStairsSans_DZ: ModularItems
	{
		scope = 2;
		destrType = "DestructBuilding";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\wood_stairs_sans.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 200;
		displayName = "Wood Stairs Sans";
		vehicleClass = "Fortifications";
		maintainBuilding[] = {{"PartWoodLumber",1}};
		upgradeBuilding[] = {"WoodStairs_DZ",{{"PartWoodLumber",2}}};
		GhostPreview = "WoodStairsSans_Preview_DZ"; 
	};

	// ghost models
	class CinderWallSmallDoorway_Preview_DZ: NonStrategic
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\steel_garage_frame_ghost.p3d"; // todo change this 
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 1000;
		displayName = "Block Garage Doorway";
		vehicleClass = "Fortifications";
	};
	class CinderWallDoorway_Preview_DZ: NonStrategic
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\steel_garage_frame_ghost.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 1000;
		displayName = "Block Garage Doorway";
		vehicleClass = "Fortifications";
	};
	class MetalFloor_Preview_DZ: NonStrategic
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\metal_floor_ghost.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 1000;
		displayName = "Metal Floor Preview";
		vehicleClass = "Fortifications";
	};
	class CinderWallHalf_Preview_DZ: NonStrategic
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\cinder_wall_half_ghost.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 1000;
		displayName = "Cinder Block Wall 1/2";
		vehicleClass = "Fortifications";
	};
	class CinderWall_Preview_DZ: NonStrategic
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\cinder_wall_full_ghost.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 1000;
		displayName = "Cinder Block Wall";
		vehicleClass = "Fortifications";
	};


	class WoodFloorQuarter_Preview_DZ: NonStrategic
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\quarter_floor_ghost.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 1000;
		displayName = "Floor 1/4 Preview";
		vehicleClass = "Fortifications";
	};
	class WoodFloorHalf_Preview_DZ: NonStrategic
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\half_floor_ghost.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 1000;
		displayName = "Floor 1/2 Preview";
		vehicleClass = "Fortifications";
	};
	class WoodSmallWall_Preview_DZ: NonStrategic
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\small_wall_ghost.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 1000;
		displayName = "Small Wall Preview";
		vehicleClass = "Fortifications";
	};
	class WoodSmallWallThird_Preview_DZ: NonStrategic
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\third_wall_ghost.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 1000;
		displayName = "Small Wall Preview 1/3";
		vehicleClass = "Fortifications";
	};
	class WoodSmallWallWin_Preview_DZ: NonStrategic
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\small_wall_win_ghost.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 1000;
		displayName = "Small Wall Window Preview";
		vehicleClass = "Fortifications";
	};
	class WoodFloor_Preview_DZ: NonStrategic
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\Wood_Floor_ghost.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 1000;
		displayName = "Wood Floor Preview";
		vehicleClass = "Fortifications";
	};
	class WoodSmallWallDoor_Preview_DZ: NonStrategic
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\small_wall_door_ghost.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 1000;
		displayName = "Small Wall Door Preview";
		vehicleClass = "Fortifications";
	};
	class WoodLargeWall_Preview_DZ: NonStrategic
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\large_wall_ghost.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 1000;
		displayName = "Large Wall Preview";
		vehicleClass = "Fortifications";
	};
	class WoodLargeWallDoor_Preview_DZ: NonStrategic
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\large_wall_door_ghost.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 1000;
		displayName = "Large Wall Door Preview";
		vehicleClass = "Fortifications";
	};
	class WoodLargeWallWin_Preview_DZ: NonStrategic
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\large_wall_win_ghost.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 1000;
		displayName = "Large Wall Window Preview";
		vehicleClass = "Fortifications";
	};
	
	class WoodStairs_Preview_DZ: NonStrategic
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\wood_stairs_ghost.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 1000;
		displayName = "Wood Stairs Preview";
		vehicleClass = "Fortifications";
	};
	class WoodStairsSans_Preview_DZ: NonStrategic
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\wood_stairs_sans_ghost.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 1000;
		displayName = "Wood Stairs Sans Preview";
		vehicleClass = "Fortifications";
	};

	class WoodLadder_Preview_DZ: NonStrategic
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\wood_ladder_ghost.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 1000;
		displayName = "Wood Stairs Sans Preview";
		vehicleClass = "Fortifications";
	};
	class WoodDoor_Preview_DZ: NonStrategic
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\small_wall_door_anim_ghost.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 1000;
		displayName = "Door Preview";
		vehicleClass = "Fortifications";
	};
	class LargeWoodDoor_Preview_DZ: NonStrategic
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\large_wall_door_anim_ghost.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 1000;
		displayName = "Large Door Preview";
		vehicleClass = "Fortifications";
	};
	class GarageWoodDoor_Preview_DZ: NonStrategic
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0};
		model="\z\addons\dayz_epoch\models\Garage_door_anim_ghost.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 1000;
		displayName = "Garage Door Preview";
		vehicleClass = "Fortifications";
	};
	
	// PLAYER BUILDINGS
	// class Plastic_Pole_EP1;
	class Sign_1L_Noentry_EP1;
	class Plastic_Pole_EP1_DZ: Sign_1L_Noentry_EP1
	{
		scope = 2;
		// destrType = "DestructNo"; 
		offset[] = {0,2.5,0};
		displayName = "30m Plot Pole";
		vehicleClass = "Fortifications";
		removeoutput[] = {{"30m_plot_kit",1}};
	};
	class USMC_WarfareBMGNest_M240;
	class M240Nest_DZ: USMC_WarfareBMGNest_M240
	{
		destrType = "DestructBuilding"; 
		armor = 450;
		scope = 2;
		offset[] = {0,3.5,0};
		displayName = "M240 Nest";
		vehicleClass = "Fortifications";
		transportMaxMagazines = 25;
		transportMaxWeapons = 4;
		transportMaxBackpacks = 1;
		constructioncount = 10;
		removeoutput[] = {{"m240_nest_kit",1}};
		
	};
	class Land_covering_hut_EP1;
	class CanvasHut_DZ: Land_covering_hut_EP1
	{
		armor = 200;
		scope = 2;
		offset[] = {0,2.5,1};
		displayName = "Canvas Hut";
		vehicleClass = "Fortifications";
	};
	class Park_bench1;
	class ParkBench_DZ: Park_bench1
	{
		scope = 2;
		offset[] = {0,1.5,0.5};
		displayName = "Wood Bench";
		vehicleClass = "Fortifications";
		removeoutput[] = {{"park_bench_kit",1}};
	};
	class Land_CamoNet_EAST_EP1;
	class DesertCamoNet_DZ: Land_CamoNet_EAST_EP1
	{
		armor = 300;
		destrType = "DestructNo";
		scope = 2;
		offset[] = {0,5,0};
		displayName = "Desert Camo Net";
		vehicleClass = "Fortifications";
		removeoutput[] = {{"desert_net_kit",1}};
	};
	class Land_CamoNet_EAST;
	class ForestCamoNet_DZ: Land_CamoNet_EAST
	{
		armor = 300;
		destrType = "DestructNo";
		scope = 2;
		offset[] = {0,5,0};
		displayName = "Forest Camo Net";
		vehicleClass = "Fortifications";
		removeoutput[] = {{"forest_net_kit",1}};
	};
	class Land_CamoNetB_EAST_EP1;
	class DesertLargeCamoNet_DZ: Land_CamoNetB_EAST_EP1
	{
		armor = 300;
		destrType = "DestructNo";
		scope = 2;
		offset[] = {0,9,0};
		displayName = "Large Desert Camo Net";
		vehicleClass = "Fortifications";
		removeoutput[] = {{"desert_large_net_kit",1}};
	};
	class Land_Misc_deerstand;
	class DeerStand_DZ: Land_Misc_deerstand
	{
		armor = 300;
		// destrType = "DestructNo";
		scope = 2;
		offset[] = {0,5,0};
		displayName = "Deer Stand";
		vehicleClass = "Fortifications";
		removeoutput[] = {{"deer_stand_kit",1}};
	};
	class Land_CamoNetB_EAST;
	class ForestLargeCamoNet_DZ: Land_CamoNetB_EAST
	{
		armor = 300;
		destrType = "DestructNo";
		scope = 2;
		offset[] = {0,9,0};
		displayName = "Large Forest Camo Net";
		vehicleClass = "Fortifications";
		removeoutput[] = {{"forest_large_net_kit",1}};
	};

	class Land_Wall_Gate_Ind1_L;
	class MetalGate_DZ: Land_Wall_Gate_Ind1_L
	{
		armor = 400;
		scope = 2;
		offset[] = {0,2.5,1};
		displayName = "Rusty Gate";
		vehicleClass = "Fortifications";
		removeoutput[] = {{"rusty_gate_kit",1}};
	};
	class Land_KBud;
	class OutHouse_DZ: Land_KBud
	{
		armor = 200;
		scope = 2;
		offset[] = {0,2.5,1};
		displayName = "Outhouse";
		vehicleClass = "Fortifications";
		transportMaxMagazines = 4;
		transportMaxWeapons = 4;
		transportMaxBackpacks = 4;
		constructioncount = 2;
		class transportmagazines
		{
			class _xx_ItemTrashToiletpaper
			{
				magazine = "ItemTrashToiletpaper";
				count = 1;
			};
		};
	};
	class Land_Shed_M01;
	class StorageShed_DZ: Land_Shed_M01
	{
		armor = 800;
		scope = 2;
		offset[] = {0,2.5,1};
		displayName = "Storage Shed";
		vehicleClass = "Fortifications";
		transportMaxMagazines = 400;
		transportMaxWeapons = 40;
		transportMaxBackpacks = 20;
		constructioncount = 6;
	};
	class Fence_corrugated_plate;
	class Fence_corrugated_DZ: Fence_corrugated_plate
	{
		armor = 300;
		scope = 2;
		offset[] = {0,2.5,1};
		removeoutput[] = {{"ItemCorrugated",1}};
		displayName = "Corrugated Fence";
		vehicleClass = "Fortifications";
		
	};
	class Land_kulna;
	class WoodShack_DZ: Land_kulna
	{
		scope = 2;
		destrType = "DestructBuilding"; 
		offset[] = {0,2.5,1.3};
		armor = 400;
		displayName = "Wooden Shack";
		vehicleClass = "Fortifications";
		transportMaxMagazines = 100;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 5;
		constructioncount = 5;
	};
	class Land_Shed_wooden;
	class Wooden_shed_DZ: Land_Shed_wooden
	{
		scope = 2;
		destrType = "DestructBuilding"; 
		//cost = 100;
		offset[] = {0,2.5,1};
		armor = 400;
		displayName = "Wooden Shed";
		vehicleClass = "Fortifications";
		transportMaxMagazines = 200;
		transportMaxWeapons = 20;
		transportMaxBackpacks = 10;
	};
	
	class Wall_FenW2_6_EP1;
	class StickFence_DZ: Wall_FenW2_6_EP1
	{
		destrType = "DestructTree"; 
		armor = 200;
		scope = 2;
		offset[] = {0,2.5,0};
		displayName = "Stick Fence";
		vehicleClass = "Fortifications";
	};
	class ASC_EU_LHVOld;
	class LightPole_DZ: ASC_EU_LHVOld
	{
		armor = 200;
		scope = 2;
		offset[] = {0,2.5,0};
		displayName = "Light Pole";
		vehicleClass = "Fortifications";
	};
	class WoodGate_DZ: BuiltItems
	{
		scope = 2;
		destrType = "DestructTree"; 
		//cost = 100;
		offset[] = {0,1.5,0.5};
		model = "\ca\structures\Wall\Gate_wood2_5";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 100;
		displayName = "Wood Panel";
		vehicleClass = "Fortifications";
		
		class AnimationSources
		{
			class DoorR { 
			  source = "User"; 
			  animPeriod = 1; 
			  initPhase = 0; 
			};
		};
		class UserActions
		{
			class CloseDoor
			{
				position = "";
				displayName = "Close Door";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "this animationPhase 'DoorR' == 1";
				statement = "this animate ['DoorR', 0];";
			};
			class OpenDoor
			{
				position = "";
				displayName = "Open Door";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "this animationPhase 'DoorR' == 0";
				statement = "this animate ['DoorR', 1];";
			};
		};
	};

	class ReammoBox;
	class WeaponHolderBase: ReammoBox
	{
		scope = 0;
		accuracy = 1000;
		vehicleClass = "Survival";
		displayName = "Weapon";
		memoryPointSupply = "collect";
		supplyRadius = 3;
		transportMaxWeapons = 0;
		transportMaxMagazines = 0;
		transportMaxBackpacks = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
	};
	class WeaponHolder_ItemMachete: WeaponHolderBase
	{
		scope = 2;
		displayName = "Machete";
		model="\z\addons\dayz_communityassets\models\machete.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgWeapons','ItemMachete'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_MeleeCrowbar: WeaponHolderBase
	{
		scope = 2;
		displayName = "Crowbar";
		model = "\dayz_equip\models\crowbar.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgWeapons','ItemCrowbar'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};

	class WeaponHolder;

	class WeaponHolder_ItemTentOld: WeaponHolder
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_20";
		class transportmagazines
		{
			class _xx_ItemTentDomed2
			{
				magazine = "ItemTentOld";
				count = 1;
			};
		};
	};
	class WeaponHolder_ItemTentDomed: WeaponHolder
	{
		scope = 2;
		displayName = "Domed Desert Tent";
		class transportmagazines
		{
			class _xx_ItemTentDomed2
			{
				magazine = "ItemTentDomed";
				count = 1;
			};
		};
	};
	class WeaponHolder_ItemTentDomed2: WeaponHolder
	{
		scope = 2;
		displayName = "Domed Green Tent";
		class transportmagazines
		{
			class _xx_ItemTentDomed2
			{
				magazine = "ItemTentDomed2";
				count = 1;
			};
		};
	};	
	
	class WeaponHolder_ItemVault: WeaponHolder
	{
		scope = 2;
		displayName = "Safe";
		class transportmagazines
		{
			class _xx_ItemVault
			{
				magazine = "ItemVault";
				count = 1;
			};
		};
	};
	class WeaponHolder_ItemLockbox: WeaponHolder
	{
		scope = 2;
		displayName = "Lockbox";
		class transportmagazines
		{
			class _xx_ItemLockbox
			{
				magazine = "ItemLockbox";
				count = 1;
			};
		};
	};
	class WeaponHolder_ItemJerrycanEmpty: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_39";
		model = "\dayz_equip\proxy\jerrycan.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','ItemJerrycanEmpty'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	
	class Land_A_tent;
	class ACamp;
	class TentStorage: Land_A_tent
	{
		vehicleClass = "Survival";
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 5;
		create = "WeaponHolder_ItemTentOld";
		constructioncount = 1;
		offset[] = {0,2.5,0};
	};
	class TentStorageDomed: TentStorage
	{
		displayName = "Digital Camo Tent";
		vehicleClass = "Survival";
		model = "\dayz_epoch_b\models\astan.p3d";
		transportMaxMagazines = 75;
		transportMaxWeapons = 12;
		transportMaxBackpacks = 7;
		create = "WeaponHolder_ItemTentDomed";
		offset[] = {0,2.5,0};
	};
	class TentStorageDomed2: TentStorage
	{
		displayName = "Green Domed Tent";
		vehicleClass = "Survival";
		model = "\ca\Misc_E\Astan_ep1.p3d"; 
		transportMaxMagazines = 75;
		transportMaxWeapons = 12;
		transportMaxBackpacks = 7;
		create = "WeaponHolder_ItemTentDomed2";
		offset[] = {0,2.5,0};
	};
	class VaultStorage: Land_A_tent
	{
		vehicleClass = "Survival";
		displayName = "Safe";
		model = "\z\addons\dayz_epoch\models\safe.p3d";
		destrType = "DestructNo";
		armor = 800;
		transportMaxMagazines = 200;
		transportMaxWeapons = 20;
		transportMaxBackpacks = 10;
		lockedClass = "VaultStorageLocked";
		packedClass = "WeaponHolder_ItemVault";
	};	
	class VaultStorageLocked: Land_A_tent
	{
		vehicleClass = "Survival";
		displayName = "Locked Safe";
		model = "\z\addons\dayz_epoch\models\safe.p3d";
		destrType = "DestructNo";
		armor = 800;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
		offset[] = {0,1.5,0.5};
		lockable = 4;
		unlockedClass = "VaultStorage";
	};

	class LockboxStorageLocked: Land_A_tent
	{
		vehicleClass = "Survival";
		displayName = "Locked Lockbox";
		model = "\z\addons\dayz_epoch\models\lockbox.p3d";
		destrType = "DestructNo";
		armor = 800;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
		offset[] = {0,1.5,0.5};
		lockable = 2;
		unlockedClass = "LockboxStorage";
		
	};
	class LockboxStorage: Land_A_tent
	{
		vehicleClass = "Survival";
		displayName = "Lockbox";
		model = "\z\addons\dayz_epoch\models\lockbox.p3d";
		destrType = "DestructNo";
		armor = 800;
		transportMaxMagazines = 50;
		transportMaxWeapons = 20;
		transportMaxBackpacks = 10;
		lockedClass = "LockboxStorageLocked";
		packedClass = "WeaponHolder_ItemLockbox";
	};	

	
};	