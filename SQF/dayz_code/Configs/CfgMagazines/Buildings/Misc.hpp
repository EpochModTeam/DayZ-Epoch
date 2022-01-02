class ItemFireBarrel_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_FIREBARRELKIT;
	descriptionShort = $STR_EPOCH_FIREBARRELKIT_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "FireBarrel_DZ";
		};
	};
};

class workbench_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WORKBENCH;
	descriptionShort = $STR_EPOCH_WORKBENCH_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WorkBench_DZ";
		};
	};
};

class advanced_workBench_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WORKBENCH_ADVANCED;
	descriptionShort = $STR_EPOCH_WORKBENCH_ADVANCED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Advanced_WorkBench_DZ";
		};
	};
};

// DayZ Mod workbench
class ItemWorkBench: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_BLD_name_ItemWorkBench;//"Work Bench (Packed)"
	model = "z\addons\dayz_buildings\models\workbench_flat.p3d";
	picture = "\z\addons\dayz_buildings\equip\item_workbench.paa"; // add to PBO
	descriptionShort = $STR_BLD_desc_ItemWorkBench;//"A Folded Workbench, required for House Building and Some Crafting"
	vehicle = "WorkBench";
	sfx = "tentunpack";

	class ItemActions
	{
		class Build
		{
			text = $STR_BLD_build_ItemWorkBench;//"place WorkBench"
			script = "; ['ItemWorkBench','Build'] spawn player_buildPlaceables;";
			require[] = {};
			consume[] = {"ItemWorkBench"};
			create = "WorkBench";
		};
	};
};

class ItemWorkBench_DZE : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_BLD_name_ItemWorkBench;//"Work Bench (Packed)"
	model = "z\addons\dayz_buildings\models\workbench_flat.p3d";
	picture = "\z\addons\dayz_buildings\equip\item_workbench.paa"; // add to PBO
	descriptionShort = $STR_BLD_desc_ItemWorkBench;//"A Folded Workbench, required for House Building and Some Crafting"
	
	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WorkBench_DZE";
		};
	};
}; 
class wood_ramp_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODRAMP;
	descriptionShort = $STR_EPOCH_WOODENRAMP_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "WoodRamp_DZ";
		};
	};
};

class plot_pole_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_PLAYER_246;
	descriptionShort = $STR_EPOCH_PLOT_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "Plastic_Pole_EP1_DZ";
		};
	};
};

class metal_panel_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_METALPANEL;
	descriptionShort = $STR_EPOCH_METALPANEL_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "MetalPanel_DZ";
		};
	};
};

class ItemCorrugated: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CORRUGATEDFENCE;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_CORRUGATEDFENCE_DESC;

	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_214;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "Fence_corrugated_DZ";
		};
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_215;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","Handsaw_DZE"};
			output[] = {{"wooden_shed_kit",1}};
			input[] = {{"ItemCorrugated",2},{"PartWoodPlywood",4},{"PartWoodLumber",4}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_PLAYER_217;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","Handsaw_DZE"};
			output[] = {{"outhouse_kit",1}};
			input[] = {{"ItemCorrugated",1},{"PartWoodPlywood",3},{"PartWoodLumber",3},{"ItemTrashToiletpaper",1}};
		};
		class Crafting2
		{
			text = $STR_EPOCH_PLAYER_216;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemCrowbar","Handsaw_DZE"};
			output[] = {{"storage_shed_kit",1}};
			input[] = {{"ItemCorrugated",4},{"PartWoodPlywood",2},{"PartWoodLumber",2}};
		};
	};
};

class ItemWire: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	model = "\dayz_equip\models\Fence_wire_kit.p3d";
	picture = "\dayz_equip\textures\equip_fencewire_kit_CA.paa";
	displayName = $STR_EQUIP_NAME_WIRE_FENCE;
	descriptionShort = $STR_EQUIP_DESC_WIRE_FENCE;

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTION_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			consume[] = {"ItemWire"};
			create = "Fort_RazorWire"; // vanilla uses Wire_cat1
			byPass = "byPassRoadCheck";
		};
		class Crafting
		{
			text = $STR_ACTION_CRAFT_FORT_WIRE;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"fortified_wire_kit",1}};
			input[] = {{"ItemWire",1},{"ItemTankTrap",2}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_ACTION_CRAFT_BARBED_GATE;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"barbed_gate_kit",1}};
			input[] = {{"ItemWire",1},{"ItemTankTrap",2},{"ItemPole",2}};
		};
	};
};

