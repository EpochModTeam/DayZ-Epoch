class Ikarus;
class Ikarus_DZE: Ikarus {
	vehicleClass = "DayZ Epoch Vehicles";
	displayname = $STR_VEH_NAME_IKARUS_BLUE;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	supplyRadius = 1.8;
};

class Ikarus_TK_CIV_EP1;
class Ikarus_TK_CIV_EP1_DZE: Ikarus_TK_CIV_EP1 {
	vehicleClass = "DayZ Epoch Vehicles";
	displayname = $STR_VEH_NAME_IKARUS_RED;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	supplyRadius = 1.8;
};

class Ikarus_White_DZE: Ikarus_DZE {
	displayname = $STR_VEH_NAME_IKARUS_WHITE;
	model = "\sra_civilian\wheeled\bus\bus_city.p3d";	
	driverAction = "CityBus_Driver";
	nameSound = "bus";
	cargoAction[] = {"Truck_Cargo03","Truck_Cargo01","Truck_Cargo04","Truck_Cargo01","Truck_Cargo01","Truck_Cargo03","Truck_Cargo01","Truck_Cargo04","Truck_Cargo01","Truck_Cargo02","Truck_Cargo02","Truck_Cargo01"};
	dammageFull[] = {"\sra_civilian\wheeled\bus\bus_city_glass_ca.paa","\sra_civilian\wheeled\bus\bus_city_glassbr2_ca.paa","\sra_civilian\wheeled\bus\bus_city_glass_ca.paa","\sra_civilian\wheeled\bus\bus_city_glassbr2_ca.paa"};
	dammageHalf[] = {"\sra_civilian\wheeled\bus\bus_city_glass_ca.paa","\sra_civilian\wheeled\bus\bus_city_glassbr1_ca.paa","\sra_civilian\wheeled\bus\bus_city_glass_ca.paa","\sra_civilian\wheeled\bus\bus_city_glassbr1_ca.paa"};
	maxSpeed = 80;
	
