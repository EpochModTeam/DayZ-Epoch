class ItemCanvas: CA_Magazine
{
	scope = 2;
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
			text = $STR_EPOCH_PLAYER_194;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"ItemBurlap",1}};
			input[] = {{"ItemCanvas",2}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_CRAFT_SMALL_STASH;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"StashSmall_kit",1}};
			input[] = {{"ItemCanvas",1},{"PartWoodPile",2}};
		};		
		class Crafting2
		{
			text = $STR_EPOCH_PLAYER_193;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"sun_shade_kit",1}};
			input[] = {{"ItemCanvas",1},{"PartWoodLumber",4}};
		};
	};
};

class ItemBurlap: CA_Magazine
{
	scope = 2;
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
			neednearby[] = {};
			requiretools[] = {"ItemEtool","ItemToolbox"};
			output[] = {{"ItemSandbag",1}};
			input[] = {{"ItemBurlap",3}};
		};
	};
};

class equip_rag : CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_rag;
	descriptionShort = $STR_ITEM_DESC_equip_rag;
	model = "\z\addons\dayz_communityassets\models\rag_clean.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_rag_clean_ca.paa";
	type = 256;
	
	class ItemActions
	{
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_269;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemKnife"};
			output[] = {{"ItemBandage",2}};
			outputweapons[] = {};
			input[] = {{"equip_gauze",2},{"equip_rag",1},{"equip_string",1}};
		};
	};	
};

class equip_string : CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_string;
	descriptionShort = $STR_ITEM_DESC_equip_string;
	model = "\z\addons\dayz_communityassets\models\string.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_string_ca.paa";
	type = 256;
	
	class ItemActions
	{	
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_269;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemKnife"};
			output[] = {{"ItemBandage",2}};
			outputweapons[] = {};
			input[] = {{"equip_gauze",2},{"equip_rag",1},{"equip_string",1}};
		};
		class Crafting1
		{
			text = $STR_ITEM_NAME_TRIPWIRE_CANS;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemTrapTripwireCans",1}};
			input[] = {{"equip_string",1},{"TrashTinCan",1},{"PartWoodPile",1},{"equip_duct_tape",1}};
		};	
		class Crafting2
		{
			text = $STR_ITEM_NAME_TRIPWIRE_FLARE;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemTrapTripwireFlare",1}};
			input[] = {{"equip_string",1},{"HandRoadFlare",1},{"PartWoodPile",1},{"equip_duct_tape",1}};
		};	
		class Crafting3
		{
			text = $STR_ITEM_NAME_TRIPWIRE_GRENADE;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemTrapTripwireGrenade",1}};
			input[] = {{"equip_string",1},{"HandGrenade_West",1},{"PartWoodPile",1},{"equip_duct_tape",1}};
		};	
		class Crafting4
		{
			text = $STR_ITEM_NAME_TRIPWIRE_SMOKE;
			script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemTrapTripwireSmoke",1}};
			input[] = {{"equip_string",1},{"SmokeShell",1},{"PartWoodPile",1},{"equip_duct_tape",1}};
		};		
	};	
};

class equip_rope : CA_Magazine 
{
	scope = 2;
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