class ItemStone: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_BLD_name_ItemStone;//"Rough Stone"
	picture = "\z\addons\dayz_buildings\equip\rocks.paa";
	model = "z\addons\dayz_buildings\models\rocks.p3d";
	descriptionShort = $STR_BLD_desc_ItemStone;//"Rough Stone"
	
	class ItemActions
	{
		class Crafting
		{
			text = $STR_EPOCH_ACTION_CONCRETE_BLOCK;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemEtool"};
			output[] = {{"ItemConcreteBlock",1}};
			input[] = {{"ItemStone",6},{"CementBag",1}};
		};
		class Crafting1
		{
			text = $STR_BLD_name_WoodenFence_1_foundation;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"woodfence_foundation_kit",1}};
			input[] = {{"ItemStone",8},{"MortarBucket",1},{"ItemPlank",1}};
		};
		class Crafting2
		{
			text = $STR_BLD_name_MetalFence_1_foundation;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"metalfence_foundation_kit",1}};
			input[] = {{"ItemStone",8},{"MortarBucket",1},{"ItemRSJ",1}};
		};				
		class Crafting3
		{
			text = $STR_EPOCH_ACTION_CRAFT_CNC_BARRIER;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemEtool"};
			output[] = {{"concrete_barrier_kit",1}};
			input[] = {{"CementBag",3},{"ItemStone",2},{"ItemWire",1}};
		};				
		class Crafting4
		{
			text = $STR_EPOCH_ACTION_CRAFT_DRAGONTEETH;
			script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemSledge"};
			output[] = {{"dragonteeth_kit",1}};
			input[] = {{"concrete_wall_kit",1},{"ItemStone",6},{"CementBag",4}};
		};	
		class Crafting5
		{
			text = $STR_EPOCH_ACTION_CRAFT_DRAGONTEETH_BIG;
			script = ";['Crafting5','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemSledge"};
			output[] = {{"dragonteeth_big_kit",1}};
			input[] = {{"dragonteeth_kit",1},{"ItemStone",6},{"CementBag",4}};
		};
	};		
};

class ItemConcreteBlock: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_BLD_name_ItemConcreteBlock;//"Concrete Block"
	picture = "\z\addons\dayz_buildings\equip\concreteblock.paa";
	model = "z\addons\dayz_buildings\models\concreteblock.p3d";
	descriptionShort = $STR_BLD_desc_ItemConcreteBlock;//"Concrete Block"
	
	class ItemActions
	{
		class Crafting
		{
			text = $STR_EPOCH_ACTION_CONCRETE_BUNKER;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"cinder_bunker_kit",1}};
			input[] = {{"full_cinder_wall_kit",3},{"ItemConcreteBlock",5},{"equip_metal_sheet",3},{"ItemScrews",1}};
		};
	};	
};

class CinderBlocks: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CINDERBLOCKS;
	model = "\z\addons\dayz_epoch\models\cinder_stack.p3d";
	picture = "\z\addons\dayz_epoch\pictures\epuip_cinder_blocks_CA.paa";
	descriptionShort = $STR_EPOCH_CINDERBLOCKS_DESC;

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
			text = $STR_EPOCH_PLAYER_252_1;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"full_cinder_wall_kit",1}};
			input[] = {{"CinderBlocks",7},{"MortarBucket",2}};
		};	
		class Crafting2
		{
			text = $STR_EPOCH_PLAYER_239_1_3;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"cinderwall_window_kit",1}};
			input[] = {{"CinderBlocks",5},{"MortarBucket",1},{"ItemTankTrap",1},{"ItemPole",1}};
		};			
		class Crafting3
		{
			text = $STR_EPOCH_PLAYER_234;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"cinder_door_frame_kit",1}};
			input[] = {{"CinderBlocks",4},{"MortarBucket",1},{"ItemTankTrap",1}};
		};		
		class Crafting4
		{
			text = $STR_EPOCH_PLAYER_253;
			script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"cinder_garage_frame_kit",1}};
			input[] = {{"CinderBlocks",3},{"MortarBucket",1},{"ItemTankTrap",1}};
		};
		class Crafting5
		{
			text = $STR_EPOCH_PLAYER_253_1_1;
			script = ";['Crafting5','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"cinder_garage_top_open_frame_kit",1}};
			input[] = {{"CinderBlocks",4},{"MortarBucket",1}};
		};		
		class Crafting6
		{
			text = $STR_EPOCH_PLAYER_253_1;
			script = ";['Crafting6','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"cinder_gate_frame_kit",1}};
			input[] = {{"CinderBlocks",8},{"MortarBucket",4}};
		};
	};
};
class MortarBucket: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_BUCKETOFMORTAR;
	model = "\z\addons\dayz_epoch\models\mortar.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_mortar_CA.paa";
	descriptionShort = $STR_EPOCH_BUCKETOFMORTAR_DESC;
};

class equip_brick : CA_Magazine
{
	scope = 2;
	count = 1;
	model = "\z\addons\dayz_communityassets\models\brick.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_brick.paa";
	displayName = $STR_ITEM_NAME_equip_brick;
	descriptionShort = $STR_ITEM_DESC_equip_brick;
};

class CementBag: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_CEMENT_BAG;
	descriptionShort = $STR_ITEM_DESC_CEMENT_BAG;
	picture = "\dayz_epoch_c\icons\equipment\ItemCementBag.paa";
	model = "\z\addons\dayz_epoch_w\items\cement_bag.p3d";

	class ItemActions
	{	
		class Crafting
		{
			text = $STR_EPOCH_ACTION_CONCRETE_BLOCK;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemEtool"};
			output[] = {{"ItemConcreteBlock",1}};
			input[] = {{"ItemStone",6},{"CementBag",1}};
		};	
		class Crafting1
		{
			text = $STR_EPOCH_ACTION_CRAFT_CNC_BARRIER;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemEtool"};
			output[] = {{"concrete_barrier_kit",1}};
			input[] = {{"CementBag",3},{"ItemStone",2},{"ItemWire",1}};
		};	
		class Crafting2
		{
			text = $STR_EPOCH_ACTION_CRAFT_CONCRETE_WALL;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemSledge"};
			output[] = {{"concrete_wall_kit",1}};
			input[] = {{"concrete_barrier_kit",5},{"CementBag",2}};
		};	
		class Crafting3
		{
			text = $STR_EPOCH_ACTION_CRAFT_CONCRETE_PIPE;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemSledge"};
			output[] = {{"concrete_pipe_kit",1}};
			input[] = {{"concrete_barrier_kit",6},{"CementBag",2}};
		};	
		class Crafting4
		{
			text = $STR_EPOCH_ACTION_CRAFT_DRAGONTEETH;
			script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemSledge"};
			output[] = {{"dragonteeth_kit",1}};
			input[] = {{"concrete_wall_kit",1},{"ItemStone",6},{"CementBag",4}};
		};	
		class Crafting5
		{
			text = $STR_EPOCH_ACTION_CRAFT_DRAGONTEETH_BIG;
			script = ";['Crafting5','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemSledge"};
			output[] = {{"dragonteeth_big_kit",1}};
			input[] = {{"dragonteeth_kit",1},{"ItemStone",6},{"CementBag",4}};
		};
	};	
};