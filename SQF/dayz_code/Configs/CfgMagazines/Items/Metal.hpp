class PartGeneric : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "\dayz_equip\models\genericparts.p3d";
	picture = "\dayz_equip\textures\equip_genericparts_ca.paa";
	displayName = $STR_EQUIP_NAME_10;
	descriptionShort = $STR_EQUIP_DESC_10;
	
	class ItemActions 
	{
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_213;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"ItemPole",1}};
			input[] = {{"PartGeneric",2}};
		};
		class Crafting1 
		{
			text = $STR_CRAFTING_NAILS;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"equip_nails",4}};
			input[] = {{"PartGeneric",2}};
		};	
		class Crafting2 
		{
			text = $STR_CRAFTING_CORRUGATEDSHEETS;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"ItemMetalSheet",1}};
			input[] = {{"PartGeneric",3}};
		};		
		class Crafting3 
		{
			text = $STR_EPOCH_ACTION_METAL_DOORWAY;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"door_frame_kit",1}};
			input[] = {{"ItemPole",4},{"ItemTankTrap",4},{"PartGeneric",2}};
		};		
	};
};

class ItemPole: CA_Magazine
{
	scope = 2;
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
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"ItemCorrugated",1}};
			input[] = {{"ItemPole",2},{"ItemMetalSheet",2},{"PartWoodLumber",2}};
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
			text = $STR_EPOCH_ACTION_METAL_DOORWAY;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"door_frame_kit",1}};
			input[] = {{"ItemPole",4},{"ItemTankTrap",4},{"PartGeneric",2}};
		};		
		class Crafting4 
		{
			text = $STR_EPOCH_ACTION_GLASS_FLOOR_QUARTER;
			script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"glass_floor_quarter_kit",1}};
			input[] = {{"ItemPole",8},{"PartGlass",4}};
		};	
		class Crafting5
		{
			text = $STR_EPOCH_PLAYER_228_2;
			script = ";['Crafting5','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"ItemToolbox","ItemCrowbar","ItemSledge"};
			output[] = {{"metal_floor_quarter_kit",1}};
			input[] = {{"ItemPole",4},{"equip_metal_sheet",4}};
		};		
	};
};

class ItemMetalSheet: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_BLD_name_ItemMetalSheet;//"Corrugated Sheet"
	picture = "\z\addons\dayz_buildings\equip\item_sheetmetal.paa";
	model = "z\addons\dayz_buildings\models\sheet_metal.p3d";
	descriptionShort = $STR_BLD_desc_ItemMetalSheet;//"Metal Sheeting"
	
	class ItemActions
	{	
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_218;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"ItemCorrugated",1}};
			input[] = {{"ItemPole",2},{"ItemMetalSheet",2},{"PartWoodLumber",2}};
		};	
	};	
};

class equip_metal_sheet : CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_metal_sheet;
	descriptionShort = $STR_ITEM_DESC_equip_metal_sheet;
	model = "\z\addons\dayz_communityassets\models\metal_sheet_clean.p3d";
	picture = "\z\addons\dayz_communityassets\CraftingPlaceholders\equip_metal_sheet.paa";
	type = 256;

	class ItemActions
	{		
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_213_1;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"metal_pillar_kit",2}};
			input[] = {{"ItemPole",2},{"equip_metal_sheet",4}};
		};	
		class Crafting1
		{
			text = $STR_EPOCH_PLAYER_228_2;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"ItemToolbox","ItemCrowbar","ItemSledge"};
			output[] = {{"metal_floor_quarter_kit",1}};
			input[] = {{"ItemPole",4},{"equip_metal_sheet",4}};
		};
	};
};

class equip_metal_sheet_rusted : CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_metal_sheet_rusted;
	descriptionShort = $STR_ITEM_DESC_equip_metal_sheet_rusted;
	model = "\z\addons\dayz_communityassets\models\metal_sheet_rusted.p3d";
	picture = "\z\addons\dayz_communityassets\CraftingPlaceholders\equip_metal_sheet_rusted.paa";
	type = 256;
};

class ItemRSJ: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_BLD_name_ItemRSJ;//"Steel Beam"
	picture = "\z\addons\dayz_buildings\equip\item_rsj.paa";
	model = "z\addons\dayz_buildings\models\rsj.p3d";
	descriptionShort = $STR_BLD_desc_ItemRSJ;//"Steel RSJ Support Beam"
	
	class ItemActions
	{	
		class Crafting
		{
			text = $STR_EPOCH_ACTION_CRAFT_BRIDGE;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"ItemToolbox","ItemCrowbar","ItemSledge"};
			output[] = {{"metal_drawbridge_kit",1}};
			input[] = {{"ItemRSJ",6},{"metal_floor_kit",2}};
		};
	};		
};

class equip_1inch_metal_pipe : CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_1inch_metal_pipe;
	descriptionShort = $STR_ITEM_DESC_equip_1inch_metal_pipe;
	model = "\z\addons\dayz_communityassets\models\1in_pipe.p3d"; 
	picture = "\z\addons\dayz_communityassets\pictures\equip_1inch_metal_pipe_ca.paa";
	type = 256;
	class ItemActions
	{		
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_305;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"ItemScaffoldingKit",1}};
			input[] = {{"equip_2inch_metal_pipe",4},{"equip_1inch_metal_pipe",2},{"PartWoodLumber",4}};
		};	
	};	
};

class equip_2inch_metal_pipe : CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_2inch_metal_pipe;
	descriptionShort = $STR_ITEM_DESC_equip_2inch_metal_pipe;
	model = "\z\addons\dayz_communityassets\models\2in_pipe.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_2inch_metal_pipe.paa";
	type = 256;

	class ItemActions
	{		
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_305;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"ItemScaffoldingKit",1}};
			input[] = {{"equip_2inch_metal_pipe",4},{"equip_1inch_metal_pipe",2},{"PartWoodLumber",4}};
		};
	};		
};

class equip_tent_poles : CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_tent_poles;
	descriptionShort = $STR_ITEM_DESC_equip_tent_poles;
	model = "z\addons\dayz_communityassets\models\1m_pole_6.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_1m_pole_6_ca.paa";
	type = 256;
	
	class ItemActions
	{	
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_190;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"ItemTent",1}};
			input[] = {{"ItemCanvas",2},{"equip_tent_poles",2}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_PLAYER_191;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"ItemDesertTent",1}};
			input[] = {{"ItemCanvas",3},{"equip_tent_poles",2}};
		};
		class Crafting2
		{
			text = $STR_EPOCH_PLAYER_192;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"ItemDomeTent",1}};
			input[] = {{"ItemCanvas",3},{"equip_tent_poles",2}};
		};
	};	
};