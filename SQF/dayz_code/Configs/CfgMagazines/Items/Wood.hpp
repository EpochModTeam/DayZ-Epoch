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
		class Crafting
		{
			text = $STR_BLD_craft_ItemLog;//"Wooden Plank"
			script = "spawn player_craftItem;";
			neednearby[] = {}; 
			requiretools[] = {"ItemHatchet"};
			output[] = {{"ItemPlank","CfgMagazines",2}};
			input[] = {{"ItemLog","CfgMagazines",1}};
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
			text = $STR_BLD_craft_ItemPlank;//"Wood Piles"
			script = "spawn player_craftItem;";
			neednearby[] = {}; 
			requiretools[] = {"ItemHatchet"};
			output[] = {{"PartWoodPile","CfgMagazines",2}};
			input[] = {{"ItemPlank","CfgMagazines",1}};
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
			script = "spawn player_makeFire;"; //Do not use player_build because we have no ghost preview model for Land_Fire_DZ yet
			use[] = {"PartWoodPile"};
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
			output[] = {{"WoodenArrow",3}};
			input[] = {{"PartWoodPile",1},{"ItemTrashRazor",1}};

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