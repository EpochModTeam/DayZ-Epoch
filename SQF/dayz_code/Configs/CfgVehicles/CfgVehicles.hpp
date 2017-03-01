#include "CommonActions.hpp"
class WeaponFireGun;    // External class reference
class WeaponCloudsGun;  // External class reference
class WeaponFireMGun;   // External class reference
class WeaponCloudsMGun;

class CfgVehicles {
	class ALL;
	class AllVehicles : ALL
	{
		class NewTurret;
		class ViewPilot;
		class ViewOptics;
		class Sounds { class Engine; class Movement;};
		class DefaultEventhandlers;
		class EventHandlers: DefaultEventhandlers
		{
			killed = "_this call BIS_Effects_EH_Killed;";
		};
	};
	class Air : AllVehicles
	{
		class NewTurret;
		class ViewPilot;
		class AnimationSources;
	};
	class Helicopter : Air
	{
		class HitPoints
		{
			class HitHull {
				armor = 1;
				material = 51;
				name = "NEtrup";
				visual = "trup";
				passThrough = 1;
			};
			class HitEngine {
				armor = 0.25;
				material = 51;
				name = "motor";
				visual = "motor";
				passThrough = 1;
			};
			class HitAvionics {
				armor = 0.15;
				material = 51;
				name = "elektronika";
				visual = "elektronika";
				passThrough = 1;
			};
			class HitVRotor {
				armor = 0.3;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = 0.3;
			};
			class HitHRotor {
				armor = 0.2;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = 0.1;
			};
			class HitMissiles {
				armor = 0.1;
				material = 51;
				name = "munice";
				visual = "munice";
				passThrough = 0.5;
			};
			class HitRGlass {
				convexComponent = "sklo predni P";
				armor = 0.1;
				material = 51;
				name = "sklo predni P";
				visual = "sklo predni P";
				passThrough = 0;
			};
			class HitLGlass {
				convexComponent = "sklo predni L";
				armor = 0.1;
				material = 51;
				name = "sklo predni L";
				visual = "sklo predni L";
				passThrough = 0;
			};
			class HitGlass1 {
				armor = 2;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			class HitGlass2 {
				armor = 2;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
			class HitGlass3 {
				armor = 2;
				material = -1;
				name = "glass3";
				visual = "glass3";
				passThrough = 0;
			};
			class HitGlass4 {
				armor = 2;
				material = -1;
				name = "glass4";
				visual = "glass4";
				passThrough = 0;
			};
			class HitGlass5 {
				armor = 2;
				material = -1;
				name = "glass5";
				visual = "glass5";
				passThrough = 0;
			};
			class HitGlass6 {
				armor = 2;
				material = -1;
				name = "glass6";
				visual = "glass6";
				passThrough = 0;
			};
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets;
				class ViewOptics;
			};
		};
		//Won't support loading external vehicle addons (with custom UserActions) which we can not include in Epoch. Child UserActions overwrite inherited UserActions.
		/*class UserActions
		{
			class Repair {ACTION_REPAIR; radius = 8;};
			class Salvage {ACTION_SALVAGE; radius = 8;};
		};*/
	};
	class Plane: Air
	{
		class ViewPilot;
		class ViewOptics;
		class AirplaneHUD;
		class HitPoints
		{
			class HitHull;
		};
		class AnimationSources;
		class UserActions
		{
			//class Repair {ACTION_REPAIR; radius = 8;};
			//class Salvage {ACTION_SALVAGE; radius = 8;};
			class PushPlane {ACTION_PUSH;};
		};
	};
	class Land;	// External class reference
	class LandVehicle : Land
	{
		class NewTurret;
		class Sounds;
		class ViewOptics;
		class ViewPilot;
		class AnimationSources;
		class EventHandlers;
		class Reflectors {
			class Left {
				color[] = {0.9,0.8,0.8,1};
				ambient[] = {0.1,0.1,0.1,1};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 0.5;
			};
			class Right {
				color[] = {0.9,0.8,0.8,1};
				ambient[] = {0.1,0.1,0.1,1};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 0.5;
			};
		};
		/*class UserActions
		{
			class Repair {ACTION_REPAIR; radius = 4;};
			class Salvage {ACTION_SALVAGE; radius = 4;};
		};*/
	};
	class Car: LandVehicle {
		class HitPoints
		{
			class HitEngine;
			class HitRGlass;
			class HitLGlass;
			class HitBody;
			class HitFuel;			
			class HitLFWheel;
			class HitRFWheel;
			class HitLF2Wheel;
			class HitRF2Wheel;
			class HitLMWheel;
			class HitRMWheel;
			class HitLBWheel;
			class HitRBWheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets;
				class ViewOptics;
			};
		};
		class Sounds : Sounds
		{
			class Engine;
			class Movement;
		};
	};

