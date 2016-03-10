class TrashJackDaniels : HandGrenade
{
	scope = public;
	
	model = "\dayz_equip\models\bottle_jd.p3d";
	picture = "\dayz_equip\textures\equip_bottle_jd_ca.paa";
	displayName = $STR_EQUIP_NAME_34;
	descriptionShort = $STR_EQUIP_DESC_34;
	
	ammo = "JackDaniels";
};

class ItemBookBible : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "z\addons\dayz_communityassets\models\bible.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bible_CA.paa";
	displayName = $STR_BOOK_NAME_BIBLE;
	descriptionShort = $STR_BOOK_DESC_BIBLE;
};

class ItemCards : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "z\addons\dayz_communityassets\models\cards.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_cards_ca.paa";
	displayName = $STR_ITEM_NAME_CARDS;
	descriptionShort = $STR_ITEM_DESC_CARDS;
};

class ItemKosmosSmokes : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\z\addons\dayz_communityassets\models\smokes_kosmos.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_kosmos_ca.paa";
	displayName = "Kosmos Smokes";
	descriptionShort = "One Pack of Kosmos Brand cigarettes";
};

class ItemKosmosSmokesOpen : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\z\addons\dayz_communityassets\models\smokes_open_k.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_smokes_open_k_ca.paa";
	displayName = "Kosmos Smokes";//TODO: move to stringtable
	descriptionShort = "One Opened Pack of Kosmos Brand cigarettes";
};

class ItemTrashPaper : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "z\addons\dayz_communityassets\models\paper_sheet_clean_note.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_paper_sheet_note_ca.paa";
	displayName = $STR_name_ItemTrashPaper;
	descriptionShort = $STR_desc_ItemTrashPaper;
};

class ItemTrashPaperMusic : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "z\addons\dayz_communityassets\models\paper_sheet_musical.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_paper_sheet_musical_ca.paa";
	displayName = $STR_name_ItemTrashPaperMusic;
	descriptionShort = $STR_desc_ItemTrashPaperMusic;
};

class ItemTrashRazor : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "z\addons\dayz_communityassets\models\razor.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_razor_CA.paa";
	displayName = $STR_JUNK_NAME_RAZOR;
	descriptionShort = $STR_JUNK_DESC_RAZOR;
};

class ItemTrashToiletpaper : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "z\addons\dayz_communityassets\models\toiletpaper.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_toiletpaper_CA.paa";
	displayName = $STR_JUNK_NAME_TOILETPAPER;
	descriptionShort = $STR_JUNK_DESC_TOILETPAPER;
};
