class ItemTopaz : CA_Magazine 
{
	scope = 2;
	displayName = $STR_GEM_NAME_TOPAZ;
	model = "\z\addons\dayz_epoch\models\topaz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_topaz_CA.paa";
	count = 1;
	type = 256;
	descriptionShort = $STR_GEM_NAME_TOPAZ;
};
class ItemObsidian : CA_Magazine 
{
	scope = 2;
	displayName = $STR_GEM_NAME_OBSIDIAN;
	model = "\z\addons\dayz_epoch\models\obsidian.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_obsidian_CA.paa";
	count = 1;
	type = 256;
	descriptionShort = $STR_GEM_NAME_OBSIDIAN;
};
class ItemSapphire : CA_Magazine 
{
	scope = 2;
	displayName = $STR_GEM_NAME_SAPPHIRE;
	model = "\z\addons\dayz_epoch\models\sapphire.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_sapphire_CA.paa";
	count = 1;
	type = 256;
	descriptionShort = $STR_GEM_NAME_SAPPHIRE;
};
class ItemAmethyst : CA_Magazine 
{
	scope = 2;
	displayName = $STR_GEM_NAME_AMETHYST;
	model = "\z\addons\dayz_epoch\models\amethyst.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_amethyst_CA.paa";
	count = 1;
	type = 256;
	descriptionShort = $STR_GEM_NAME_AMETHYST;
};
class ItemEmerald : CA_Magazine 
{
	scope = 2;
	displayName = $STR_GEM_NAME_EMERALD;
	model = "\z\addons\dayz_epoch\models\emerald.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_emerald_CA.paa";
	count = 1;
	type = 256;
	descriptionShort = $STR_GEM_NAME_EMERALD;
};
class ItemCitrine : CA_Magazine 
{
	scope = 2;
	displayName = $STR_GEM_NAME_CITRINE;
	model = "\z\addons\dayz_epoch\models\citrine.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_citrine_CA.paa";
	count = 1;
	type = 256;
	descriptionShort = $STR_GEM_NAME_CITRINE;
};
class ItemRuby : CA_Magazine 
{
	scope = 2;
	displayName = $STR_GEM_NAME_RUBY;
	model = "\z\addons\dayz_epoch\models\ruby.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_ruby_CA.paa";
	count = 1;
	type = 256;
	descriptionShort = $STR_GEM_NAME_RUBY;
};
class ItemGemSuitcase_Emtpy : CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = "$STR_EPOCH_GEMSUITCASE_EMPTY";
	descriptionShort = "$STR_EPOCH_DESC_GEMSUITCASE_EMPTY";
	model = "\CA\misc3\briefcase";
	picture = "\dayz_epoch_c\icons\equipment\Suitcase.paa";
	type = 256;
	class ItemActions 
	{
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_PACK_TOPAZ;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGemSuitcase_Topaz",1}};
			input[] = {{"ItemGemSuitcase_Emtpy",1},{"ItemTopaz",10}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_PLAYER_PACK_OBSIDIAN;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGemSuitcase_Obsidian",1}};
			input[] = {{"ItemGemSuitcase_Emtpy",1},{"ItemObsidian",10}};
		};
		class Crafting2
		{
			text = $STR_EPOCH_PLAYER_PACK_SAPPHIRE;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGemSuitcase_Sapphire",1}};
			input[] = {{"ItemGemSuitcase_Emtpy",1},{"ItemSapphire",10}};
		};
		class Crafting3
		{
			text = $STR_EPOCH_PLAYER_PACK_AMETHYST;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGemSuitcase_Amethyst",1}};
			input[] = {{"ItemGemSuitcase_Emtpy",1},{"ItemAmethyst",10}};
		};
		class Crafting4
		{
			text = $STR_EPOCH_PLAYER_PACK_EMERALD;
			script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGemSuitcase_Emerald",1}};
			input[] = {{"ItemGemSuitcase_Emtpy",1},{"ItemEmerald",10}};
		};
		class Crafting5
		{
			text = $STR_EPOCH_PLAYER_PACK_CITRINE;
			script = ";['Crafting5','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGemSuitcase_Citrine",1}};
			input[] = {{"ItemGemSuitcase_Emtpy",1},{"ItemCitrine",10}};
		};
		class Crafting6
		{
			text = $STR_EPOCH_PLAYER_PACK_RUBY;
			script = ";['Crafting6','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGemSuitcase_Ruby",1}};
			input[] = {{"ItemGemSuitcase_Emtpy",1},{"ItemRuby",10}};
		};
		class Crafting7
		{
			text = $STR_EPOCH_PLAYER_PACK_ALL;
			script = ";['Crafting7','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGemSuitcase_All",1}};
			input[] = {{"ItemGemSuitcase_Emtpy",1},{"ItemTopaz",1},{"ItemObsidian",1},{"ItemSapphire",1},{"ItemAmethyst",1},{"ItemEmerald",1},{"ItemCitrine",1},{"ItemRuby",1}};
		};
	};
};
class ItemGemSuitcase_Topaz : ItemGemSuitcase_Emtpy 
{
	displayName = "$STR_EPOCH_GEMSUITCASE_TOPAZ";
	descriptionShort = "$STR_EPOCH_DESC_GEMSUITCASE_TOPAZ";
	class ItemActions 
	{
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_251;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGemSuitcase_Emtpy",1},{"ItemTopaz",10}};
			input[] = {{"ItemGemSuitcase_Topaz",1}};
		};
	};
};
class ItemGemSuitcase_Obisidian : ItemGemSuitcase_Emtpy 
{
	displayName = "$STR_EPOCH_GEMSUITCASE_OBSIDIAN";
	descriptionShort = "$STR_EPOCH_DESC_GEMSUITCASE_OBSIDIAN";
	class ItemActions 
	{
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_251;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGemSuitcase_Emtpy",1},{"ItemObisidian",10}};
			input[] = {{"ItemGemSuitcase_Obisidian",1}};
		};
	};
};
class ItemGemSuitcase_Sapphire : ItemGemSuitcase_Emtpy 
{
	displayName = "$STR_EPOCH_GEMSUITCASE_SAPPHIRE";
	descriptionShort = "$STR_EPOCH_DESC_GEMSUITCASE_SAPPHIRE";
	class ItemActions 
	{
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_251;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGemSuitcase_Emtpy",1},{"ItemSapphire",10}};
			input[] = {{"ItemGemSuitcase_Sapphire",1}};
		};
	};
};
class ItemGemSuitcase_Amethyst : ItemGemSuitcase_Emtpy 
{
	displayName = "$STR_EPOCH_GEMSUITCASE_AMETHYST";
	descriptionShort = "$STR_EPOCH_DESC_GEMSUITCASE_AMETHYST";
	class ItemActions 
	{
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_251;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGemSuitcase_Emtpy",1},{"ItemAmethyst",10}};
			input[] = {{"ItemGemSuitcase_Amethyst",1}};
		};
	};
};
class ItemGemSuitcase_Emerald : ItemGemSuitcase_Emtpy 
{
	displayName = "$STR_EPOCH_GEMSUITCASE_EMERALD";
	descriptionShort = "$STR_EPOCH_DESC_GEMSUITCASE_EMERALD";
	class ItemActions 
	{
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_251;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGemSuitcase_Emtpy",1},{"ItemEmerald",10}};
			input[] = {{"ItemGemSuitcase_Emerald",1}};
		};
	};
};
class ItemGemSuitcase_Citrine : ItemGemSuitcase_Emtpy 
{
	displayName = "$STR_EPOCH_GEMSUITCASE_CITRINE";
	descriptionShort = "$STR_EPOCH_DESC_GEMSUITCASE_CITRINE";
	class ItemActions 
	{
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_251;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGemSuitcase_Emtpy",1},{"ItemCitrine",10}};
			input[] = {{"ItemGemSuitcase_Citrine",1}};
		};
	};
};
class ItemGemSuitcase_Ruby : ItemGemSuitcase_Emtpy 
{
	displayName = "$STR_EPOCH_GEMSUITCASE_RUBY";
	descriptionShort = "$STR_EPOCH_DESC_GEMSUITCASE_RUBY";
	class ItemActions 
	{
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_251;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGemSuitcase_Emtpy",1},{"ItemRuby",10}};
			input[] = {{"ItemGemSuitcase_Ruby",1}};
		};
	};
};
class ItemGemSuitcase_All : ItemGemSuitcase_Emtpy 
{
	displayName = "$STR_EPOCH_GEMSUITCASE_ALL";
	descriptionShort = "$STR_EPOCH_DESC_GEMSUITCASE_ALL";
	class ItemActions 
	{
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_251;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGemSuitcase_Emtpy",1},{"ItemTopaz",1},{"ItemObsidian",1},{"ItemSapphire",1},{"ItemAmethyst",1},{"ItemEmerald",1},{"ItemCitrine",1},{"ItemRuby",1}};
			input[] = {{"ItemGemSuitcase_All",1}};
		};
	};
};