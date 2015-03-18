class WeaponFireGun;    // External class reference
class WeaponCloudsGun;  // External class reference
class WeaponFireMGun;   // External class reference
class WeaponCloudsMGun;

class CfgVehicles {

	#include "CfgVehicles\Zeds\Zeds.hpp"
	#include "CfgVehicles\Zeds\NewZeds.hpp"
	#include "CfgVehicles\Zeds\PlayerZeds.hpp"
	#include "CfgVehicles\Females\females.hpp"
	#include "CfgVehicles\antihack_logic.hpp"

	class All;

	class HouseBase;
	class Ruins: HouseBase {};
	#include "CfgVehicles\antihack_plants.hpp"
	#include "CfgVehicles\DZE\Doors.hpp"
	class Land_A_tent;	// External class reference
	#include "CfgVehicles\DZE\Grave.hpp"
	class WeaponHolder;	// External class reference
	#include "CfgVehicles\DZE\LockboxStorage.hpp"
	#include "CfgVehicles\DZE\VaultStorage.hpp"
	#include "CfgVehicles\DZE\TentStorage.hpp"

	class AllVehicles;

	class Land;	// External class reference
	class LandVehicle : Land {
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
	};
	class car: landvehicle {
		class Turrets {
			class MainTurret: NewTurret {
				class Turrets;
				class ViewOptics;
			};
		};
		class HitPoints {
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
		class Sounds : Sounds {
			class Engine;
			class Movement;
		};
	};

	class Air : AllVehicles {
		class NewTurret;
		class ViewPilot;
		class AnimationSources;
	};
	class Helicopter : Air {
		class HitPoints {
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
		class Turrets {
			class MainTurret: NewTurret {
				class Turrets;
				class ViewOptics;
			};
		};
	};
	class Tank: landvehicle	{
  		class Sounds: Sounds  {
   			class Engine;
   			class Movement;
  		};
  		driverOpticsModel = "\ca\Tracked\optika_tank_driver";
  		commanderCanSee = 31;
  		gunnerCanSee = 30;
  		getInAction = "GetInMedium";
  		getOutAction = "GetOutMedium";
  		cargoGetInAction[] = {"GetInLow"};
  		cargoGetOutAction[] = {"GetOutLow"};
  		audible = 18;
  		sensitivityEar = "0.0075 /3";
  		armorStructural = 2;
  		class AnimationSources;
  		class HitPoints  {
   			class HitHull {
    				armor = 1;
    				material = -1;
    				name = "NEtelo";
    				visual = "telo";
    				passThrough = 1;
   			};
   			class HitLTrack {
    				armor = 0.15;
    				material = -1;
    				name = "pas_L";
    				visual = "pas_L";
    				passThrough = 0.3;
   			};
   			class HitRTrack {
    				armor = 0.15;
    				material = -1;
    				name = "pas_P";
    				visual = "pas_P";
    				passThrough = 0.3;
   			};
   			class HitEngine {
    				armor = 0.35;
    				material = -1;
    				name = "motor";
    				visual = "motor";
    				passThrough = 0.2;
    				minimalHit = 0.02;
   			};
  		};
  		weapons[] = {};
  		magazines[] = {};
  		class Turrets  {
   			class MainTurret: NewTurret {
    				gunnerAction = "ManActTestDriverOut";
    				gunnerOpticsModel = "\ca\Tracked\optika_tank_gunner";
    				gunnerOutOpticsModel = "\ca\Weapons\optika_empty";
    				gunBeg = "usti hlavne";
    				gunEnd = "konec hlavne";
				memoryPointsGetInGunner = "pos gunner";
    				memoryPointsGetInGunnerDir = "pos gunner dir";
    				gunnerGetInAction = "GetInHigh";
    				gunnerGetOutAction = "GetOutHigh";
    				viewGunnerInExternal = 0;
    				primaryGunner = 1;
    				gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
    				gunnerOutOpticsEffect[] = {};
    				class HitPoints {
     					class HitTurret {
      						armor = 1;
      						material = -1;
      						name = "vez";
      						visual = "vez";
      						passThrough = 1;
     					};
     					class HitGun {
      						armor = 0.3;
      						material = -1;
      						name = "zbran";
      						visual = "zbran";
      						passThrough = 0;
     					};
    				};
    				class Turrets {
     					class CommanderOptics: NewTurret {
      						proxyType = "CPCommander";
      						proxyIndex = 1;
      						gunnerName = "$STR_POSITION_COMMANDER";
      						primaryGunner = 0;
      						primaryObserver = 1;
      						stabilizedInAxes = "StabilizedInAxesNone";
      						body = "obsTurret";
      						gun = "obsGun";
      						animationSourceBody = "obsTurret";
      						animationSourceGun = "obsGun";
      						animationSourceHatch = "hatchCommander";
      						soundServo[] = {"\ca\sounds\vehicles\servos\turret-1",0.01,1,10};
      						gunBeg = "";
      						gunEnd = "";
      						minElev = -4;
      						maxElev = 20;
      						initElev = 0;
      						minTurn = -360;
      						maxTurn = 360;
      						initTurn = 0;
      						commanding = 2;
      						outGunnerMayFire = 1;
      						inGunnerMayFire = 1;
      						viewGunnerInExternal = 0;
      						gunnerOpticsModel = "\ca\Tracked\optika_tank_driver";
      						gunnerOutOpticsModel = "\ca\Weapons\optika_empty";
      						gunnerOutOpticsColor[] = {0,0,0,1};
      						gunnerOutForceOptics = 0;
      						gunnerOutOpticsShowCursor = 0;
      						gunnerOpticsEffect[] = {};
      						gunnerOutOpticsEffect[] = {};
      						memoryPointGunnerOutOptics = "commander_weapon_view";
      						memoryPointGunnerOptics = "commanderview";
      						memoryPointsGetInGunner = "pos commander";
      						memoryPointsGetInGunnerDir = "pos commander dir";
      						gunnerGetInAction = "GetInHigh";
      						gunnerGetOutAction = "GetOutHigh";
      						memoryPointGun = "gun_muzzle";
      						selectionFireAnim = "zasleh_1";
      						class ViewOptics {
       							initAngleX = 0;
       							minAngleX = -30;
       							maxAngleX = 30;
       							initAngleY = 0;
       							minAngleY = -100;
       							maxAngleY = 100;
       							initFov = 0.155;
       							minFov = 0.0625;
       							maxFov = 0.466;
      						};
      						class ViewGunner {
       							initAngleX = 5;
       							minAngleX = -65;
       							maxAngleX = 85;
						       initAngleY = 0;
						       minAngleY = -150;
						       maxAngleY = 150;
						       initFov = 0.7;
						       minFov = 0.25;
						       maxFov = 1.1;
      						};
     					};
    				};
   			};
  		};
  		soundDammage[] = {"\ca\Tracked\Data\Sound\alarm_loop1",0.000316228,1};
  		supplyRadius = 1.5;
  		class ViewOptics: ViewOptics  {
			initAngleX = 0;
		        minAngleX = -30;
		   	maxAngleX = 30;
		   	initAngleY = 0;
		   	minAngleY = -100;
		   	maxAngleY = 100;
		   	initFov = 0.466;
		   	minFov = 0.466;
		   	maxFov = 0.466;
  		};
  		class DefaultEventhandlers;
  		class Eventhandlers: DefaultEventhandlers{};
  		smokeLauncherGrenadeCount = 6;
  		smokeLauncherVelocity = 15;
  		smokeLauncherOnTurret = 1;
  		smokeLauncherAngle = 120;
 	};