	class AnimationSources
	{
		class HitGlass1
		{
			hitpoint = "HitGlass1";
			raw = 1;
			source = "Hit";
		};
		class HitGlass2: HitGlass1
		{
			hitpoint = "HitGlass2";
		};
		class HitGlass3: HitGlass1
		{
			hitpoint = "HitGlass3";
		};
		class HitGlass4: HitGlass1
		{
			hitpoint = "HitGlass4";
		};
		class HitGlass5: HitGlass1
		{
			hitpoint = "HitGlass5";
		};
		class HitGlass6: HitGlass1
		{
			hitpoint = "HitGlass6";
		};
		class HitGlass7: HitGlass1
		{
			hitpoint = "HitGlass7";
		};
		class HitGlass8: HitGlass1
		{
			hitpoint = "HitGlass8";
		};
		class HitGlass9: HitGlass1
		{
			hitpoint = "HitGlass9";
		};
		class HitGlass10: HitGlass1
		{
			hitpoint = "HitGlass10";
		};
		class HitGlass11: HitGlass1
		{
			hitpoint = "HitGlass11";
		};
		class HitGlass12: HitGlass1
		{
			hitpoint = "HitGlass12";
		};
		class HitLFWheel
		{
			hitpoint = "HitLFWheel";
			raw = 1;
			source = "Hit";
		};
		class HitRFWheel: HitLFWheel
		{
			hitpoint = "HitRFWheel";
		};
		class HitLBWheel: HitLFWheel
		{
			hitpoint = "HitLBWheel";
		};
		class HitRBWheel: HitLFWheel
		{
			hitpoint = "HitRBWheel";
		};
		class HitLF2Wheel: HitLFWheel
		{
			hitpoint = "HitLF2Wheel";
		};
		class HitRF2Wheel: HitLFWheel
		{
			hitpoint = "HitRF2Wheel";
		};
		class HitLMWheel: HitLFWheel
		{
			hitpoint = "HitLMWheel";
		};
		class HitRMWheel: HitLFWheel
		{
			hitpoint = "HitRMWheel";
		};			
	};	
	class Damage
	{
		tex[] = {};
		mat[] = {"sra_civilian\wheeled\bus\detailmapy\bus_city_ext.rvmat","sra_civilian\wheeled\bus\detailmapy\bus_city_ext.rvmat","sra_civilian\wheeled\bus\detailmapy\bus_city_ext_destruct.rvmat","sra_civilian\wheeled\bus\detailmapy\bus_city_int.rvmat","sra_civilian\wheeled\bus\detailmapy\bus_city_int.rvmat","sra_civilian\wheeled\bus\detailmapy\bus_city_int_destruct.rvmat","sra_civilian\wheeled\data\auta_skla.rvmat","sra_civilian\wheeled\data\auta_skla_damage.rvmat","sra_civilian\wheeled\data\auta_skla_damage.rvmat","sra_civilian\wheeled\data\auta_skla_in.rvmat","sra_civilian\wheeled\data\auta_skla_in_damage.rvmat","sra_civilian\wheeled\data\auta_skla_in_damage.rvmat"};
	};	
	class HitPoints
	{
		class HitGlass1
		{
			armor = 0.1;
			material = -1;
			name = "sklo_p";
			passThrough = 0;
			visual = "sklo_p";
		};
		class HitGlass2: HitGlass1
		{
			name = "sklo_p1";
			visual = "sklo_p1";
		};
		class HitGlass3: HitGlass1
		{
			name = "sklo_p2";
			visual = "sklo_p2";
		};
		class HitGlass4: HitGlass1
		{
			name = "sklo_p3";
			visual = "sklo_p3";
		};
		class HitGlass5: HitGlass1
		{
			name = "sklo_p4";
			visual = "sklo_p4";
		};
		class HitGlass6: HitGlass1
		{
			name = "sklo_p5";
			visual = "sklo_p5";
		};
		class HitGlass7: HitGlass1
		{
			name = "sklo_l1";
			visual = "sklo_l1";
		};
		class HitGlass8: HitGlass1
		{
			name = "sklo_l2";
			visual = "sklo_l2";
		};
		class HitGlass9: HitGlass1
		{
			name = "sklo_l3";
			visual = "sklo_l3";
		};
		class HitGlass10: HitGlass1
		{
			name = "sklo_l4";
			visual = "sklo_l4";
		};
		class HitGlass11: HitGlass1
		{
			name = "sklo_l5";
			visual = "sklo_l5";
		};
		class HitGlass12: HitGlass1
		{
			name = "sklo_z";
			visual = "sklo_z";
		};
		class HitRGlass: HitGlass1{};
		class HitLGlass: HitGlass1{};
		class HitBody
		{
			armor = 1;
			material = -1;
			name = "karoserie";
			passThrough = 1;
			visual = "karoserie";
		};
		class HitFuel
		{
			armor = 0.3;
			material = -1;
			name = "palivo";
			passThrough = 0.5;
			visual = "palivo";
		};
		class HitEngine
		{
			armor = 0.4;
			material = -1;
			name = "motor";
			passThrough = 0.2;
			visual = "motor";
		};
		class HitLFWheel
		{
			armor = 0.15;
			material = -1;
			name = "levy predni tlumic";
			passThrough = 0.3;
			visual = "levy predni";
		};
		class HitLBWheel: HitLFWheel
		{
			name = "levy zadni tlumic";
			visual = "levy zadni";
		};
		class HitRFWheel: HitLFWheel
		{
			name = "pravy predni tlumic";
			visual = "pravy predni";
		};
		class HitRBWheel: HitLFWheel
		{
			name = "pravy zadni tlumic";
			visual = "pravy zadni";
		};
		class HitLF2Wheel: HitLFWheel{};
		class HitRF2Wheel: HitLFWheel{};
		class HitLMWheel: HitLFWheel{};
		class HitRMWheel: HitLFWheel{};
	};	
};

