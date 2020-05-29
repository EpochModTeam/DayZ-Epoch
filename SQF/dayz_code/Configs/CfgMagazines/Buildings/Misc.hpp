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

// DayZ Mod workbench
class ItemWorkBench : CA_Magazine
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
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_228;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"ItemToolbox","ItemCrowbar","ItemSledge"};
			output[] = {{"metal_floor_kit",1}};
			input[] = {{"metal_panel_kit",4}};
		};
	};
};

class ItemCorrugated : CA_Magazine
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
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"wooden_shed_kit",1}};
			input[] = {{"ItemCorrugated",2},{"PartWoodPlywood",4},{"PartWoodLumber",4}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_PLAYER_217;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"outhouse_kit",1}};
			input[] = {{"ItemCorrugated",1},{"PartWoodPlywood",3},{"PartWoodLumber",3},{"ItemTrashToiletpaper",1}};
		};
		class Crafting2
		{
			text = $STR_EPOCH_PLAYER_216;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"storage_shed_kit",1}};
			input[] = {{"ItemCorrugated",4},{"PartWoodPlywood",2},{"PartWoodLumber",2}};
		};
	};
};

class ItemWire : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "\dayz_equip\models\Fence_wire_kit.p3d";
	picture = "\dayz_equip\textures\equip_fencewire_kit_CA.paa";
	displayName = $STR_EQUIP_NAME_23;
	descriptionShort = $STR_EQUIP_DESC_23;

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
	};
};

class ItemTankTrap : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "\dayz_equip\models\tank_trap_kit.p3d";
	picture = "\dayz_equip\textures\equip_tanktrap_kit_CA.paa";
	displayName = $STR_EQUIP_NAME_22;
	descriptionShort = $STR_EQUIP_DESC_22;

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
	};
};

class ItemGenerator : CA_Magazine
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
			require[] = {"ItemEtool","ItemToolbox"};
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
			require[] = {"ItemEtool","ItemToolbox"};
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