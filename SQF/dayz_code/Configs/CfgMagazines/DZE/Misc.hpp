class ItemCanvas: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CANVAS;
	model = "\z\addons\dayz_epoch\models\canvas.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_canvas_ca.paa";
	descriptionShort = $STR_EPOCH_CANVAS_DESC;
	class ItemActions
	{
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_190;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"ItemTent",1}};
			input[] = {{"ItemCanvas",2},{"ItemPole",2}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_PLAYER_191;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"ItemDesertTent",1}};
			input[] = {{"ItemCanvas",3},{"ItemPole",3}};
		};
		class Crafting2
		{
			text = $STR_EPOCH_PLAYER_192;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"ItemDomeTent",1}};
			input[] = {{"ItemCanvas",3},{"ItemPole",3}};
		};
		class Crafting3
		{
			text = $STR_EPOCH_PLAYER_193;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"sun_shade_kit",1}};
			input[] = {{"ItemCanvas",1},{"PartWoodLumber",4}};
		};
		class Crafting4
		{
			text = $STR_EPOCH_PLAYER_194;
			script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"ItemBurlap",1}};
			input[] = {{"ItemCanvas",2}};
		};
	};
};
class ItemBurlap: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_BURLAP;
	model = "\z\addons\dayz_epoch\models\burlap.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_burlap_ca.paa";
	descriptionShort = $STR_EPOCH_BURLAP_DESC;
	class ItemActions
	{
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_195;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"sand"}; // todo add sand requirement
			requiretools[] = {"ItemEtool","ItemToolbox"};
			output[] = {{"ItemSandbag",1}};
			input[] = {{"ItemBurlap",3}};
		};
	};
};
class ItemLightBulb: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LIGHTBULB;
	model = "\z\addons\dayz_epoch\models\bulb.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_bulb_CA.paa";
	descriptionShort = $STR_EPOCH_LIGHTBULB_DESC;
	class ItemActions
	{
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_196;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemEtool","ItemToolbox"};
			output[] = {{"light_pole_kit",1}};
			input[] = {{"ItemLightBulb",1},{"PartGeneric",1},{"PartWoodLumber",6}};
		};
	};
};



class ItemZombieParts: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_ZOMBIEPARTS;
	model = "\z\addons\dayz_epoch\models\zombie_parts_bag_v2.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_zparts_CA.paa";
	descriptionShort = $STR_EPOCH_ZOMBIEPARTS_DESC;
};

class ItemComboLock: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_COMBINATIONLOCK;
	weight = 0.5;
	model = "\z\addons\dayz_epoch\models\combo_lock_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_combolock_ca.paa";
	descriptionShort = $STR_EPOCH_COMBINATIONLOCK_DESC;

};

class ItemCorrugated : CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CORRUGATEDFENCE;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_CORRUGATEDFENCE_DESC;
	class ItemActions
	{
		class Build {
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
class ItemPole: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_METALPOLE;
	model = "\z\addons\dayz_epoch\models\pipe.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_pipe_CA.paa";
	descriptionShort = $STR_EPOCH_METALPOLE_DESC;
	class ItemActions
	{
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_218;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"ItemCorrugated",1}};
			input[] = {{"ItemPole",2},{"ItemTankTrap",2},{"PartWoodLumber",2}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_PLAYER_219;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"rusty_gate_kit",1}};
			input[] = {{"ItemPole",3},{"ItemTankTrap",1}};
		};
		class Crafting2
		{
			text = $STR_EPOCH_PLAYER_220;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"metal_panel_kit",1}};
			input[] = {{"ItemPole",4},{"ItemTankTrap",4}};
		};
		class Crafting3
		{
			text = $STR_EPOCH_PLAYER_305;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"ItemScaffoldingKit",1}};
			input[] = {{"ItemPole",4},{"ItemTankTrap",2},{"PartWoodLumber",4}};
		};
	};
};
class ItemGunRackKit: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_GUNRACKKIT;
	descriptionShort = $STR_EPOCH_GUNRACKKIT_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 20;
	class ItemActions
	{
		class Build
		{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "GunRack_DZ";
		};
	};
};
class ItemWoodCrateKit: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODCRATE;
	descriptionShort = $STR_EPOCH_WOODCRATE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 20;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodCrate_DZ";
		};
	};
};
class ItemOilBarrel: CA_Magazine
{
	scope = public;
	count = 1;
	// fuelQuantity = 210;
	type = 256;
	displayName = $STR_EPOCH_OILBARREL;
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	descriptionShort = $STR_EPOCH_OILBARREL_DESC;
};
class ItemFuelBarrel: CA_Magazine
{
	scope = public;
	count = 1;
	fuelQuantity = 210;
	type = 256;
	displayName = $STR_EPOCH_FUELBARREL;
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	descriptionShort = $STR_EPOCH_FUELBARREL_DESC;
	fireIntensity = 6; //used for tent burning
	emptycan = "ItemFuelBarrelEmpty";
};
class ItemFuelBarrelEmpty: ItemFuelBarrel
{
	scope = public;
	count = 1;
	fuelQuantity = 0;
	type = 256;
	displayName = $STR_EPOCH_EMPTYFUELBARREL;
	picture = "\z\addons\dayz_epoch\pictures\equip_oildrum_e_CA.paa";
	descriptionShort = $STR_EPOCH_EMPTYFUELBARREL_DESC;
	fullcan = "ItemFuelBarrel";
	class ItemActions
	{
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_276;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox","ItemMatchbox"};
			output[] = {{"ItemFireBarrel_kit",1}};
			input[] = {{"ItemFuelBarrelEmpty",1},{"ItemJerryCan",1},{"PartWoodPile",4}};
		};
	};
};
class ItemFireBarrel_kit: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_FIREBARRELKIT;
	descriptionShort = $STR_EPOCH_FIREBARRELKIT_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 45;
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
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WORKBENCH;
	descriptionShort = $STR_EPOCH_WORKBENCH_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 10;
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