	// AIR
	#include "CfgVehicles\AIR\AN2.hpp"
	#include "CfgVehicles\AIR\BAF_Merlin.hpp"
	#include "CfgVehicles\AIR\CH47.hpp"
	#include "CfgVehicles\AIR\MV22.hpp"
	#include "CfgVehicles\AIR\UH60.hpp"
	#include "CfgVehicles\AIR\Mi17.hpp"
	#include "CfgVehicles\AIR\UH1.hpp"
	#include "CfgVehicles\AIR\AH6.hpp"
	#include "CfgVehicles\AIR\C130.hpp"
	#include "CfgVehicles\AIR\CH53.hpp"
	

	// LAND (Armed)
	#include "CfgVehicles\LAND\HMMWV.hpp"
	#include "CfgVehicles\LAND\LandRover.hpp"
	#include "CfgVehicles\LAND\UAZ_MG.hpp"
	#include "CfgVehicles\LAND\Gaz_Vodnik.hpp"
	#include "CfgVehicles\LAND\ArmoredSUV.hpp"
	#include "CfgVehicles\LAND\Pickup_PK.hpp"
	#include "CfgVehicles\LAND\Offroad_DSHKM.hpp"
	#include "CfgVehicles\LAND\BTR90.hpp"
	#include "CfgVehicles\LAND\LAV25.hpp"

