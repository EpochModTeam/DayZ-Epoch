// belt buckle - no idea what this is used for
class Helper_Base_EP1;
class BeltBuckle_DZE : Helper_Base_EP1 {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\skull.p3d";
	displayName = "Belt Buckle";
	accuracy = 1000;
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,0.5,0.5,0.5,ca)"};
};

class WorkBench_DZ: ModularItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1.5,-0.05};
	model = "\z\addons\dayz_epoch\models\workbench.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 400;
	displayName = $STR_EPOCH_WORKBENCH;
	vehicleClass = "DayZ Epoch Buildables";
	maintainBuilding[] = {{"PartWoodLumber",1}};
	constructioncount = 1;
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
	displayName = $STR_EPOCH_FUELPUMP;
	vehicleClass = "DayZ Epoch Buildables";
	constructioncount = 2;
	removeoutput[] = {{"fuel_pump_kit",1}};
	requireplot = 0;
	nounderground = 0;
};

class FireBarrel_DZ: Land_Fire_barrel
{
	cost = 100;
	offset[] = {0,1.5,0};
	displayName = $STR_EPOCH_FIREBARREL;	
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 400;
	vehicleClass = "DayZ Epoch Buildables";
	constructioncount = 2;
	removeoutput[] = {{"ItemFireBarrel_kit",1}};
	nounderground = 0;
};	
	
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
	offset[] = {0,1.5,0};
	displayName = $STR_EPOCH_PLAYER_246;
	vehicleClass = "DayZ Epoch Buildables";
	removeoutput[] = {{"plot_pole_kit",1}};
	requireplot = 0;
	nounderground = 0;
};

class Land_covering_hut_EP1;
class CanvasHut_DZ: Land_covering_hut_EP1
{
	armor = 200;
	scope = 2;
	offset[] = {0,2.5,0};
	displayName = $STR_EPOCH_CANVASSUNSHADE;
	vehicleClass = "DayZ Epoch Buildables";
	removeoutput[] = {{"sun_shade_kit",1}};
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
};

class Park_bench1;
class ParkBench_DZ: Park_bench1
{
	scope = 2;
	offset[] = {0,1.5,0};
	displayName = $STR_EPOCH_WOODBENCH;
	vehicleClass = "DayZ Epoch Buildables";
	removeoutput[] = {{"park_bench_kit",1}};
};

class Land_Misc_deerstand;
class DeerStand_DZ: Land_Misc_deerstand
{
	armor = 300;
	scope = 2;
	offset[] = {0,5,0};
	displayName = $STR_EPOCH_DEERSTAND;
	vehicleClass = "DayZ Epoch Buildables";
	removeoutput[] = {{"deer_stand_kit",1}};
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	nounderground = 0;
};

class Land_Wall_Gate_Ind1_L;
class MetalGate_DZ: Land_Wall_Gate_Ind1_L
{
	armor = 400;
	scope = 2;
	offset[] = {2,3,0};
	displayName = $STR_EPOCH_RUSTYGATE;
	vehicleClass = "DayZ Epoch Buildables";
	removeoutput[] = {{"rusty_gate_kit",1}};
};

class Fence_corrugated_plate;
class Fence_corrugated_DZ: Fence_corrugated_plate
{
	armor = 600;
	scope = 2;
	offset[] = {0,3,-0.1};
	removeoutput[] = {{"ItemCorrugated",1}};
	displayName = $STR_EPOCH_CORRUGATEDFENCE;
	vehicleClass = "DayZ Epoch Buildables";
};

class Wall_FenW2_6_EP1;
class StickFence_DZ: Wall_FenW2_6_EP1
{
	destrType = "DestructTree";
	armor = 200;
	scope = 2;
	offset[] = {0,4.5,0};
	displayName = $STR_EPOCH_STICKFENCE;
	vehicleClass = "DayZ Epoch Buildables";
	removeoutput[] = {{"stick_fence_kit",1}};
};
class ASC_EU_LHVOld;
class LightPole_DZ: ASC_EU_LHVOld
{
	armor = 200;
	scope = 2;
	offset[] = {0,2.5,0};
	displayName = $STR_EPOCH_LIGHTPOLE;
	vehicleClass = "DayZ Epoch Buildables";
	maintainBuilding[] = {{"ItemLightBulb",1}};
	removeoutput[] = {{"light_pole_kit",1}};
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
};
class Land_Misc_Scaffolding;
class Scaffolding_DZ: Land_Misc_Scaffolding
{
	armor = 100;
	destrType = "DestructBuilding";
	scope = 2;
	displayName = $STR_EPOCH_SCAFFOLDING;
	vehicleClass = "DayZ Epoch Buildables";
	constructioncount = 6;
	animated = 0;
	irTarget = 0;
	accuracy = 0.3;
	transportAmmo = 0;
	transportRepair = 0;
	transportFuel = 0;
	typicalCargo[] = {};
	offset[] = {0,10.5,0};
	cost = 0;
	removeoutput[] = {{"ItemScaffoldingKit",1}};
};