// BUILDING KITS
class wood_ramp_kit: CA_Magazine
{
	scope = public;
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
	scope = public;
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
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_METALPANEL;
	descriptionShort = $STR_EPOCH_METALPANEL_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 50;
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
class deer_stand_kit: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_DEERSTAND;
	descriptionShort = $STR_EPOCH_DEERSTAND_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 25;
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
class desert_large_net_kit: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LARGEDESERTCAMONET;
	descriptionShort = $STR_EPOCH_LARGECAMONET_DESC;
	model = "\z\addons\dayz_communityassets\models\packed_net_green.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_packed_net_green_ca.paa";
	weight = 25;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "DesertLargeCamoNet_DZ";
		};
	};
};
class forest_large_net_kit: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LARGEFORESTCAMONET;
	descriptionShort = $STR_EPOCH_LARGECAMONET_DESC;
	model = "\z\addons\dayz_communityassets\models\packed_net_green.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_packed_net_green_ca.paa";
	weight = 25;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "ForestLargeCamoNet_DZ";
		};
	};
};
class desert_net_kit: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_DESERTCAMONET;
	descriptionShort = $STR_EPOCH_CAMONET_DESC;
	model = "\z\addons\dayz_communityassets\models\packed_net_green.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_packed_net_green_ca.paa";
	weight = 25;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "DesertCamoNet_DZ";
		};
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_229;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"desert_large_net_kit",1}};
			input[] = {{"desert_net_kit",3}};
		};
	};
};
class forest_net_kit: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_FORESTCAMONET;
	descriptionShort = $STR_EPOCH_CAMONET_DESC;
	model = "\z\addons\dayz_communityassets\models\packed_net_green.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_packed_net_green_ca.paa";
	weight = 25;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "ForestCamoNet_DZ";
		};
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_229;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"forest_large_net_kit",1}};
			input[] = {{"forest_net_kit",3}};
		};
	};
};
class fuel_pump_kit: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_FUELPUMP;
	descriptionShort = $STR_EPOCH_FUELPUMP;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 50;
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
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LIGHTPOLE;
	descriptionShort = $STR_EPOCH_LIGHTPOLE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 25;
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
class stick_fence_kit: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_STICKFENCE;
	descriptionShort = $STR_EPOCH_STICKFENCE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 15;
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
class wooden_shed_kit: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_NICEWOODSHED;
	descriptionShort = $STR_EPOCH_NICEWOODSHED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 25;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "Wooden_shed_DZ";
		};
	};
};
class wood_shack_kit: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODSHACK;
	descriptionShort = $STR_EPOCH_WOODSHACK;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 25;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "WoodShack_DZ";
		};
	};
};
class m240_nest_kit: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_M240NEST;
	descriptionShort = $STR_EPOCH_M240NEST;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 125;
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
class sun_shade_kit: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CANVASSUNSHADE;
	descriptionShort = $STR_EPOCH_CANVASSUNSHADE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 25;
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
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODBENCH;
	descriptionShort = $STR_EPOCH_WOODBENCH;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 25;
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
class rusty_gate_kit: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_RUSTYGATE;
	descriptionShort = $STR_EPOCH_RUSTYGATE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 25;
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
class outhouse_kit: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_OUTHOUSE;
	descriptionShort = $STR_EPOCH_OUTHOUSE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 25;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "OutHouse_DZ";
		};
	};
};
class storage_shed_kit: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_STORAGESHED;
	descriptionShort = $STR_EPOCH_STORAGESHED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 75;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "StorageShed_DZ";
		};
	};
};