class fortified_wire_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	displayName = $STR_EQUIP_NAME_FORT_WIRE;
	descriptionShort = $STR_EQUIP_DESC_FORT_WIRE;

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTION_BUILD_FORT_WIRE;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			consume[] = {"fortified_wire_kit"};
			create = "FortifiedWire_DZ";
			byPass = "byPassRoadCheck";
		};
	};
};

class ItemTankTrap: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	model = "\dayz_equip\models\tank_trap_kit.p3d";
	picture = "\dayz_equip\textures\equip_tanktrap_kit_CA.paa";
	displayName = $STR_EQUIP_NAME_TANK_TRAP;
	descriptionShort = $STR_EQUIP_DESC_TANK_TRAP;

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTION_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			consume[] = {"ItemTankTrap"};
			create = "Hedgehog_DZ";
			byPass = "byPassRoadCheck";
		};
		class Crafting
		{
			text = $STR_ACTION_CRAFT_FORT_WIRE;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"fortified_wire_kit",1}};
			input[] = {{"ItemTankTrap",2},{"ItemWire",1}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_ACTION_CRAFT_BARBED_GATE;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"barbed_gate_kit",1}};
			input[] = {{"ItemWire",1},{"ItemTankTrap",2},{"ItemPole",2}};
		};
	};
};

class barbed_gate_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	displayName = $STR_EQUIP_NAME_BARBED_GATE;
	descriptionShort = $STR_EQUIP_DESC_BARBED_GATE;

	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_ACTION_BUILD_BARBED_GATE;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			consume[] = {"barbed_gate_kit"};
			create = "BarbedGate_DZ";
		};
	};
};

class ItemGenerator: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	model = "\dayz_equip\models\generator_gear.p3d";
	picture = "\dayz_equip\textures\equip_generator_ca.paa";
	displayName = $STR_EQUIP_NAME_31;
	descriptionShort = $STR_EQUIP_DESC_31;

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTION_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			consume[] = {"ItemGenerator"};
			create = "Generator_DZ";
		};
	};
};

class fuel_pump_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_FUELPUMP;
	descriptionShort = $STR_EPOCH_FUELPUMP;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "FuelPump_DZ";
		};
	};
};

class light_pole_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LIGHTPOLE;
	descriptionShort = $STR_EPOCH_LIGHTPOLE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "LightPole_DZ";
		};
	};
};

class deer_stand_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_DEERSTAND;
	descriptionShort = $STR_EPOCH_DEERSTAND_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "DeerStand_DZ";
		};
	};
};

class m240_nest_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_M240NEST;
	descriptionShort = $STR_EPOCH_M240NEST;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "M240Nest_DZ";
		};
	};
};

class rusty_gate_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_RUSTYGATE;
	descriptionShort = $STR_EPOCH_RUSTYGATE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "MetalGate_DZ";
		};
	};
};

class stick_fence_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_STICKFENCE;
	descriptionShort = $STR_EPOCH_STICKFENCE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "StickFence_DZ";
		};
	};
};

class sun_shade_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CANVASSUNSHADE;
	descriptionShort = $STR_EPOCH_CANVASSUNSHADE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CanvasHut_DZ";
		};
	};
};

class park_bench_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODBENCH;
	descriptionShort = $STR_EPOCH_WOODBENCH;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ParkBench_DZ";
		};
	};
};

class ItemScaffoldingKit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_SCAFFOLDING;
	descriptionShort = $STR_EPOCH_SCAFFOLDING;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "Scaffolding_DZ";
		};
	};
};

class notebook_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_NOTEBOOK;
	descriptionShort = $STR_EPOCH_NOTEBOOK_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {};
			create = "Notebook_DZ";
		};
	};
};

class water_pump_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WATERPUMP;
	descriptionShort = $STR_EPOCH_WATERPUMP_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Water_Pump_DZ";
		};
	};
};

class greenhouse_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_GREENHOUSE;
	descriptionShort = $STR_EPOCH_GREENHOUSE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Greenhouse_DZ";
		};
	};
};

class bed_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_BED;
	descriptionShort = $STR_EPOCH_BED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Bed_DZ";
		};
	};
};

class table_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_TABLE;
	descriptionShort = $STR_EPOCH_TABLE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Table_DZ";
		};
	};
};

class office_chair_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CHAIR;
	descriptionShort = $STR_EPOCH_CHAIR_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Office_Chair_DZ";
		};
	};
};