class Hedgehog_DZ: BuiltItems
{
	scope = 2;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model = "\ca\misc\jezek_kov";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 400;
	displayName = $STR_BUILT_HEDGEHOG;
	vehicleClass = "DayZ Epoch Buildables";
	constructioncount = 1;
	removeoutput[] = {{"ItemTankTrap",1}};
	nounderground = 0;
	//Remove vanilla dismantle action
	class UserActions {delete Dismantle;};
};
class MetalPanel_DZ: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,2.5,0};
	model = "\ca\structures\wall\wall_indcnc2_3.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 4000;
	displayName = $STR_EPOCH_METALPANEL;
	vehicleClass = "DayZ Epoch Buildables";
	constructioncount = 6;
	removeoutput[] = {{"metal_panel_kit",1}};
};

class Fort_RazorWire : BuiltItems {
	scope = 2;
	vehicleClass = "DayZ Epoch Buildables";
	model = "\ca\misc\Fort_Razorwire";
	icon = "\Ca\misc\data\icons\I_drutkolczasty_CA.paa";
	offset[] = {0,5,-0.05};
	mapSize = 3;
	displayName = $STR_EPOCH_WIRE;
	destrType = "DestructTent";
	armor = 500;
	nounderground = 0;
	removeoutput[] = {{"ItemWire",1}};
};

class FortifiedWire_DZ : ModularItems {
	scope = 2;
	vehicleClass = "DayZ Epoch Buildables";
	model = "\ca\misc\Barbedwire";
	icon = "\Ca\misc\data\icons\I_drutkolczasty_CA.paa";
	offset[] = {0,4,-0.05};
	mapSize = 3;
	displayName = $STR_EQUIP_NAME_FORT_WIRE;
	destrType = "DestructTent";
	armor = 750;
	nounderground = 0;
};

class BarbedGate_DZ: ModularItems {
	scope = 2;
	offset[] = {0,4,0};
	model = "ca\misc2\BarbGate.p3d";
	armor = 3000;
	displayName = $STR_EQUIP_NAME_BARBED_GATE;
	destrType = "DestructBuilding";
	maintainBuilding[] = {{"ItemWire",1}};
	constructioncount = 2;

	class AnimationSources
	{
		class Door01 {
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
			condition = "this animationPhase 'Door01' == 1";
			statement = "this animate ['Door01', 0];";
		};
		class OpenDoor
		{
			position = "";
			displayName = "Open Door";
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "this animationPhase 'Door01' == 0";
			statement = "this animate ['Door01', 1];";
		};
	};
};

class WoodGate_DZ: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	offset[] = {0,1.5,0};
	model = "\ca\structures\Wall\Gate_wood2_5";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 100;
	displayName = "Wood Panel";
	vehicleClass = "DayZ Epoch Buildables";

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

class ConcreteBarrier_DZ: ModularItems {
	scope = 2;
	offset[] = {0,2,-0.05};
	model = "\ca\misc3\CncBlock.p3d";
	armor = 4000;
	vehicleClass = "DayZ Epoch Buildables";
	displayName = $STR_EQUIP_NAME_CNC_BARRIER;
	maintainBuilding[] = {{"CementBag",1}};
	destrType = "DestructBuilding";
	constructioncount = 1;
	nounderground = 0;
};

class ConcreteBarrierStriped_DZ: ModularItems {
	scope = 2;
	offset[] = {0,2,-0.05};
	model = "\ca\misc3\CncBlock_stripes.p3d";
	armor = 4000;
	vehicleClass = "DayZ Epoch Buildables";
	displayName = $STR_EQUIP_NAME_CNC_BARRIER_STRIPED;
	maintainBuilding[] = {{"CementBag",1}};
	destrType = "DestructBuilding";
	constructioncount = 1;
	nounderground = 0;
};

class ConcreteWall_DZ: ModularItems {
	scope = 2;
	offset[] = {0,3,0};
	model = "\ca\mp_armory\misc\concrete_wall\concrete_wall.p3d";
	armor = 10000;
	vehicleClass = "DayZ Epoch Buildables";
	displayName = $STR_EQUIP_NAME_CONCRETE_WALL;
	maintainBuilding[] = {{"CementBag",1}};
	destrType = "DestructBuilding";
	constructioncount = 3;
};