class Ikarus_Armored_DZE: epoch_car
{
	scope = 2;
	model = "z\addons\dayz_epoch_v\vehicles\citybus\dze_citybus";
	picture = "\dayz_epoch_c\icons\vehicles\ArmoredBus.paa";
	displayName	= $STR_VEH_NAME_IKARUS_ARMORED;
	maxSpeed = 85;
	turnCoef = 1.2;
	armor = 100;
	transportMaxWeapons = 25;
	transportMaxMagazines = 120;
    transportmaxbackpacks = 10;		
	transportSoldier = 12;
	driverAction = CityBus_Driver;
	cargoAction[] =
	{
		Truck_Cargo03,Truck_Cargo01,Truck_Cargo04,Truck_Cargo01,Truck_Cargo01,
		Truck_Cargo03,Truck_Cargo01,Truck_Cargo04,Truck_Cargo01,Truck_Cargo02,
		Truck_Cargo02,Truck_Cargo01
	};	
	hiddenselections[] = {"camo1"};	
	hiddenselectionstextures[]= 
	{
		"z\addons\dayz_epoch_v\vehicles\citybus\data\citybus_ext_co.paa"		
	};
	class Damage
	{
		tex[]={};
		mat[]=
		{
			"z\addons\dayz_epoch_v\vehicles\citybus\data\bus_city_ext.rvmat",
			"z\addons\dayz_epoch_v\vehicles\citybus\data\bus_city_ext.rvmat",
			"z\addons\dayz_epoch_v\vehicles\citybus\data\bus_city_ext_destruct.rvmat",
			"z\addons\dayz_epoch_v\vehicles\citybus\data\bus_city_int.rvmat",
			"z\addons\dayz_epoch_v\vehicles\citybus\data\bus_city_int.rvmat",
			"z\addons\dayz_epoch_v\vehicles\citybus\data\bus_city_int_destruct.rvmat"
		};
	};
	insideSoundCoef = 0.9;
	soundGear[]={,db-85,1};
	soundGetIn[]={"ca\sounds\vehicles\Wheeled\BUS\ext\ext-bus-getout-1",db-0,1};
	soundGetOut[]={"ca\sounds\vehicles\Wheeled\BUS\ext\ext-bus-getout-1",db-0,1, 40};
	soundEngineOnInt[] = {"ca\sounds\vehicles\Wheeled\BUS\int\int-bus-start-1", db-5, 1.0};
	soundEngineOnExt[] = {"ca\sounds\vehicles\Wheeled\BUS\ext\ext-bus-start-1", db-5, 1.0, 280};
	soundEngineOffInt[] ={"ca\sounds\vehicles\Wheeled\BUS\int\int-bus-stop-1", db-5, 1.0};
	soundEngineOffExt[] ={"ca\sounds\vehicles\Wheeled\BUS\ext\ext-bus-stop-1", db-5, 1.0, 280};

	buildCrash0[]={"Ca\sounds\Vehicles\Crash\crash_building_01", db-3, 1, 200};
	buildCrash1[]={"Ca\sounds\Vehicles\Crash\crash_building_02", db-3, 1, 200};
	buildCrash2[]={"Ca\sounds\Vehicles\Crash\crash_building_03", db-3, 1, 200};
	buildCrash3[]={"Ca\sounds\Vehicles\Crash\crash_building_04", db-3, 1, 200};
	soundBuildingCrash[]={buildCrash0, 0.25, buildCrash1, 0.25, buildCrash2, 0.25, buildCrash3, 0.25};

	WoodCrash0[]={"Ca\sounds\Vehicles\Crash\crash_mix_wood_01", db-3, 1, 200};
	WoodCrash1[]={"Ca\sounds\Vehicles\Crash\crash_mix_wood_02", db-3, 1, 200};
	WoodCrash2[]={"Ca\sounds\Vehicles\Crash\crash_mix_wood_03", db-3, 1, 200};
	WoodCrash3[]={"Ca\sounds\Vehicles\Crash\crash_mix_wood_04", db-3, 1, 200};
	WoodCrash4[]={"Ca\sounds\Vehicles\Crash\crash_mix_wood_05", db-3, 1, 200};
	WoodCrash5[]={"Ca\sounds\Vehicles\Crash\crash_mix_wood_06", db-3, 1, 200};
	soundWoodCrash[]={woodCrash0, 0.166, woodCrash1, 0.166, woodCrash2, 0.166, woodCrash3, 0.166,woodCrash4, 0.166,woodCrash5, 0.166};

	ArmorCrash0[]={"Ca\sounds\Vehicles\Crash\crash_vehicle_01", db-3, 1, 200};
	ArmorCrash1[]={"Ca\sounds\Vehicles\Crash\crash_vehicle_02", db-3, 1, 200};
	ArmorCrash2[]={"Ca\sounds\Vehicles\Crash\crash_vehicle_03", db-3, 1, 200};
	ArmorCrash3[]={"Ca\sounds\Vehicles\Crash\crash_vehicle_04", db-3, 1, 200};
	soundArmorCrash[]={ArmorCrash0, 0.25, ArmorCrash1, 0.25, ArmorCrash2, 0.25, ArmorCrash3, 0.25};

