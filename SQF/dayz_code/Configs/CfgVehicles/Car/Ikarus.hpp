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

class Ikarus_Armored_DZE: Ikarus_White_DZE
{
	model = "z\addons\dayz_epoch_v\vehicles\citybus\dze_citybus";
	picture = "\dayz_epoch_c\icons\vehicles\ArmoredBus.paa";
	displayName	= $STR_VEH_NAME_IKARUS_ARMORED;
	maxSpeed = 85;
	turnCoef = 1.2;
	armor = 100;
	transportMaxWeapons = 25;
	transportMaxMagazines = 120;
    transportmaxbackpacks = 10;		
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
};