class Mass_grave;
class Mass_grave_DZ: Mass_grave
{
	displayName = "Mass Grave W/ Zombies";
};

class Land_Ind_FuelStation_Feed_EP1: Strategic
{
	model = "\ca\Structures_E\Ind\Ind_FuelStation\Ind_FuelStation_Feed_ep1.p3d";
	transportFuel = 0;
	nameSound = "fuelstation";
};
class FuelStation : Strategic {
  icon = "\Ca\buildings\Icons\i_fuel_CA.paa";
  scope = private;
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
	scope = public;
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
	scope = public;
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
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	model = "\z\addons\dayz_epoch\models\player_box.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 2000;
	displayName = "Player Debug Box";
	vehicleClass = "Fortifications";
};

// buildables
class Hedgehog_DZ: BuiltItems
{
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0.55};
	model = "\ca\misc\jezek_kov";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 400;
	displayName = $STR_BUILT_HEDGEHOG;
	vehicleClass = "Fortifications";
	constructioncount = 1;
	removeoutput[] = {{"ItemTankTrap",1}};
	nounderground = 0;
	//Remove vanilla dismantle action
	class UserActions {delete Dismantle;};
};
// WorkBench_DZ
class WorkBench_DZ: BuiltItems
{
	scope = public;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\workbench.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 400;
	displayName = $STR_EPOCH_WORKBENCH;
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
	scope = public;
	model = "\z\addons\dayz_epoch\models\skull.p3d";
	displayName = "Belt Buckle";
	accuracy = 1000;
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,0.5,0.5,0.5,ca)"};
};

// Metal Panel
class MetalPanel_DZ: BuiltItems
{
	scope = public;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,2.5,0.5};
	model = "\ca\structures\wall\wall_indcnc2_3.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 4000;
	displayName = $STR_EPOCH_METALPANEL;
	vehicleClass = "Fortifications";
	constructioncount = 6;
	removeoutput[] = {{"metal_panel_kit",1}};
};

class FuelPump_DZ: BuiltItems
{
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,2,0};
	model = "\ca\Structures_E\Ind\Ind_FuelStation\Ind_FuelStation_Feed_ep1.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 400;
	displayName = $STR_EPOCH_FUELPUMP;
	vehicleClass = "Fortifications";
	constructioncount = 2;
	removeoutput[] = {{"fuel_pump_kit",1}};
	requireplot = 0;
	nounderground = 0;
};

class Fort_RazorWire : BuiltItems {
  scope = public;
  animated = 0;
  vehicleClass = "Fortifications";
  model = "\ca\misc\Fort_Razorwire";
  icon = "\Ca\misc\data\icons\I_drutkolczasty_CA.paa";
  offset[] = {0,1.5,0.5};
  accuracy = 0.3;
  mapSize = 5.5;
  displayName = $STR_EPOCH_WIRE;
  destrType = "DestructTent";
  armor = 100;
  GhostPreview = "Fort_RazorWirePreview";
  nounderground = 0;
};

class Sandbag1_DZ: BuiltItems
{
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	model = "\ca\misc2\BagFenceLong.p3d";
	icon = "\Ca\misc3\data\Icons\icon_fortBagFenceLong_ca.paa";
	offset[] = {0,3,0.5};
	mapSize = 2;
	armor = 400;
	displayName = $STR_BUILT_SANDBAG;
	vehicleClass = "Fortifications";
	constructioncount = 3;
	removeoutput[] = {{"ItemSandbag",1}};
	nounderground = 0;
	//Remove vanilla dismantle action
	class UserActions {delete Dismantle;};
};
//review some of these settings
class BagFenceRound_DZ: BuiltItems
{
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	model = "\ca\misc2\BagFenceRound.p3d";
	icon = "\Ca\misc3\data\Icons\icon_bagFenceRound_ca.paa";
	offset[] = {0,1.5,0.5};
	mapSize = 2;
	armor = 400;
	displayName = $STR_EQUIP_NAME_21_ROUND;
	vehicleClass = "Fortifications";
	constructioncount = 3;
	removeoutput[] = {{"BagFenceRound_DZ_kit",1}};
	nounderground = 0;
};