	// LAND (Unarmed)
	#include "CfgVehicles\LAND\V3S.hpp"
	#include "CfgVehicles\LAND\Ural.hpp"
	#include "CfgVehicles\LAND\Kamaz.hpp"
	#include "CfgVehicles\LAND\Mtvr.hpp"
	#include "CfgVehicles\LAND\Volha.hpp"
	#include "CfgVehicles\LAND\VWGolf.hpp"
	#include "CfgVehicles\LAND\Skoda.hpp"
	#include "CfgVehicles\LAND\datsun.hpp"
	#include "CfgVehicles\LAND\Lada.hpp"
	#include "CfgVehicles\LAND\hilux.hpp"
	#include "CfgVehicles\LAND\UAZ.hpp"
	#include "CfgVehicles\LAND\SUV.hpp"
	#include "CfgVehicles\LAND\TT650.hpp"

	// Land (Armed & Unarmed)
	#include "CfgVehicles\LAND\M113.hpp"

	// SEA
	// #include "CfgVehicles\SEA\RHIB.hpp"
	#include "CfgVehicles\SEA\PBX.hpp"

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
	#include "CfgVehicles\Players.hpp"
	#include "CfgVehicles\Bags.hpp"

	class House {
		class DestructionEffects;
	};
	#include "CfgVehicles\Wrecks.hpp"
	#include "CfgVehicles\DZE\Wrecks.hpp"

	class Mass_grave;
	class Mass_grave_DZ: Mass_grave
	{
		displayName = "Mass Grave W/ Zombies";
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
	  armor = 2000;
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

	//class NonStrategic;
	class BuiltItems: NonStrategic{};
	class MiningItems: NonStrategic{
		class DestructionEffects {
			class Sound {
				simulation = "sound";
				type = "DestrMine";
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
	class DebugBox_DZ: NonStrategic
	{
		placement = "vertical";
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		model = "\z\addons\dayz_epoch\models\debug_box.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 2000;
		displayName = "Debug Box";
		vehicleClass = "Fortifications";
	};
	class DebugBoxPlayer_DZ: NonStrategic
	{
		placement = "vertical";
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		model = "\z\addons\dayz_epoch\models\player_box.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 2000;
		displayName = "Player Debug Box";
		vehicleClass = "Fortifications";
		class Eventhandlers
		{
			init = "_this call eh_localCleanup;";
		};
	};

	class TrapItems: NonStrategic{};
	// buildables
	class Hedgehog_DZ: BuiltItems
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0.55};
		model = "\ca\misc\jezek_kov";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 400;
		displayName = "Hedgehog (Steel)";
		vehicleClass = "Fortifications";
		constructioncount = 1;
		removeoutput[] = {{"ItemTankTrap",1}};
		nounderground = 0;
	};
	// WorkBench_DZ
	class WorkBench_DZ: BuiltItems
	{
		scope = 2;
		destrType = "DestructTree";
		cost = 100;
		offset[] = {0,1.5,0};
		model = "\z\addons\dayz_epoch\models\workbench.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 400;
		displayName = "Workbench";
		vehicleClass = "Fortifications";
		maintainBuilding[] = {{"PartWoodLumber",1}};
		constructioncount = 1;
		removeoutput[] = {{"PartWoodPlywood",1},{"PartWoodLumber",2}};
		requireplot = 0;
		nounderground = 0;
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
		armor = 4000;
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
		requireplot = 0;
		nounderground = 0;
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
		removeoutput[] = {{"fuel_pump_kit",1}};
		requireplot = 0;
		nounderground = 0;
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
	  nounderground = 0;
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
		nounderground = 0;
	};
	//review some of these settings
	class BagFenceRound_DZ: BuiltItems
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		model = "\ca\misc2\BagFenceRound.p3d";
		icon = "\Ca\misc3\data\Icons\icon_bagFenceRound_ca.paa";
		offset[] = {0,1.5,0.5};
		mapSize = 2;
		armor = 400;
		displayName = "Bag fence (Round)";
		vehicleClass = "Fortifications";
		constructioncount = 3;
		removeoutput[] = {{"BagFenceRound_DZ_kit",1}};
		nounderground = 0;
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
		nounderground = 0;
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
		nounderground = 0;
	};

	class Land_HBarrier5_DZ:BuiltItems {
		model = "\ca\misc2\HBarrier5.p3d";
		icon = "\Ca\misc2\data\Icons\icon_hescoBarrier5_ca.paa";
		mapSize = 7;
		displayName = "H-barrier (long)";
		GhostPreview = "Land_HBarrier5Preview";
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
		removeoutput[] = {{"ItemSandbagExLarge5x",1}};
		nounderground = 0;
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
		nounderground = 0;
	};

	class Supply_Crate_DZE: MiningItems
	{
		scope = 2;
		destrType = "DestructBuilding";
		cost = 100;