class ItemScaffoldingKit: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_SCAFFOLDING;
	descriptionShort = $STR_EPOCH_SCAFFOLDING;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 80;
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
// Custom player vault
class ItemVault: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_SAFE;
	model = "\z\addons\dayz_epoch\models\safe_onside.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_safe_ca.paa";
	descriptionShort = $STR_EPOCH_SAFE_DESC;
	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_230;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "VaultStorageLocked";
		};
	};
};
class ItemLockbox: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LOCKBOX;
	model = "\z\addons\dayz_epoch\models\lockbox_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_lockbox_CA.paa";
	descriptionShort = $STR_EPOCH_LOCKBOX_DESC;
	weight = 15;
	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_231;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "LockboxStorageLocked";
		};
	};
};
class PartPlankPack: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LUMBERPACK;
	model = "\z\addons\dayz_epoch\models\plank_pack.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_lumber_pack_CA.paa";
	descriptionShort = $STR_EPOCH_LUMBERPACK_DESC;
	weight = 6;
	class ItemActions
	{
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_251;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"sawmill"};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"PartWoodLumber",3}};
			input[] = {{"PartPlankPack",1}};
		};
	};
};
class CinderBlocks: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CINDERBLOCKS;
	model = "\z\addons\dayz_epoch\models\cinder_stack.p3d";
	picture = "\z\addons\dayz_epoch\pictures\epuip_cinder_blocks_CA.paa";
	descriptionShort = $STR_EPOCH_CINDERBLOCKS_DESC;
	weight = 100;
	class ItemActions
	{
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_252;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"half_cinder_wall_kit",1}};
			input[] = {{"CinderBlocks",3},{"MortarBucket",1}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_PLAYER_253;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"cinder_garage_kit",1}};
			input[] = {{"CinderBlocks",3},{"MortarBucket",1},{"ItemTankTrap",1}};
		};
		class Crafting2
		{
			text = $STR_EPOCH_PLAYER_234;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"cinder_door_kit",1}};
			input[] = {{"CinderBlocks",4},{"MortarBucket",1},{"ItemTankTrap",1}};
		};
		class Crafting3
		{
			text = $STR_EPOCH_PLAYER_252_1;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"full_cinder_wall_kit",1}};
			input[] = {{"CinderBlocks",7},{"MortarBucket",2}};
		};
	};
};
class MortarBucket: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_BUCKETOFMORTAR;
	model = "\z\addons\dayz_epoch\models\mortar.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_mortar_CA.paa";
	descriptionShort = $STR_EPOCH_BUCKETOFMORTAR_DESC;
	weight = 21;
};
class PartPlywoodPack: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_PLYWOODPACK;
	model = "\z\addons\dayz_epoch\models\plywood_pack.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_plywood_pack_CA.paa";
	descriptionShort = $STR_EPOCH_PLYWOODPACK_DESC;
	weight = 12;
	class ItemActions
	{
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_251;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"sawmill"};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"PartWoodPlywood",3}};
			input[] = {{"PartPlywoodPack",1}};
		};
	};
};
class PartWoodLumber: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LUMBER;
	model = "\z\addons\dayz_epoch\models\planks.p3d";
	picture= "\z\addons\dayz_epoch\pictures\equip_wood_planks_CA.paa";
	descriptionShort = $STR_EPOCH_LUMBER_DESC;
	class ItemActions
	{
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_254;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"sawmill"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"PartWoodPlywood",1}};
			input[] = {{"PartWoodLumber",2}};

		};
		class Crafting1
		{
			text = $STR_EPOCH_PLAYER_255;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"bulk_empty",1}};
			input[] = {{"PartWoodLumber",2},{"PartGeneric",1}};

		};
		class Crafting2
		{
			text = $STR_EPOCH_PLAYER_256;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"deer_stand_kit",1}};
			input[] = {{"PartWoodLumber",8},{"PartWoodPile",2}};

		};
		class Crafting3
		{
			text = $STR_EPOCH_PLAYER_257;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodStairs",1}};
			input[] = {{"PartWoodLumber",8}};

		};
		class Crafting4
		{
			text = $STR_EPOCH_PLAYER_258;
			script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodLadder",1}};
			input[] = {{"PartWoodLumber",8}};

		};
		class Crafting5
		{
			text = $STR_EPOCH_PLAYER_259;
			Script = ";['Crafting5','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"sawmill"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"PartPlankPack",1}};
			input[] = {{"PartWoodLumber",3}};
		};
		class Crafting6
		{
			text = $STR_EPOCH_PLAYER_277;
			Script = ";['Crafting6','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemGunRackKit",1}};
			input[] = {{"PartWoodLumber",6}};
		};
		class Crafting7
		{
			text = $STR_EPOCH_PLAYER_304;
			Script = ";['Crafting7','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodCrateKit",1}};
			input[] = {{"PartWoodLumber",6}};
		};
	};
};
class PartWoodPlywood: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_PLYWOOD;
	model = "\z\addons\dayz_epoch\models\plywood.p3d";
	picture= "\z\addons\dayz_epoch\pictures\equip_plywood_CA.paa";
	descriptionShort = $STR_EPOCH_PLYWOOD_DESC;
	class ItemActions
	{
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_260;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"workbench_kit",1}};
			input[] = {{"PartWoodPlywood",1},{"PartWoodLumber",2}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_PLAYER_261;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"wood_shack_kit",1}};
			input[] = {{"PartWoodPlywood",4},{"PartWoodLumber",4}};
		};
		class Crafting2
		{
			text = $STR_EPOCH_PLAYER_262;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"ItemWoodFloorQuarter",1}};
			input[] = {{"PartWoodPlywood",3},{"PartWoodLumber",3}};
		};
		class Crafting3
		{
			text = $STR_EPOCH_PLAYER_263;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"ItemWoodWallThird",1}};
			input[] = {{"PartWoodPlywood",3},{"PartWoodLumber",3}};
		};
		class Crafting4
		{
			text = $STR_EPOCH_PLAYER_264;
			Script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"sawmill"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"PartPlywoodPack",1}};
			input[] = {{"PartWoodPlywood",3}};
		};
	};
};
class ItemSledgeHead : CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_SLEDGEHAMMERHEAD;
	model = "\z\addons\dayz_epoch\models\sledge_head.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_sledge_head_ca.paa";
	descriptionShort = $STR_EPOCH_SLEDGEHAMMERHEAD_DESC;
	weight = 9;
	class ItemActions
	{
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_275;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {};
			outputweapons[] = {"ItemSledge"};
			input[] = {{"ItemSledgeHead",1},{"ItemSledgeHandle",1}};
		};
	};
};
class ItemSledgeHandle : CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_SLEDGEHAMMERHANDLE;
	model = "\z\addons\dayz_epoch\models\sledge_handle.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_sledge_handle_ca.paa";
	descriptionShort = $STR_EPOCH_SLEDGEHAMMERHANDLE_DESC;
	weight = 1;
	class ItemActions
	{
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_275;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {};
			outputweapons[] = {"ItemSledge"};
			input[] = {{"ItemSledgeHead",1},{"ItemSledgeHandle",1}};
		};
	};
};
class ItemKiloHemp : CA_Magazine
{
	scope = public;
	count = 1;
	displayName = $STR_EPOCH_KILOOFHEMP;
	descriptionShort = $STR_EPOCH_KILOOFHEMP;
	weight = 1;
	model = "z\addons\dayz_epoch\models\kilohemp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_kilohemp_CA.paa";
	type = 256;
	class ItemActions
	{
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_269b;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"ItemCanvas",1}};
			input[] = {{"ItemKiloHemp",1}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_PLAYER_269a;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {""};
			requiretools[] = {"ItemKnife"};
			output[] = {{"ItemHempSeed",5}};
			input[] = {{"ItemKiloHemp",1}};
		};
	};
};
