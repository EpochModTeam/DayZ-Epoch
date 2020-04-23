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

class equip_rag : CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_rag;
	descriptionShort = $STR_ITEM_DESC_equip_rag;
	model = "\z\addons\dayz_communityassets\models\rag_clean.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_rag_clean_ca.paa";
	type = 256;
};

class equip_string : CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_string;
	descriptionShort = $STR_ITEM_DESC_equip_string;
		model = "\z\addons\dayz_communityassets\models\string.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_string_ca.paa";
	type = 256;
};

class equip_rope : CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_rope;
	descriptionShort = $STR_ITEM_DESC_equip_rope;
	model = "\z\addons\dayz_communityassets\models\rope.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_rope_ca.paa";
	type = 256;
	class ItemActions
	{
		class Crafting
		{
			text = $STR_BLD_craft_equip_rope;//"String"
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {}; 
			requiretools[] = {"ItemKnife"};
			output[] = {{"equip_string",2}};
			input[] = {{"equip_rope",1}};
		};
	};
};