class ItemLog : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	displayName = $STR_BLD_name_ItemLog;//"Wooden Log"
	picture = "\z\addons\dayz_buildings\equip\item_log.paa";
	model = "z\addons\dayz_buildings\models\logs.p3d";
	descriptionShort = $STR_BLD_desc_ItemLog;//"Rough Wooden Log"
	
	class ItemActions
	{
		class Build {
			text = $STR_ACTIONS_MAKEFIRE;
			script = "spawn player_build;";
			require[] = {"ItemMatchbox"};
			create = "Land_Fire_DZ";	
		};
		class Crafting
		{
			text = $STR_BLD_craft_ItemLog;//"Wooden Plank"
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {}; 
			requiretools[] = {"ItemHatchet"};
			output[] = {{"ItemPlank",2}};
			input[] = {{"ItemLog",1}};
		};
		class Crafting1
		{
			text = $STR_EQUIP_NAME_40;//"Wood Piles"
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {}; 
			requiretools[] = {"ItemHatchet"};
			output[] = {{"PartWoodPile",4}};
			input[] = {{"ItemLog",1}};
		};		
	};
};	

class ItemPlank : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	displayName = $STR_BLD_name_ItemPlank;//"Sawn Planks"
	picture = "\z\addons\dayz_buildings\equip\item_plank.paa";
	model = "z\addons\dayz_buildings\models\planks.p3d";
	descriptionShort = $STR_BLD_desc_ItemPlank;//"Saw Planks"
	
	class ItemActions
	{
		class Crafting
		{
			text = $STR_EQUIP_NAME_40;//"Wood Piles"
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {}; 
			requiretools[] = {"ItemHatchet"};
			output[] = {{"PartWoodPile",2}};
			input[] = {{"ItemPlank",1}};
		};
	};
};

class PartWoodPile : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\dayz_equip\models\woodPile.p3d";
	picture = "\dayz_equip\textures\equip_woodPile_ca.paa";
	displayName = $STR_EQUIP_NAME_40;
	descriptionShort = $STR_EQUIP_DESC_40;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_MAKEFIRE;
			script = "spawn player_build;";
			require[] = {"ItemMatchbox"};
			create = "Land_Fire_DZ";	
		};
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_242;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"sawmill"};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"PartWoodLumber",1}};
			input[] = {{"PartWoodPile",2}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_PLAYER_243;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemKnife"};
			output[] = {{"1Rnd_Arrow_Wood",5}};
			input[] = {{"PartWoodPile",1},{"equip_feathers",2}};

		};
		class Crafting2
		{
			text = $STR_EPOCH_PLAYER_244;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"stick_fence_kit",1}};
			input[] = {{"PartWoodPile",6}};

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

class equip_wood_pallet : CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_wood_pallet;
	descriptionShort = $STR_ITEM_DESC_equip_wood_pallet;
	model = "\z\addons\dayz_communityassets\models\wooden_pallet.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_wpallet_ca.paa";
	type = 256;
};

class equip_crate : CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_crate;
	descriptionShort = $STR_ITEM_DESC_equip_crate;
	model = "\z\addons\dayz_communityassets\models\crate.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_crate.paa";
	type = 256;
};