	class Tank: LandVehicle {
		class HitPoints
		{
			class HitEngine;
			class HitHull;
			class HitLTrack;
			class HitRTrack;
		};
		class ViewPilot;
		class ViewOptics;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets;
				class HitPoints
				{
					class HitTurret;
					class HitGun;
				};
			};
		};

		class CargoLight;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class SpeechVariants
		{
			class Default;
			class EN;
			class CZ;
			class CZ_Akuzativ;
			class RU;
		};
		class Eventhandlers;
	};
	class Truck;

	//External Class
	//class SkodaBase; //in Car\Skoda.hpp
	class ATV_Base_EP1 : Car
	{
		class HitPoints : HitPoints
		{
			class HitEngine {armor=2;material=-1;name="motor";visual="motor";passThrough=0;};
			class HitFuel {armor=1;material=-1;name="palivo";passThrough=0;};

			class HitLFWheel:HitLFWheel{armor=1;};
			class HitLBWheel:HitLBWheel{armor=1;};

			class HitRFWheel:HitRFWheel{armor=1;};
			class HitRBWheel:HitRBWheel{armor=1;};
		};
	};
	class Motorcycle;
	class RubberBoat;
	//class UAZ_Unarmed_Base;
	//class HMMWV_Base;
	class AH6_Base_EP1;
	class AH6X_EP1;
	class An2_Base_EP1;
	class TT650_Base;
	class V3S_Base;
	class SUV_Base_EP1 : Car
	{
		class HitPoints : HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitFuel;
			class HitEngine;

			//armored glass - hight armor value
			class HitGlass1:HitGlass1 {armor=1;};
			class HitGlass2:HitGlass2 {armor=1;};
			class HitGlass3:HitGlass3 {armor=1;};
			class HitGlass4:HitGlass4 {armor=1;};

		};
	};
	//class Ship;
	//class Bag_Base_EP1;
	//class Bag_Base_BAF;
	class HouseBase;
	class Ruins: HouseBase {};
	class House : HouseBase
	{
		class DestructionEffects;
	};
	class House_EP1;
	class SpawnableWreck : House {};
	class Strategic;
	class NonStrategic;
	class Thing;