class ConcretePipe_DZ: ModularItems {
	scope = 2;
	offset[] = {0,3,0};
	model = "\ca\structures_e\misc\misc_construction\misc_concpipeline_ep1.p3d";
	armor = 10000;
	vehicleClass = "DayZ Epoch Buildables";
	displayName = $STR_EQUIP_NAME_CONCRETE_PIPE;
	maintainBuilding[] = {{"CementBag",1}};
	destrType = "DestructBuilding";
	constructioncount = 3;
};

class DragonTeeth_DZ: ModularItems {
	scope = 2;
	offset[] = {0,5.5,0};
	model = "\ca\misc3\dragonTeeth\dragonTeeth.p3d";
	armor = 10000;
	vehicleClass = "DayZ Epoch Buildables";
	displayName = $STR_EQUIP_NAME_DRAGONTEETH;
	maintainBuilding[] = {{"CementBag",1}};
	destrType = "DestructBuilding";
	constructioncount = 3;
};

class DragonTeethBig_DZ: ModularItems {
	scope = 2;
	offset[] = {0,5.5,0};
	model = "\ca\misc3\dragonTeeth\dragonTeethBig.p3d";
	armor = 10000;
	vehicleClass = "DayZ Epoch Buildables";
	displayName = $STR_EQUIP_NAME_DRAGONTEETH_BIG;
	maintainBuilding[] = {{"CementBag",1}};
	destrType = "DestructBuilding";
	constructioncount = 3;
};
class SimpleFootbridge_DZ: ModularItems {
	scope = 2;
	offset[] = {0,4,0.05};
	useModelCenter = 1;
	model = "mbg_killhouses\m\MBG_Woodplanks.p3d";
	armor = 200;
	nounderground = 0;
	displayName = $STR_EQUIP_NAME_SIMPLE_FOOTBRIDGE;
	maintainBuilding[] = {{"ItemPlank",1}};
};

class WoodenFootbridge_DZ: ModularItems {
	scope = 2;
	offset[] = {0,3.5,0};
	useModelCenter = 1;
	model = "ca\misc_acr\scaffoldingsmall\misc_crossing0st.p3d";
	armor = 200;
	nounderground = 0;
	displayName = $STR_EQUIP_NAME_WOODEN_FOOTBRIDGE;
	maintainBuilding[] = {{"ItemPlank",1}};
};

class Windbreak_DZ: ModularItems {
	scope = 2;
	offset[] = {0,3,-0.1};
	model = "ca\structures\Misc\Misc_WindBreak\Misc_WindBreak.p3d";
	armor = 1000;
	nounderground = 0;
	displayName = $STR_EQUIP_NAME_WINDBREAK;
	maintainBuilding[] = {{"ItemPlank",1}};
};

class MetalContainer1A_DZ: ModularItems {
	scope = 2;
	offset[] = {0,5,0};
	model = "ca\buildings2\Misc_Cargo\Misc_Cargo1A.p3d";	// red
	armor = 20000;
	displayName = $STR_EQUIP_NAME_METAL_CONTAINER_1A;
	destrType = "DestructBuilding";
	maintainBuilding[] = {{"equip_metal_sheet",2}};
	constructioncount = 3;
};

class MetalContainer1B_DZ: ModularItems {
	scope = 2;
	offset[] = {0,5,0};
	model = "ca\buildings2\Misc_Cargo\Misc_Cargo1B.p3d";	// green
	armor = 20000;
	displayName = $STR_EQUIP_NAME_METAL_CONTAINER_1B;
	destrType = "DestructBuilding";
	maintainBuilding[] = {{"equip_metal_sheet",2}};
	constructioncount = 3;
};

class MetalContainer1G_DZ: ModularItems {
	scope = 2;
	offset[] = {0,5,0};
	model = "ca\buildings2\Misc_Cargo\Misc_Cargo1G.p3d";	// white
	armor = 20000;
	displayName = $STR_EQUIP_NAME_METAL_CONTAINER_1G;
	destrType = "DestructBuilding";
	maintainBuilding[] = {{"equip_metal_sheet",2}};
	constructioncount = 3;
};

class MetalContainer2D_DZ: ModularItems {
	scope = 2;
	offset[] = {0,5,0};
	model = "ca\buildings2\Misc_Cargo\Misc_Cargo2D.p3d";	// 2x red
	armor = 40000;
	displayName = $STR_EQUIP_NAME_METAL_CONTAINER_2D;
	destrType = "DestructBuilding";
	maintainBuilding[] = {{"equip_metal_sheet",4}};
	constructioncount = 5;
};