class Land_HBarrier1_DZ : BuiltItems {
	scope = public;
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
	displayName = $STR_EQUIP_NAME_21_HBARRIER;
	GhostPreview = "Land_HBarrier1Preview";
	constructioncount = 4;
	removeoutput[] = {{"ItemSandbagLarge",1}};
	nounderground = 0;
};
class Land_HBarrier3_DZ : BuiltItems {
	model = "\ca\misc2\HBarrier3.p3d";
	icon = "\Ca\misc2\data\Icons\icon_hescoBarrier3_ca.paa";
	mapSize = 3.5;
	displayName = $STR_EQUIP_NAME_21_3XHBARRIER;
	GhostPreview = "Land_HBarrier3ePreview";
	scope = public;
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
	displayName = $STR_EQUIP_NAME_21_5XHBARRIER;
	GhostPreview = "Land_HBarrier5Preview";
	scope = public;
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
	scope = public;
	model = "\ca\Misc_E\fortified_nest_small_ep1";
	displayName = $STR_EQUIP_NAME_21_NEST;
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
	scope = public;
	destrType = "DestructBuilding";
	cost = 100;

	model="\z\addons\dayz_epoch\models\ammo_supply.p3d";
	icon = "\ca\data\data\Unknown_object.paa";

	mapSize = 2;
	armor = 40;
	displayName = $STR_EPOCH_BULK_NAME;

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

class FireBarrel_DZ:Land_Fire_barrel
{
	// destrType = "DestructNo";
	cost = 100;
	offset[] = {0,2,0.5};
	//model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	displayName = $STR_EPOCH_FIREBARREL;	
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 400;
	vehicleClass = "Fortifications";
	constructioncount = 2;
	removeoutput[] = {{"ItemFireBarrel_kit",1}};
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
	scope = public;
	displayName = $STR_EPOCH_GUNRACK;
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
	scope = public;
	destrType = "DestructBuilding";
	offset[] = {0,2.5,0.5};
	armor = 200;
	displayName = $STR_EPOCH_WOODCRATE;
	vehicleClass = "Fortifications";
	transportMaxMagazines = 50;
	transportMaxWeapons = 5;
	transportMaxBackpacks = 1;
	removeoutput[] = {{"ItemWoodCrateKit",1}};
	nounderground = 0;
};
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

	scope = public;
	offset[] = {0,2.5,0.3};
	displayName = $STR_EPOCH_PLAYER_246;
	vehicleClass = "Fortifications";
	removeoutput[] = {{"plot_pole_kit",1}};
	requireplot = 0;
	nounderground = 0;
};
class USMC_WarfareBMGNest_M240;
class M240Nest_DZ: USMC_WarfareBMGNest_M240
{
	destrType = "DestructBuilding";
	armor = 450;
	scope = public;
	offset[] = {0,3.5,0};
	displayName = $STR_EPOCH_M240NEST;
	vehicleClass = "Fortifications";
	transportMaxMagazines = 25;
	transportMaxWeapons = 4;
	transportMaxBackpacks = 1;
	constructioncount = 10;
	removeoutput[] = {{"m240_nest_kit",1}};
	//class UserActions {delete Repair; delete Salvage;};
};
class Land_covering_hut_EP1;
class CanvasHut_DZ: Land_covering_hut_EP1
{
	armor = 200;
	scope = public;
	offset[] = {0,2.5,1};
	displayName = $STR_EPOCH_CANVASSUNSHADE;
	vehicleClass = "Fortifications";
	removeoutput[] = {{"sun_shade_kit",1}};
};
class Park_bench1;
class ParkBench_DZ: Park_bench1
{
	scope = public;
	offset[] = {0,1.5,0.5};
	displayName = $STR_EPOCH_WOODBENCH;
	vehicleClass = "Fortifications";
	removeoutput[] = {{"park_bench_kit",1}};
};
class Land_CamoNet_EAST_EP1;
class DesertCamoNet_DZ: Land_CamoNet_EAST_EP1
{
	armor = 300;
	destrType = "DestructNo";
	scope = public;
	offset[] = {0,9,0};
	displayName = $STR_EPOCH_DESERTCAMONET;
	vehicleClass = "Fortifications";
	removeoutput[] = {{"desert_net_kit",1}};
};
class Land_CamoNet_EAST;
class ForestCamoNet_DZ: Land_CamoNet_EAST
{
	armor = 300;
	destrType = "DestructNo";
	scope = public;
	offset[] = {0,9,0};
	displayName = $STR_EPOCH_FORESTCAMONET;
	vehicleClass = "Fortifications";
	removeoutput[] = {{"forest_net_kit",1}};
};
class Land_CamoNetB_EAST_EP1;
class DesertLargeCamoNet_DZ: Land_CamoNetB_EAST_EP1
{
	armor = 300;
	destrType = "DestructNo";
	scope = public;
	offset[] = {0,9,0};
	displayName = $STR_EPOCH_LARGEDESERTCAMONET;
	vehicleClass = "Fortifications";
	removeoutput[] = {{"desert_large_net_kit",1}};
};
class Land_Misc_deerstand;
class DeerStand_DZ: Land_Misc_deerstand
{
	armor = 300;
	// destrType = "DestructNo";
	scope = public;
	offset[] = {0,5,0};
	displayName = $STR_EPOCH_DEERSTAND;
	vehicleClass = "Fortifications";
	removeoutput[] = {{"deer_stand_kit",1}};
};
class Land_CamoNetB_EAST;
class ForestLargeCamoNet_DZ: Land_CamoNetB_EAST
{
	armor = 300;
	destrType = "DestructNo";
	scope = public;
	offset[] = {0,9,0};
	displayName = $STR_EPOCH_LARGEFORESTCAMONET;
	vehicleClass = "Fortifications";
	removeoutput[] = {{"forest_large_net_kit",1}};
};

