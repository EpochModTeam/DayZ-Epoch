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