class Notebook;
class Notebook_DZ: Notebook 
{
	scope = 2;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	displayName = $STR_EPOCH_NOTEBOOK;
	constructioncount = 1;
	offset[] = {0,2,0};
	nounderground = 0;
	removeoutput[] = {{"notebook_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};

class Water_Pump_DZ: Land_pumpa 
{
	scope = 2;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	displayName = $STR_EPOCH_WATERPUMP;
	constructioncount = 1;
	offset[] = {0,2,0};
	removeoutput[] = {{"water_pump_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};

class MAP_Misc_Greenhouse;
class Greenhouse_DZ: MAP_Misc_Greenhouse 
{
	scope = 2;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	displayName = $STR_EPOCH_GREENHOUSE;
	constructioncount = 1;
	offset[] = {0,5,0};
	removeoutput[] = {{"greenhouse_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};

class MAP_F_postel_panelak2;
class Bed_DZ: MAP_F_postel_panelak2
{
	scope = 2;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	displayName = $STR_EPOCH_BED;
	constructioncount = 1;
	offset[] = {0,2,0};
	removeoutput[] = {{"bed_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};

class MAP_stul_hospoda;
class Table_DZ: MAP_stul_hospoda
{
	scope = 2;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	displayName = $STR_EPOCH_TABLE;
	constructioncount = 1;
	offset[] = {0,2,0};
	removeoutput[] = {{"table_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};
	
class Office_Chair_DZ: BuiltItems 
{
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\storage\office_chair";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	displayName = $STR_EPOCH_CHAIR;
	constructioncount = 1;
	offset[] = {0,2,0};
	removeoutput[] = {{"office_chair_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};	

class Land_MBG_Garage_Single_D;
class Garage_Green_DZ: Land_MBG_Garage_Single_D
{
	scope = 2;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	displayName = $STR_EPOCH_GARAGE_GREEN;
	constructioncount = 3;
	offset[] = {0,6,0};
	removeoutput[] = {{"garage_green_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};

class Land_MBG_Garage_Single_A;
class Garage_White_DZ: Land_MBG_Garage_Single_A
{
	scope = 2;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	displayName = $STR_EPOCH_GARAGE_WHITE;
	constructioncount = 3;
	offset[] = {0,6,0};
	removeoutput[] = {{"garage_white_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};

class Land_MBG_Garage_Single_B;
class Garage_Brown_DZ: Land_MBG_Garage_Single_B
{
	scope = 2;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	displayName = $STR_EPOCH_GARAGE_BROWN;
	constructioncount = 3;
	offset[] = {0,6,0};
	removeoutput[] = {{"garage_brown_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};

class Land_MBG_Garage_Single_C;
class Garage_Grey_DZ: Land_MBG_Garage_Single_C
{
	scope = 2;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	displayName = $STR_EPOCH_GARAGE_GREY;
	constructioncount = 3;
	offset[] = {0,6,0};
	removeoutput[] = {{"garage_grey_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};

class HeliHCivil;
class Helipad_Civil_DZ: HeliHCivil
{
	scope = 2;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	displayName = $STR_EPOCH_HELIPAD_CIVIL;
	constructioncount = 1;
	offset[] = {0,4,0};
	removeoutput[] = {{"helipad_civil_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};

class HeliHRescue;
class Helipad_Rescue_DZ: HeliHRescue
{
	scope = 2;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	displayName = $STR_EPOCH_HELIPAD_RESCUE;
	constructioncount = 1;
	offset[] = {0,4,0};
	removeoutput[] = {{"helipad_rescue_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};

class MAP_Heli_H_army;
class Helipad_Army_DZ: MAP_Heli_H_army
{
	scope = 2;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	displayName = $STR_EPOCH_HELIPAD_ARMY;
	constructioncount = 1;
	offset[] = {0,4,0};
	removeoutput[] = {{"helipad_army_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};

class MAP_Heli_H_cross;
class Helipad_Cross_DZ: MAP_Heli_H_cross
{
	scope = 2;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	displayName = $STR_EPOCH_HELIPAD_CROSS;
	constructioncount = 1;
	offset[] = {0,4,0};
	removeoutput[] = {{"helipad_cross_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};

class Sr_border;
class Helipad_ParkBorder_DZ: Sr_border
{
	scope = 2;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	displayName = $STR_EPOCH_HELIPAD_PARKBORDER;
	constructioncount = 1;
	offset[] = {0,4,0};
	removeoutput[] = {{"helipad_parkborder_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};

class Loudspeaker;
class CCTV_DZ: Loudspeaker
{
	scope = 2;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	displayName = $STR_EPOCH_CCTV;
	constructioncount = 2;
	offset[] = {0,4,0};
	removeoutput[] = {{"cctv_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};