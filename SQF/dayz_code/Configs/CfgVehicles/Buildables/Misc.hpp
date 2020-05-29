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
	displayName = $STR_EPOCH_WORKBENCH;
	vehicleClass = "DayZ Epoch Buildables";
	maintainBuilding[] = {{"PartWoodLumber",1}};
	constructioncount = 1;
	removeoutput[] = {{"PartWoodPlywood",1},{"PartWoodLumber",2}};
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
	offset[] = {0,2.5,0.3};
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
	offset[] = {0,2.5,1};
	displayName = $STR_EPOCH_CANVASSUNSHADE;
	vehicleClass = "DayZ Epoch Buildables";
	removeoutput[] = {{"sun_shade_kit",1}};
};
class Park_bench1;
class ParkBench_DZ: Park_bench1
{
	scope = 2;
	offset[] = {0,1.5,0.5};
	displayName = $STR_EPOCH_WOODBENCH;
	vehicleClass = "DayZ Epoch Buildables";
	removeoutput[] = {{"park_bench_kit",1}};
};
class Land_CamoNet_EAST_EP1;
class DesertCamoNet_DZ: Land_CamoNet_EAST_EP1
{
	armor = 300;
	destrType = "DestructNo";
	scope = 2;
	offset[] = {0,9,0};
	displayName = $STR_EPOCH_DESERTCAMONET;
	vehicleClass = "DayZ Epoch Buildables";
	removeoutput[] = {{"desert_net_kit",1}};
};
class Land_CamoNet_EAST;
class ForestCamoNet_DZ: Land_CamoNet_EAST
{
	armor = 300;
	destrType = "DestructNo";
	scope = 2;
	offset[] = {0,9,0};
	displayName = $STR_EPOCH_FORESTCAMONET;
	vehicleClass = "DayZ Epoch Buildables";
	removeoutput[] = {{"forest_net_kit",1}};
};
class Land_CamoNetB_EAST_EP1;
class DesertLargeCamoNet_DZ: Land_CamoNetB_EAST_EP1
{
	armor = 300;
	destrType = "DestructNo";
	scope = 2;
	offset[] = {0,9,0};
	displayName = $STR_EPOCH_LARGEDESERTCAMONET;
	vehicleClass = "DayZ Epoch Buildables";
	removeoutput[] = {{"desert_large_net_kit",1}};
};
class Land_Misc_deerstand;
class DeerStand_DZ: Land_Misc_deerstand
{
	armor = 300;
	// destrType = "DestructNo";
	scope = 2;
	offset[] = {0,5,0};
	displayName = $STR_EPOCH_DEERSTAND;
	vehicleClass = "DayZ Epoch Buildables";
	removeoutput[] = {{"deer_stand_kit",1}};
};
class Land_CamoNetB_EAST;
class ForestLargeCamoNet_DZ: Land_CamoNetB_EAST
{
	armor = 300;
	destrType = "DestructNo";
	scope = 2;
	offset[] = {0,9,0};
	displayName = $STR_EPOCH_LARGEFORESTCAMONET;
	vehicleClass = "DayZ Epoch Buildables";
	removeoutput[] = {{"forest_large_net_kit",1}};
};

class Land_Wall_Gate_Ind1_L;
class MetalGate_DZ: Land_Wall_Gate_Ind1_L
{
	armor = 400;
	scope = 2;
	offset[] = {0,6,1};
	displayName = $STR_EPOCH_RUSTYGATE;
	vehicleClass = "DayZ Epoch Buildables";
	removeoutput[] = {{"rusty_gate_kit",1}};
};

class Fence_corrugated_plate;
class Fence_corrugated_DZ: Fence_corrugated_plate
{
	armor = 600;
	scope = 2;
	offset[] = {0,3,1};
	removeoutput[] = {{"ItemCorrugated",1}};
	displayName = $STR_EPOCH_CORRUGATEDFENCE;
	vehicleClass = "DayZ Epoch Buildables";
	nounderground = 0;
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
	offset[] = {0,9,3};
	cost = 0;
	removeoutput[] = {{"ItemScaffoldingKit",1}};
};

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
	offset[] = {0,2.5,0.5};
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
  animated = 0;
  vehicleClass = "DayZ Epoch Buildables";
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
	scope = 2;
	destrType = "DestructNo";
	cost = 100;
	model = "\ca\misc2\BagFenceLong.p3d";
	icon = "\Ca\misc3\data\Icons\icon_fortBagFenceLong_ca.paa";
	offset[] = {0,3,0.5};
	mapSize = 2;
	armor = 400;
	displayName = $STR_BUILT_SANDBAG;
	vehicleClass = "DayZ Epoch Buildables";
	constructioncount = 3;
	removeoutput[] = {{"ItemSandbag",1}};
	nounderground = 0;
	//Remove vanilla dismantle action
	class UserActions {delete Dismantle;};
};
//review some of these settings
class BagFenceRound_DZ: BuiltItems
{
	scope = 2;
	destrType = "DestructNo";
	cost = 100;
	model = "\ca\misc2\BagFenceRound.p3d";
	icon = "\Ca\misc3\data\Icons\icon_bagFenceRound_ca.paa";
	offset[] = {0,3,0.5};
	mapSize = 2;
	armor = 400;
	displayName = $STR_EQUIP_NAME_21_ROUND;
	vehicleClass = "DayZ Epoch Buildables";
	constructioncount = 3;
	removeoutput[] = {{"BagFenceRound_DZ_kit",1}};
	nounderground = 0;
};

class Land_HBarrier1_DZ : BuiltItems {
	scope = 2;
	animated = 0;
	vehicleClass = "DayZ Epoch Buildables";
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
	scope = 2;
	animated = 0;
	vehicleClass = "DayZ Epoch Buildables";
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
	scope = 2;
	animated = 0;
	vehicleClass = "DayZ Epoch Buildables";
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
	displayName = $STR_EQUIP_NAME_21_NEST;
	expansion = 1;
	icon = "\Ca\misc3\data\Icons\icon_fortNestSmall_ca.paa";
	mapSize = 5;
	armor = 500;
	irTarget = 0;
	vehicleClass = "DayZ Epoch Buildables";
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

class USMC_WarfareBMGNest_M240;
class M240Nest_DZ: USMC_WarfareBMGNest_M240
{
	destrType = "DestructBuilding";
	armor = 450;
	scope = 2;
	offset[] = {0,3.5,0};
	displayName = $STR_EPOCH_M240NEST;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxMagazines = 25;
	transportMaxWeapons = 4;
	transportMaxBackpacks = 1;
	constructioncount = 10;
	removeoutput[] = {{"m240_nest_kit",1}};
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

