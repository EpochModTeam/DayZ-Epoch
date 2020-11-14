#include "CommonActions.hpp"
class WeaponFireGun;    // External class reference
class WeaponCloudsGun;  // External class reference
class WeaponFireMGun;   // External class reference
class WeaponCloudsMGun;

class CfgVehicles 
{
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
		class Reflectors
		{
			class Left
			{
				angle = 120;
				color[] = {0.9,0.8,0.8,1};
				ambient[] = {0.1,0.1,0.1,1};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 0.5;
			};
			class Right
			{
				angle = 120;
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
	};
	class Car : LandVehicle {
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


	//External Class

	class Motorcycle : LandVehicle
	{
		class Reflectors
		{
			class Right
			{
				angle = 90;
			};
		};
	};
	
	class Truck: Car
	{
		class HitPoints: HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class DestructionEffects;
		class Turrets;
	};	

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
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;

		};
	};
	class BRDM2_Base;
	class HouseBase;
	class Ruins: HouseBase {};
	class House : HouseBase
	{
		class DestructionEffects;
	};
	class House_EP1;
	class Land_HouseV_1I2;
	class SpawnableWreck : House {};
	class Strategic;
	class NonStrategic;
	class Thing;
	class BuiltItems;
	class Building;
	class ReammoBox;
	class Land_A_tent;

	#include "RepairParts.hpp"
	//ZEDS
	#include "Zeds\Zeds.hpp" //All type zeds
	#include "Zeds\ViralZeds.hpp" //Viral type zeds
	#include "Zeds\WildZeds.hpp" //Wild type zeds
	#include "Zeds\SwarmZeds.hpp" //Swarm type zeds
	#include "Zeds\PlayerZeds.hpp" //Player type zeds
	//Skins	
	#include "Skins\Male.hpp"
	#include "Skins\Female.hpp"
	//Bags
	#include "Bags.hpp"	// Backpacks
	//DZAnimal and DZ_Fin
	#include "Animal.hpp"

	//Includes all DayZ Vehilces
	//Cars
	#include "Car\HMMWV.hpp"
	#include "Car\ArmoredSUV.hpp"
	#include "Car\BTR40.hpp"	
	#include "Car\BTR60.hpp"
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
	#include "Car\Jackal.hpp"
	#include "Car\Dingo.hpp"
	#include "Car\Octavia.hpp"
	#include "Car\Tatra_T810.hpp"
	#include "Car\BMP2.hpp"
	#include "Car\T72.hpp"
	#include "Car\Jeep.hpp"
	#include "Car\MiniCooper.hpp"
	#include "Car\Nissan.hpp"
	#include "Car\ScrapAPC.hpp"
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
	#include "Helicopter\Pook.hpp"
	#include "Helicopter\CSJ_GyroAC.hpp"
	#include "Helicopter\KA60.hpp"
	#include "Helicopter\AW159.hpp"
	#include "Helicopter\MTVRBird.hpp"
	#include "CrashSite.hpp"
	//Planes
	#include "Plane\AN2_DZ.hpp"
	#include "Plane\MV22.hpp"
	#include "Plane\C130.hpp"
	#include "Plane\Cessna_DZ.hpp"
	//Bikes
	#include "Bikes\ATVs.hpp"
	#include "Bikes\Bikes.hpp"
	#include "Bikes\Motorbikes.hpp"

	//Boat
	#include "Boat\RHIB.hpp"
	#include "Boat\PBX.hpp"
	#include "Boat\Fishing_Boat.hpp"
	#include "Boat\smallboat.hpp"
	#include "Boat\JetSkiYanahui.hpp"
	#include "Boat\Seafox.hpp"

	//Includes all Building Stuff
	//Houses
	#include "Buildings\Land_A_Crane_02b.hpp"
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
	#include "Buildings\WarfareBBaseStructure.hpp"	
	#include "Buildings\Land_houseV_2T2.hpp"
	#include "Buildings\Land_Ind_Oil_Pump_EP1_DZE.hpp"	//Oil Pump without sound
	#include "Buildings\Fuelstations.hpp"
	#include "Buildings\land_ibr_hangar.hpp" //Works only if Lingor is loaded
	#include "Buildings\Land_Shed_M01.hpp" // Animated door and interior, made by Helion4
	
	#include "Land_Fire.hpp"	
	#include "WaterSources.hpp"	
	#include "Blood_Trail_DZ.hpp"
	#include "DebugBox.hpp"
	#include "Graves.hpp" // GraveDZE and Massgrave
	#include "Veins.hpp" //Veins and Wrecks
	#include "SupplyCrate.hpp" //Supply Crate and Wreck
	#include "InfectedCamps.hpp"		
	
	//Buildables
	class DZ_storage_base : Land_A_tent {
		scope = 0;
		armor = 5;
		displayname = $STR_VEH_NAME_STASH;
		icon = "";
		mapsize = 3;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;	
		constructioncount = 1;
		requireplot = 0;
		nounderground = 0;
		offset[] = {0,3,1};
	};
	
	#include "Buildables\Stashes.hpp"
	#include "Buildables\Tents.hpp"
	#include "Buildables\Storage.hpp"
	#include "Buildables\LockableStorage.hpp"
	#include "Buildables\Traps.hpp"	
	#include "Buildables\Generator.hpp"	
	#include "Buildables\Doors.hpp"
	#include "Buildables\ModularBuilding.hpp"	
	#include "Buildables\ModularWrecks.hpp"	
	#include "Buildables\FencesWood.hpp"
	#include "Buildables\FencesMetal.hpp"		
	#include "Buildables\FencesGates.hpp"	
	#include "Buildables\Misc.hpp"		
	
	//Loot Container
	#include "LootContainer\AmmoCrates.hpp"
	#include "LootContainer\CardboardBox.hpp"
	
	//WeaponHolder	
	class WeaponHolder;	// External class reference
	#include "WeaponHolder.hpp"	
	
	class Plant_Base: WeaponHolder {
		scope = 2;
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
	
	//Antihack
	#include "AntiHack\antihack_logic.hpp"
	#include "AntiHack\antihack_plants.hpp"
	
	class Land_CncBlock_AntiHack: NonStrategic
	{
		scope = 2;
		vehicleClass = "DayZ Epoch Buildings";
		model = "z\addons\dayz_communityassets\models\CncBlock_D.p3d";
		Icon = "\Ca\misc3\Data\Icons\icon_cnc_con_barrier_CA.paa";
		mapSize = 4;
		displayName = $STR_MISC_CNCBLOCK_D;
		armor = 150;
	};
	
	class waterHoleProxy: House {
		model = "z\addons\dayz_communityassets\models\waterHoleProxy.p3d";
	};	

	class ThingEffect;
	class FxCartridge_Mp7: ThingEffect
	{
		model = "\C1987_Mp7\cartridge\46_30.p3d";
		displayName = "4.6x30mm Cartridge";
		submerged = 0;
		submergeSpeed = 0;
		timeToLive = 5;
		disappearAtContact = 1;
		airRotation = 1.0;
	};
};