		model="\z\addons\dayz_epoch\models\ammo_supply.p3d";
		icon = "\ca\data\data\Unknown_object.paa";

		mapSize = 2;
		armor = 40;
		displayName = "Supply Crate";

		vehicleClass = "Fortifications";

		class DestructionEffects : DestructionEffects
		{
			class Ruin1
			{
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\ammo_supply_wreck.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
			};
		};
	};
	#include "CfgVehicles\DZE\Veins.hpp"


	class Land_Fire_barrel;
	class FireBarrel_DZ:Land_Fire_barrel
	{
		scope = 2;
		// destrType = "DestructNo";
		cost = 100;
		offset[] = {0,2,0.5};
		//model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 400;
		displayName = "Fire Barrel";
		vehicleClass = "Fortifications";
		constructioncount = 2;
		removeoutput[] = {{"ItemFuelBarrelEmpty",1}};
		nounderground = 0;
		/*class EventHandlers
			{
				init = "(_this select 0) inflame 1";
			};*/
	};
	class Gunrack1;
	class GunRack_DZ: Gunrack1
    {
		armor = 200;
		scope = 2;
		displayName = "Gun Rack";
		vehicleClass = "Fortifications";
		transportMaxWeapons = 20;
		transportMaxMagazines = 10;
		transportMaxBackpacks = 0;
		offset[] = {0,2.5,0.5};
		removeoutput[] = {{"ItemGunRackKit",1}};
		nounderground = 0;
    };
	class Fort_Crate_wood;
	class WoodCrate_DZ: Fort_Crate_wood
	{
		scope = 2;
		destrType = "DestructBuilding";
		offset[] = {0,2.5,0.5};
		armor = 200;
		displayName = "Wood Crate";
		vehicleClass = "Fortifications";
		transportMaxMagazines = 50;
		transportMaxWeapons = 5;
		transportMaxBackpacks = 1;
		removeoutput[] = {{"ItemWoodCrateKit",1}};
		nounderground = 0;
	};
	// modular
	#include "CfgVehicles\DZE\ModularBuilding.hpp"

	// PLAYER BUILDINGS
	// class Plastic_Pole_EP1;
	class Sign_1L_Noentry_EP1;
	class Plastic_Pole_EP1_DZ: Sign_1L_Noentry_EP1
	{
		destrType = "DestructTree";
		armor = 2000;

		// static
		hasDriver = 0;
		simulation = "house";
		weapons[] = {};
		magazines[] = {};
		irTarget = 0;
		type = 1;
		threat[] = {0,0,0};
		maxSpeed = 0;
		coefInside = 4;
		coefInsideHeur = 4;

		scope = 2;
		offset[] = {0,2.5,0.3};
		displayName = "30m Plot Pole";
		vehicleClass = "Fortifications";
		removeoutput[] = {{"30m_plot_kit",1}};
		requireplot = 0;
		nounderground = 0;
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
		armor = 1600;
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
		armor = 600;
		scope = 2;
		offset[] = {0,2.5,1};
		removeoutput[] = {{"ItemCorrugated",1}};
		displayName = "Corrugated Fence";
		vehicleClass = "Fortifications";
		nounderground = 0;

	};
	class Land_kulna;
	class WoodShack_DZ: Land_kulna
	{
		scope = 2;
		destrType = "DestructBuilding";
		offset[] = {0,2.5,1.3};
		armor = 800;
		displayName = "Wooden Shack";
		vehicleClass = "Fortifications";
		transportMaxMagazines = 100;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 5;
		constructioncount = 5;
		nounderground = 0;
	};
	class Land_Shed_wooden;
	class Wooden_shed_DZ: Land_Shed_wooden
	{
		scope = 2;
		destrType = "DestructBuilding";
		//cost = 100;
		offset[] = {0,2.5,1};
		armor = 800;
		displayName = "Wooden Shed";
		vehicleClass = "Fortifications";
		transportMaxMagazines = 200;
		transportMaxWeapons = 20;
		transportMaxBackpacks = 10;
		nounderground = 0;
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
		maintainBuilding[] = {{"ItemLightBulb",1}};
	};
	class Land_Misc_Scaffolding;
	class Scaffolding_DZ: Land_Misc_Scaffolding
	{
		armor = 100;
		destrType = "DestructBuilding";
		scope = 2;
		displayName = "Scaffolding";
		vehicleClass = "Fortifications";
		constructioncount = 6;
		animated = 0;
		irTarget = 0;
		accuracy = 0.3;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		typicalCargo[] = {};
		offset[] = {0,10,3};
		cost = 0;
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

	#include "CfgVehicles\DZE\WeaponHolder.hpp"
};
