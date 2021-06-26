class Tractor;
class Tractor_DZE: Tractor {
	side = 1;
	faction = "USMC";
	vehicleClass = "DayZ Epoch Vehicles";
	displayname = $STR_VEH_NAME_TRACTOR;	
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class HitPoints;
	class HitFuel;
	class HitEngine;

	class Reflectors
	{
		class Left
		{
			color[] = {0.9,0.8,0.8,1.0};
			ambient[] = {0.1,0.1,0.1,1.0};
			position = "L svetlo";
			direction = "konec L svetla";
			hitpoint = "L svetlo";
			selection = "L svetlo";
			size = 1;
			brightness = 0.5;
			angle = 90;
		};
		class Right: Left
		{
			position = "P svetlo";
			direction = "konec P svetla";
			hitpoint = "P svetlo";
			selection = "P svetlo";
		};
	};
};

class tractorOld;
class TractorOld_DZE: tractorOld {
	side = 1;
	faction = "USMC";	
	vehicleClass = "DayZ Epoch Vehicles";
	displayname = $STR_VEH_NAME_TRACTOR_OLD;	
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class Reflectors
	{
		class Left
		{
			color[] = {0.9,0.8,0.8,1.0};
			ambient[] = {0.1,0.1,0.1,1.0};
			position = "L svetlo";
			direction = "konec L svetla";
			hitpoint = "L svetlo";
			selection = "L svetlo";
			size = 1;
			brightness = 0.5;
			angle = 90;
		};
	};
};

class Tractor_Armored_DZE: Tractor_DZE
{
	displayname = $STR_VEH_NAME_TRACTOR_ARMORED;	
	model = "\z\addons\dayz_epoch_v\vehicles\tractor\dze_tractor";
	picture = "\dayz_epoch_c\icons\vehicles\ArmoredTractor.paa";
	armor = 120;
	maxSpeed = 75;
	terrainCoef = 0.5;
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
    transportmaxbackpacks = 10;	
	
	class HitPoints: HitPoints {
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 2;
		};
	};	
	
	hiddenselections[] = {"camo1","camo2"};
	hiddenselectionstextures[]= 
	{
		"\z\addons\dayz_epoch_v\vehicles\tractor\data\tractor_2_rusty_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\tractor\data\rustymetal_01_co.paa"			
	};
	class damage
	{
		tex[]={};
		mat[]=
		{
			"z\addons\dayz_epoch_v\vehicles\tractor\data\rustymetal_01.rvmat",
			"z\addons\dayz_epoch_v\vehicles\tractor\data\rustymetal_01_damage.rvmat",
			"z\addons\dayz_epoch_v\vehicles\tractor\data\rustymetal_01_destruct.rvmat",

			"ca\wheeled\data\traktor_2.rvmat",
			"ca\wheeled\data\traktor_2.rvmat",
			"ca\wheeled\data\traktor_2_destruct.rvmat",
			
			"ca\wheeled\data\traktor_2_skla.rvmat",
			"ca\wheeled\data\traktor_2_skla.rvmat",
			"ca\wheeled\data\traktor_2_skla_destruct.rvmat"
			
		};
	};
	class nvgmarkers {};
};