class garage_green_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_GARAGE_GREEN;
	descriptionShort = $STR_EPOCH_GARAGE_GREEN_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Garage_Green_DZ";
		};
	};
};

class garage_white_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_GARAGE_WHITE;
	descriptionShort = $STR_EPOCH_GARAGE_WHITE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Garage_White_DZ";
		};
	};
};

class garage_brown_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_GARAGE_BROWN;
	descriptionShort = $STR_EPOCH_GARAGE_BROWN_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Garage_Brown_DZ";
		};
	};
};

class garage_grey_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_GARAGE_GREY;
	descriptionShort = $STR_EPOCH_GARAGE_GREY_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Garage_Grey_DZ";
		};
	};
};

class helipad_civil_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_HELIPAD_CIVIL;
	descriptionShort = $STR_EPOCH_HELIPAD_CIVIL_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Helipad_Civil_DZ";
		};
	};
};

class helipad_rescue_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_HELIPAD_RESCUE;
	descriptionShort = $STR_EPOCH_HELIPAD_RESCUE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Helipad_Rescue_DZ";
		};
	};
};

class helipad_army_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_HELIPAD_ARMY;
	descriptionShort = $STR_EPOCH_HELIPAD_ARMY_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Helipad_Army_DZ";
		};
	};
};

class helipad_cross_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_HELIPAD_CROSS;
	descriptionShort = $STR_EPOCH_HELIPAD_CROSS_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Helipad_Cross_DZ";
		};
	};
};

class helipad_parkborder_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_HELIPAD_PARKBORDER;
	descriptionShort = $STR_EPOCH_HELIPAD_PARKBORDER_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Helipad_ParkBorder_DZ";
		};
	};
};

class cctv_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CCTV;
	descriptionShort = $STR_EPOCH_CCTV_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CCTV_DZ";
		};
	};
};

class concrete_barrier_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_CNC_BARRIER;
	descriptionShort = $STR_EQUIP_DESC_CNC_BARRIER;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_ACTION_BUILD_CNC_BARRIER;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ConcreteBarrier_DZ";
		};
		class Crafting
		{
			text = $STR_EPOCH_ACTION_CRAFT_CNC_BARRIER_STRIPED;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"concrete_barrier_striped_kit",1}};
			input[] = {{"concrete_barrier_kit",1}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_ACTION_CRAFT_CONCRETE_WALL;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemSledge"};
			output[] = {{"concrete_wall_kit",1}};
			input[] = {{"concrete_barrier_kit",5},{"CementBag",2}};
		};
		class Crafting2
		{
			text = $STR_EPOCH_ACTION_CRAFT_CONCRETE_PIPE;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemSledge"};
			output[] = {{"concrete_pipe_kit",1}};
			input[] = {{"concrete_barrier_kit",6},{"CementBag",2}};
		};
	};
};

class concrete_barrier_striped_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_CNC_BARRIER_STRIPED;
	descriptionShort = $STR_EQUIP_DESC_CNC_BARRIER_STRIPED;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_ACTION_BUILD_CNC_BARRIER_STRIPED;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ConcreteBarrierStriped_DZ";
		};
		class Crafting
		{
			text = $STR_EPOCH_ACTION_CRAFT_CNC_BARRIER;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"concrete_barrier_kit",1}};
			input[] = {{"concrete_barrier_striped_kit",1}};
		};
	};
};

class concrete_wall_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_CONCRETE_WALL;
	descriptionShort = $STR_EQUIP_DESC_CONCRETE_WALL;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_ACTION_BUILD_CONCRETE_WALL;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ConcreteWall_DZ";
		};
		class Crafting
		{
			text = $STR_EPOCH_ACTION_CRAFT_DRAGONTEETH;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemSledge"};
			output[] = {{"dragonteeth_kit",1}};
			input[] = {{"concrete_wall_kit",1},{"ItemStone",6},{"CementBag",4}};
		};
	};
};

class concrete_pipe_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_CONCRETE_PIPE;
	descriptionShort = $STR_EQUIP_DESC_CONCRETE_PIPE;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_ACTION_BUILD_CONCRETE_PIPE;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ConcretePipe_DZ";
		};
	};
};

class dragonteeth_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_DRAGONTEETH;
	descriptionShort = $STR_EQUIP_DESC_DRAGONTEETH;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_ACTION_BUILD_DRAGONTEETH;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "DragonTeeth_DZ";
		};
		class Crafting
		{
			text = $STR_EPOCH_ACTION_CRAFT_DRAGONTEETH_BIG;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemSledge"};
			output[] = {{"dragonteeth_big_kit",1}};
			input[] = {{"dragonteeth_kit",1},{"ItemStone",6},{"CementBag",4}};
		};
	};
};