class Land_Wall_Gate_Ind1_L;
class MetalGate_DZ: Land_Wall_Gate_Ind1_L
{
	armor = 400;
	scope = public;
	offset[] = {0,6,1};
	displayName = $STR_EPOCH_RUSTYGATE;
	vehicleClass = "Fortifications";
	removeoutput[] = {{"rusty_gate_kit",1}};
};
class Land_KBud;
class OutHouse_DZ: Land_KBud
{
	armor = 200;
	scope = public;
	offset[] = {0,2.5,1};
	displayName = $STR_EPOCH_OUTHOUSE;
	vehicleClass = "Fortifications";
	transportMaxMagazines = 4;
	transportMaxWeapons = 4;
	transportMaxBackpacks = 4;
	constructioncount = 2;
	class transportmagazines {};
};
class Land_Shed_M01;
class StorageShed_DZ: Land_Shed_M01
{
	armor = 1600;
	scope = public;
	offset[] = {0,4,1};
	displayName = $STR_EPOCH_STORAGESHED;
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
	scope = public;
	offset[] = {0,3,1};
	removeoutput[] = {{"ItemCorrugated",1}};
	displayName = $STR_EPOCH_CORRUGATEDFENCE;
	vehicleClass = "Fortifications";
	nounderground = 0;

};
class Land_kulna;
class WoodShack_DZ: Land_kulna
{
	scope = public;
	destrType = "DestructBuilding";
	offset[] = {0,4,1.3};
	armor = 800;
	displayName = $STR_EPOCH_WOODSHACK;
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
	scope = public;
	destrType = "DestructBuilding";
	//cost = 100;
	offset[] = {0,5,1};
	armor = 800;
	displayName = $STR_EPOCH_NICEWOODSHED;
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
	scope = public;
	offset[] = {0,4.5,0};
	displayName = $STR_EPOCH_STICKFENCE;
	vehicleClass = "Fortifications";
	removeoutput[] = {{"stick_fence_kit",1}};
};
class ASC_EU_LHVOld;
class LightPole_DZ: ASC_EU_LHVOld
{
	armor = 200;
	scope = public;
	offset[] = {0,2.5,0};
	displayName = $STR_EPOCH_LIGHTPOLE;
	vehicleClass = "Fortifications";
	maintainBuilding[] = {{"ItemLightBulb",1}};
	removeoutput[] = {{"light_pole_kit",1}};
};
class Land_Misc_Scaffolding;
class Scaffolding_DZ: Land_Misc_Scaffolding
{
	armor = 100;
	destrType = "DestructBuilding";
	scope = public;
	displayName = $STR_EPOCH_SCAFFOLDING;
	vehicleClass = "Fortifications";
	constructioncount = 6;
	animated = 0;
	irTarget = 0;
	accuracy = 0.3;
	transportAmmo = 0;
	transportRepair = 0;
	transportFuel = 0;
	typicalCargo[] = {};
	offset[] = {0,9,3};
	cost = 0;
	removeoutput[] = {{"ItemScaffoldingKit",1}};
};
class WoodGate_DZ: BuiltItems
{
	scope = public;
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