	class SoundEvents
	{
		class AccelerationIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\BUS\int\int-bus-acce-1", db-5, 1.0};
			limit = "0.15";
			expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
		};
		class AccelerationOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\BUS\ext\ext-bus-acce-1", db-5, 1.0, 280};
			limit = "0.15";
			expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
		};
	};

	class Sounds
	{
	/* --------------------------------- */
	//    EXTERNAL SOUNDS BUS            */
	/* --------------------------------- */
		class Engine
		{
			sound[] =  {"\ca\sounds\Vehicles\Wheeled\BUS\ext\ext-bus-low-2", db0, 1.0, 350};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "engineOn*camPos*(thrust factor[0.7, 0.2])";
		};
		class EngineHighOut
		{
			sound[] = {"\ca\sounds\Vehicles\Wheeled\BUS\ext\ext-bus-high-4", db0, 1.0, 450};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "engineOn*camPos*(thrust factor[0.5, 0.9])";
		};
		class IdleOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\BUS\ext\ext-bus-idle-1", db-10, 1.0, 150};
			frequency = "1";
			volume = "engineOn*camPos*(rpm factor[0.4, 0])";
		};

		class TiresRockOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", db-15, 1.0, 30};
			frequency = "1";
			volume = "camPos*rock*(speed factor[2, 20])";
		};
		class TiresSandOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", db-15, 1.0, 30};
			frequency = "1";
			volume = "camPos*sand*(speed factor[2, 20])";
		};
		class TiresGrassOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3", db-15, 1.0, 30};
			frequency = "1";
			volume = "camPos*grass*(speed factor[2, 20])";
		};
		class TiresMudOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", db-15, 1.0, 30};
			frequency = "1";
			volume = "camPos*mud*(speed factor[2, 20])";
		};
		class TiresGravelOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", db-15, 1.0, 30};
			frequency = "1";
			volume = "camPos*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", db-25, 1.0, 30};
			frequency = "1";
			volume = "camPos*asphalt*(speed factor[2, 20])";
		};
		class NoiseOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\ext-noise3", db-15, 1.0, 30};
			frequency = "1";
			volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
		};
	/* --------------------------------- */
  //        INTERNAL SOUNDS BUS 	  	 */
	/* --------------------------------- */
		class EngineLowIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\BUS\int\int-bus-low-2", db-0, 1.0};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "((engineOn*thrust) factor[0.65, 0.2])*(1-camPos)";
		};
		class EngineHighIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\BUS\int\int-bus-high-4", db-0, 0.95};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "((engineOn*thrust) factor[0.55, 1.0])*(1-camPos)";
		};
		class IdleIn
		{
			sound[] = {"\ca\sounds\Vehicles\Wheeled\BUS\int\int-bus-idle-1", db-5, 1.0};
			frequency = "1";
			volume = "engineOn*(rpm factor[0.3, 0])*(1-camPos)";
		};

		class TiresRockIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", db-15, 1.0};
			frequency = "1";
			volume = "(1-camPos)*rock*(speed factor[2, 20])";
		};
		class TiresSandIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", db-15, 1.0};
			frequency = "1";
			volume = "(1-camPos)*sand*(speed factor[2, 20])";
		};
		class TiresGrassIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3", db-15, 1.0};
			frequency = "1";
			volume = "(1-camPos)*grass*(speed factor[2, 20])";
		};
		class TiresMudIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", db-15, 1.0};
			frequency = "1";
			volume = "(1-camPos)*mud*(speed factor[2, 20])";
		};
		class TiresGravelIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", db-15, 1.0};
			frequency = "1";
			volume = "(1-camPos)*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", db-20, 1.0};
			frequency = "1";
			volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
		};
		class NoiseIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\int-noise3", db-10, 1.0};
			frequency = "1";
			volume = "(damper0 max 0.04)*(speed factor[0, 8])*(1-camPos)"; //definice INSIDE zvuku
		};
		// original environment sound, suppressed now
		class Movement
		{
			sound = "soundEnviron";
			frequency = "1";
			volume = "0";
		};
	};	
};