class dragonteeth_big_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_DRAGONTEETH_BIG;
	descriptionShort = $STR_EQUIP_DESC_DRAGONTEETH_BIG;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_ACTION_BUILD_DRAGONTEETH_BIG;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "DragonTeethBig_DZ";
		};
	};
};

class simple_footbridge_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_SIMPLE_FOOTBRIDGE;
	descriptionShort = $STR_EQUIP_DESC_SIMPLE_FOOTBRIDGE;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_ACTION_BUILD_SIMPLE_FOOTBRIDGE;
			script = "spawn player_build;";
			require[] = {};
			create = "SimpleFootbridge_DZ";
		};
	};
};

class wooden_footbridge_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_WOODEN_FOOTBRIDGE;
	descriptionShort = $STR_EQUIP_DESC_WOODEN_FOOTBRIDGE;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_ACTION_BUILD_WOODEN_FOOTBRIDGE;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodenFootbridge_DZ";
		};
	};
};

class windbreak_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_WINDBREAK;
	descriptionShort = $STR_EQUIP_DESC_WINDBREAK;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions {

		class Build
		{
			text = $STR_EPOCH_ACTION_BUILD_WINDBREAK;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Windbreak_DZ";
		};
	};
};

class metal_container_1a_kit: CA_Magazine	// red
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_METAL_CONTAINER_1A;
	descriptionShort = $STR_EQUIP_DESC_METAL_CONTAINER_1A;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions {

		class Build
		{
			text = $STR_EPOCH_ACTION_BUILD_METAL_CONTAINER_1A;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "MetalContainer1A_DZ";
		};
		class Crafting
		{
			text = $STR_EPOCH_ACTION_CRAFT_METAL_CONTAINER_1B;	// craft green
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"metal_container_1b_kit",1}};
			input[] = {{"metal_container_1a_kit",1}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_ACTION_CRAFT_METAL_CONTAINER_1G;	// craft white
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"metal_container_1g_kit",1}};
			input[] = {{"metal_container_1a_kit",1}};
		};
		class Crafting2
		{
			text = $STR_EPOCH_ACTION_CRAFT_METAL_CONTAINER_2D;	// craft 2x red
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"metal_container_2d_kit",1}};
			input[] = {{"metal_container_1a_kit",2}};
		};
	};
};

class metal_container_1b_kit: CA_Magazine	// green
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_METAL_CONTAINER_1B;
	descriptionShort = $STR_EQUIP_DESC_METAL_CONTAINER_1B;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions {

		class Build
		{
			text = $STR_EPOCH_ACTION_BUILD_METAL_CONTAINER_1B;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "MetalContainer1B_DZ";
		};
		class Crafting
		{
			text = $STR_EPOCH_ACTION_CRAFT_METAL_CONTAINER_1A;	// craft red
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"metal_container_1a_kit",1}};
			input[] = {{"metal_container_1b_kit",1}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_ACTION_CRAFT_METAL_CONTAINER_1G;	// craft white
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"metal_container_1g_kit",1}};
			input[] = {{"metal_container_1b_kit",1}};
		};
	};
};

class metal_container_1g_kit: CA_Magazine	// white
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_METAL_CONTAINER_1G;
	descriptionShort = $STR_EQUIP_DESC_METAL_CONTAINER_1G;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions {

		class Build
		{
			text = $STR_EPOCH_ACTION_BUILD_METAL_CONTAINER_1G;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "MetalContainer1G_DZ";
		};
		class Crafting
		{
			text = $STR_EPOCH_ACTION_CRAFT_METAL_CONTAINER_1A;	// craft red
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"metal_container_1a_kit",1}};
			input[] = {{"metal_container_1g_kit",1}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_ACTION_CRAFT_METAL_CONTAINER_1B;	// craft green
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"metal_container_1b_kit",1}};
			input[] = {{"metal_container_1g_kit",1}};
		};
	};
};

class metal_container_2d_kit: CA_Magazine	// 2x red
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_METAL_CONTAINER_2D;
	descriptionShort = $STR_EQUIP_DESC_METAL_CONTAINER_2D;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions {

		class Build
		{
			text = $STR_EPOCH_ACTION_BUILD_METAL_CONTAINER_2D;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "MetalContainer2D_DZ";
		};
	};
};