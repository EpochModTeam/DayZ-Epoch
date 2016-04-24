class CfgPatches {
	class dayz_server {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"dayz_code"};
	};

	class vehMaint {
		class CAWorld {};
		class Chernarus:CAWorld { 
			center[] = {7839,8414}; // x y
			SWcorner[] = {0,1360};
			NEcorner[] = {14400,13560};
			spawnRadius = 6000;
		};
		
		class AllVehicles {
			// location types where vehicles will be spawned
			localityTypes[] = { "Airport", "CityCenter", "FlatArea", "FlatAreaCity", "FlatAreaCitySmall", "Hill", "NameCity", "NameCityCapital", "NameLocal", "NameMarine", "NameVillage"  };
			// disk radius around location
			localityRadius = 1500;
			// enabled altitudes (or sea depth)
			minAltitude = 3;
			maxAltitude = 400;
			// look for objects class/type in location. Leave it empty for a random spot inside the disk
			nearObjects[] = { "Land_Wall_Gate_Ind1_L", "Land_Wall_Gate_Ind2A_L", "Land_Wall_Gate_Ind2B_L", "Land_Wall_Gate_Ind2Rail_L", "Land_Wall_Gate_Kolchoz", "Land_CncBlock_Stripes", "Land_repair_center", "Land_A_FuelStation_Build" };
		};
		class Air:AllVehicles {
			nearObjects[] = { "Body","Body1","Body2","NT72Wreck","Fort_Razor_Wire", "HeliHRescue", "Land_A_Castle_Bastion", "Land_CamoNetB_NATO_EP1", "Land_SS_hangar", "HeliH","HeliHCivil", "HeliHRescue", "Land_Tent_East" }; // "UralWreck","HMMWVWreck", 
		};
		class Ship:AllVehicles {
			localityTypes[] = { "NameMarine" };
			localityRadius = 900;
			minAltitude = -9; // sea depth
			maxAltitude = -1.2; // sea depth
			nearObjects[] = {};
		};
		class PBX : Ship { quantity = 1; };
		class Smallboat_1 : Ship { quantity = 2; };
		class Smallboat_2 : Ship { quantity = 1; };
		class MH6J_DZ : Air { quantity = 3; };
		class UH1H_DZ : Air { quantity = 1; };
		class AH6X_DZ : Air { quantity = 1; };
		class Mi17_DZ : Air { quantity = 2; };
		class AN2_DZ : Air { quantity = 1; };
		class Motorcycle : AllVehicles {};

		class TT650_Civ : Motorcycle { quantity = 1; };
		class TT650_Ins : Motorcycle { quantity = 1; };
		class M1030 : Motorcycle { quantity = 2; };

		class Bicycle : Motorcycle   {
			nearObjects[] = { "Land_Misc_Cargo1B", "Land_loco_742_blue", "Land_Misc_Cargo1Bo", "Land_Misc_Cargo1D", "Land_Rail_Zavora","Land_HouseV_3I1","Land_rail_station_big", "Land_Rail_House_01", "Land_HouseV_1L2","Land_NAV_Lighthouse", "Land_NAV_Lighthouse2", "Land_A_FuelStation_Build", "Land_Hlidac_budka", "Land_Shed_W01" };
			maxAltitude = 60;
		};
		class Old_bike_TK_INS_EP1 : Bicycle { quantity = 4; };
		class Old_bike_TK_CIV_EP1 : Bicycle { quantity = 6; }; 
		class Car:AllVehicles {};
		class Truck:Car {};
		class Ural_TK_CIV_EP1:Truck { quantity = 1; };
		class Ikarus : Car { quantity = 2; }; // Bus?

		class V3S_Civ:Truck { quantity = 1; };
		class tractor:Car {
			localityTypes[] = { "Hill", "NameLocal", "NameVillage" };
			nearObjects[] = { "Land_seno_balik" }; // haystack
			quantity = 4; 
		}; 
		class ATV_US_EP1 : Car { quantity = 5; };
		class ATV_CZ_EP1 : Car { quantity = 4; };
		class car_hatchback : Car { quantity = 1; };
		class Volha_2_TK_CIV_EP1 : Car { quantity = 1; };
		class Lada2 : Car { quantity = 1; };
		class hilux1_civil_3_open : Car { quantity = 2; };
		class UAZ_CDF : Car { quantity = 1; };
		class BAF_Offroad_W : Car { quantity = 1; };
		class S1203_TK_CIV_EP1 : Car { quantity = 1; };
		class HMMWV_DZ : Car { quantity = 2; };
		class SUV_DZ : Car { quantity = 1; };
	};
};