//	class Land_Fire;
	class BuiltItems;
	class Building;
	class ReammoBox;
	
	class M1030_base;
	class MMT_base;
	class Old_bike_base_EP1;
	class Old_moto_base;
	class Ikarus_base;
	//class Volha_TK_CIV_Base_EP1;
	//class LandRover_CZ_EP1;
	class Ural_Base;

	#include "RepairParts.hpp" //names for all reapir parts. Needs moving to hitpoints
	//ZEDS
	#include "Zeds\Zeds.hpp" //old type zeds
	#include "Zeds\ViralZeds.hpp" //Viral type zeds
	#include "Zeds\WildZeds.hpp" //Viral type zeds
	#include "Zeds\SwarmZeds.hpp" //Swarm
	#include "Zeds\PlayerZeds.hpp"
	#include "DZE\Females.hpp"
	//Survivor Skins
	#include "Skins.hpp"
	//Bags
	#include "Bags.hpp"
	//DZAnimal and DZ_Fin
	#include "Animal.hpp"

	//Includes all DayZ Vehilces
	//Cars
	#include "Car\HMMWV.hpp"
	#include "Car\ArmoredSUV.hpp"
	#include "Car\BTR90.hpp"
	#include "Car\datsun.hpp"
	#include "Car\Gaz_Vodnik.hpp"
	#include "Car\hilux.hpp"
	#include "Car\Ikarus.hpp"
	#include "Car\Kamaz.hpp"
	#include "Car\Lada.hpp"
	#include "Car\LandRover.hpp"
	#include "Car\LAV25.hpp"
	#include "Car\M113.hpp"
	#include "Car\Mtvr.hpp"
	#include "Car\S1203.hpp"
	#include "Car\Tractor.hpp"
	#include "Car\UAZ_MG.hpp"
	#include "Car\Volha.hpp"
	#include "Car\VWGolf.hpp"
	#include "Car\Skoda.hpp"
	#include "Car\CAR_HATCHBACK.hpp"
	#include "Car\UAZ.hpp"
	#include "Car\CAR_SEDAN.hpp"
	#include "Car\V3S_Civ.hpp"
	#include "Car\SUV_DZ.hpp"
	#include "Car\Pickup_PK_INS.hpp"
	#include "Car\Offroad_DSHKM_INS.hpp"
	#include "Car\UralCivil_DZ.hpp"
	#include "Car\BRDM2_DZ.hpp"
	//Helicopters
	#include "Helicopter\MI17.hpp"
	#include "Helicopter\UH1H.hpp"
	#include "Helicopter\UH1Y.hpp"
	#include "Helicopter\AH6.hpp"
	#include "Helicopter\MH6J_DZ.hpp"
	#include "Helicopter\CH53.hpp"
	#include "Helicopter\UH60.hpp"
	#include "Helicopter\CH47.hpp"
	#include "Helicopter\BAF_Merlin.hpp"
	#include "Helicopter\AH1Z.hpp"
	//Wrecks
	//#include "Helicopter\MI8Wreck.hpp"
	//#include "Helicopter\UH1Wreck.hpp"
	//#include "Helicopter\UH60Wreck.hpp"
	#include "CrashSite.hpp"
	//Planes
	#include "Plane\AN2_DZ.hpp"
	#include "Plane\MV22.hpp"
	#include "Plane\C130.hpp"
	#include "Plane\Cessna_DZ.hpp"
	//Bikes
	#include "Bikes\ATV_US_EP1.hpp"
	#include "Bikes\ATV_CZ_EP1.hpp"
	#include "Bikes\MMT_Civ.hpp"
	#include "Bikes\Old_bike.hpp"
	#include "Bikes\Old_moto.hpp"
	#include "Bikes\TT650_Ins.hpp"
	#include "Bikes\TT650_Civ.hpp"
	#include "Bikes\M1030.hpp"
	//Boat
	#include "Boat\RHIB.hpp" //Must be first boat, includes Ship base class
	#include "Boat\PBX.hpp"
	#include "Boat\Fishing_Boat.hpp"
	#include "Boat\smallboat.hpp"
	#include "Boat\JetSkiYanahui.hpp"

	//Includes all Building Stuff
	// This parent class is made to make referring to these objects easier later with allMissionObjects
	#include "Buildings\HouseDZ.hpp"
	//Fire
	#include "Buildings\Land_Fire.hpp"
	//Buildings
	#include "Buildings\Land_A_Crane_02b.hpp"
	#include "Buildings\Land_A_FuelStation_Feed.hpp"
	#include "Buildings\Land_A_TVTower_Mid.hpp"
	#include "Buildings\Land_A_TVTower_Top.hpp"
	#include "Buildings\Land_Farm_WTower.hpp"
	#include "Buildings\Land_HouseB_Tenement.hpp"
	#include "Buildings\Land_Ind_MalyKomin.hpp"
	#include "Buildings\Land_komin.hpp"
	#include "Buildings\Land_majak.hpp"
	#include "Buildings\Land_Mil_ControlTower.hpp"
	#include "Buildings\Land_NAV_Lighthouse.hpp"
	#include "Buildings\Land_NavigLight.hpp"
	#include "Buildings\Land_Rail_Semafor.hpp"
	#include "Buildings\Land_Rail_Zavora.hpp"
	#include "Buildings\Land_runway_edgelight.hpp"
	#include "Buildings\Land_Stoplight.hpp"
	#include "Buildings\Land_telek1.hpp"
	#include "Buildings\Land_VASICore.hpp"
	#include "Buildings\Land_Vysilac_FM.hpp"
	#include "Buildings\WaterSources.hpp"

	//Duplicates of Epoch items in DZE\Prop_Defs.hpp
	//#include "CamoNetting.hpp"
	//#include "Hedgehog.hpp"
	//#include "Sandbag.hpp"


	//WeaponHolder
	#include "WeaponHolder.hpp"

	//itemBox's
	//#include "CardboardBox.hpp"
	#include "LootContainer.hpp"

	//Tents,storage
	//#include "Storage.hpp"
	
	// Traps 
	#include "Traps.hpp"

	//Antihack
	#include "antihack_logic.hpp"
	#include "antihack_plants.hpp"
	//#include "antihack_weaponholders.hpp"
	
	//EPOCH
	#include "DZE\Wrecks.hpp"
	#include "DZE\Doors.hpp"
	#include "DZE\Prop_Defs.hpp"
	#include "DZE\Veins.hpp"
	#include "DZE\ModularBuilding.hpp"
	#include "DZE\CSJ_GyroAC.hpp"
	class Land_A_tent;	// External class reference
	#include "DZE\Grave.hpp"
	class WeaponHolder;	// External class reference
	#include "DZE\LockboxStorage.hpp"
	#include "DZE\VaultStorage.hpp"
	#include "DZE\TentStorage.hpp"
	
	
	//Blood Trail
	#include "Buildings\Blood_Trail_DZ.hpp"

	class waterHoleProxy: House {
		model = "z\addons\dayz_communityassets\models\waterHoleProxy.p3d";
	};
	
	//Camps
	#include "InfectedCamps\IC_Fireplace1.hpp"

	//class WeaponHolder;
	class Plant_Base: WeaponHolder {
		scope = public;
		icon = "";
		mapSize = 0;
		transportMaxWeapons = 0;
		accuracy = 1000;
		class DestructionEffects{};
		favouritezones = "(meadow) * (forest) * (1 - houses) * (1 - sea)";
		displayName = "$STR_ITEM_NAME_comfrey";
		class eventHandlers {
			init="(_this select 0)setVariable['permaLoot',true];";
		};
		supplyRadius = 1;
	};
	#include "gathered_plants.hpp"
	class Generator_Base: Land_A_tent //Vanilla generator uses SkodaBase but is currently not functional
	{
		model = "\dayz_equip\models\generator_gear.p3d";
		picture = "\dayz_equip\textures\equip_generator_ca.paa";
		displayName="Generator";
	};
	class Generator_DZ: Generator_Base
	{
		scope = public; // vanilla uses protected
		transportMaxWeapons=0;
		transportmaxbackpacks = 0;
		transportMaxMagazines=10;
		displayName = "Generator";
		weapons[] = {};
		magazines[] = {};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		maximumLoad = 200;
		supplyRadius = -1;
		memoryPointSupply = "";
		
		soundengineoffext[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-stop-1", 0.398107, 1, 250};
		soundengineonext[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-start-1", 0.398107, 1, 250};		
		// Epoch values
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0};
		model = "\dayz_equip\models\generator.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 400;		
		vehicleClass = "Fortifications";
		constructioncount = 1;
		removeoutput[] = {{"ItemGenerator",1}};
		requireplot = 0;
		nounderground = 0;

		class Turrets {};
		
		/* // Vanilla generator actions below are currently not functional, Epoch has these in fn_selfActions
		class UserActions
		{
			class EngineOn
			{
				displayNameDefault = "Switch On";
				displayName = "Switch On";
				position = "";
				shortcut = "EngineOn";
				radius = 2.7;
				onlyForPlayer = 1;
				condition = "alive this and !isEngineOn this";
				statement = "[this,true] call dayz_engineSwitch";
			};
			class EngineOff: EngineOn
			{
				displayNameDefault = "Switch Off";
				displayName = "Switch Off";
				position = "";
				shortcut = "EngineOn";
				radius = 2.7;
				onlyForPlayer = 1;
				condition = "alive this and isEngineOn this";
				statement = "player action ['engineOff', this];";
			};
		};
		*/
	};
};
/*
class CfgNonAIVehicles { //IN CfgNonAIVehicles.hpp
	#include "StreetLamps.hpp"
};*/
