class ItemDocument: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_DOCUMENT;
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	descriptionShort = $STR_EPOCH_DOCUMENT_DESC;
	sfx = "document";
	
	class ItemActions 
	{
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_188;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			randomOutput = 1;
			output[] = {{"ItemLetter",1},{"ItemDocumentRamp",1},{"ItemBook1",1},{"ItemBook2",1},{"ItemBook3",1},{"ItemBook4",1},{"ItemNewspaper",1},{"ItemORP",1},{"ItemAVE",1},{"ItemLRK",1},{"ItemTNK",1},{"ItemPlotDeed",1}};
			input[] = {{"ItemDocument",1}};
		};
	};
};

class ItemPlotDeed: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_PLOTDEED;
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	descriptionShort = $STR_EPOCH_PLOTDEED_DESC;
	sfx = "document";
	
	class ItemActions 
	{
		class Crafting 
		{
			text = $STR_EPOCH_PLOTDEED_ACTION;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"plot_pole_kit",1}};
			input[] = {{"ItemPlotDeed",1},{"ItemGoldBar10oz",2}};
		};
	};
};

class ItemLetter: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LETTER;
	model = "\z\addons\dayz_epoch\models\doc_letter.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_letter_ca.paa";
	descriptionShort = $STR_EPOCH_LETTER_DESC;
};

class ItemBook1: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_ROMANCENOVEL;
	model = "\z\addons\dayz_epoch\models\doc_trashy1.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_trashy1_ca.paa";
	descriptionShort = $STR_EPOCH_ROMANCENOVEL_DESC;
};

class ItemBook2: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_ROMANCENOVEL;
	model = "\z\addons\dayz_epoch\models\doc_trashy2.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_trashy2_ca.paa";
	descriptionShort = $STR_EPOCH_ROMANCENOVEL_DESC2;
};

class ItemBook3: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_BOOK;
	model = "\z\addons\dayz_epoch\models\doc_child1.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_child1_ca.paa";
	descriptionShort = $STR_EPOCH_BOOK_DESC;
};

class ItemBook4: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_BOOK;
	model = "\z\addons\dayz_epoch\models\doc_child2.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_child2_ca.paa";
	descriptionShort = $STR_EPOCH_BOOK_DESC;
};

class ItemNewspaper: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_TORNNEWSPAPER;
	model = "\z\addons\dayz_epoch\models\doc_deaths.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_deaths_ca.paa";
	descriptionShort = $STR_EPOCH_TORNNEWSPAPER_DESC;

	class ItemActions {
		class Obituaries {
			text = $STR_EPOCH_TORNNEWSPAPER_ACTION;
			script = "spawn player_deathBoard;";
		};
	};
};

class ItemDocumentRamp: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODRAMP;
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	descriptionShort = $STR_EPOCH_WOODRAMP_DESC;

	class ItemActions 
	{
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_189;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"wood_ramp_kit",1}};
			input[] = {{"ItemDocumentRamp",1},{"PartWoodLumber",8}};
		};
	};
};

class ItemBookBible : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "z\addons\dayz_communityassets\models\bible.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bible_CA.paa";
	displayName = $STR_BOOK_NAME_BIBLE;
	descriptionShort = $STR_BOOK_DESC_BIBLE;
};

class ItemTrashPaper : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "z\addons\dayz_communityassets\models\paper_sheet_clean_note.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_paper_sheet_note_ca.paa";
	displayName = $STR_name_ItemTrashPaper;
	descriptionShort = $STR_desc_ItemTrashPaper;
};

class ItemTrashPaperMusic : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "z\addons\dayz_communityassets\models\paper_sheet_musical.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_paper_sheet_musical_ca.paa";
	displayName = $STR_name_ItemTrashPaperMusic;
	descriptionShort = $STR_desc_ItemTrashPaperMusic;
};

class equip_paper_sheet : CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_paper_sheet;
	descriptionShort = $STR_ITEM_DESC_equip_paper_sheet;
	picture = "\z\addons\dayz_communityassets\CraftingPlaceholders\equip_paper_sheet.paa";
	type = 256;
};

class equip_note : CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_note;
	descriptionShort = $STR_ITEM_DESC_equip_note;
	picture = "\z\addons\dayz_communityassets\CraftingPlaceholders\equip_note.paa";
	type = 256;
};

// Vehicle upgrade parts
class ItemORP: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_VEHUP_ORP;
	model = "\z\addons\dayz_epoch\models\doc_Up1.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_docup1_ca.paa";
	descriptionShort = $STR_EPOCH_VEHUP_ORP_DESC;
	sfx = "document";
	
	class ItemActions 
	{
		class Upgrades 
		{
			text = $STR_EPOCH_PLAYER_UPGRADEV;
			script = "spawn player_upgradeVehicle;";
		};
	};
};

class ItemAVE: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_VEHUP_AVE;
	model = "\z\addons\dayz_epoch\models\doc_Up2.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_docup2_ca.paa";
	descriptionShort = $STR_EPOCH_VEHUP_AVE_DESC;
	sfx = "document";
	
	class ItemActions 
	{
		class Upgrades 
		{
			text = $STR_EPOCH_PLAYER_UPGRADEV;
			script = "spawn player_upgradeVehicle;";
		};
	};
};

class ItemLRK: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_VEHUP_LRK;
	model = "\z\addons\dayz_epoch\models\doc_Up3.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_docup3_ca.paa";
	descriptionShort = $STR_EPOCH_VEHUP_LRK_DESC;
	sfx = "document";
	
	class ItemActions 
	{
		class Upgrades 
		{
			text = $STR_EPOCH_PLAYER_UPGRADEV;
			script = "spawn player_upgradeVehicle;";
		};
	};
};

class ItemTNK: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_VEHUP_TNK;
	model = "\z\addons\dayz_epoch\models\doc_Up4.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_docup4_ca.paa";
	descriptionShort = $STR_EPOCH_VEHUP_TNK_DESC;
	sfx = "document";
	
	class ItemActions 
	{
		class Upgrades 
		{
			text = $STR_EPOCH_PLAYER_UPGRADEV;
			script = "spawn player_upgradeVehicle;";
		};
	};
};

class ItemARM: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_VEHUP_ARM;
	model = "\z\addons\dayz_epoch\models\doc_Up4.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_docup4_ca.paa";
	descriptionShort = $STR_EPOCH_VEHUP_ARM_DESC;
	sfx = "document";
	
	class ItemActions 
	{
		class Upgrades 
		{
			text = $STR_EPOCH_PLAYER_UPGRADEV;
			script = "spawn player_upgradeVehicle;";
		};
	};
};