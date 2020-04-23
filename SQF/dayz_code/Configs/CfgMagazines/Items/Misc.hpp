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

class ItemHotwireKit: CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_HOTWIREKIT;
	model = "\z\addons\dayz_epoch\models\hotwire.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_hotwire_ca.paa";
	descriptionShort = $STR_EPOCH_HOTWIREKIT_DESC;
	weight = 2;
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
	displayName = $STR_ITEM_NAME_KOSMOS_SMOKES;
	descriptionShort = $STR_ITEM_DESC_KOSMOS_SMOKES;
};

class ItemKosmosSmokesOpen : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\z\addons\dayz_communityassets\models\smokes_open_k.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_smokes_open_k_ca.paa";
	displayName = $STR_ITEM_NAME_KOSMOS_SMOKES;
	descriptionShort = $STR_ITEM_DESC_KOSMOS_SMOKES_OPENED;
};

class equip_nails : CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_nails;
	descriptionShort = $STR_ITEM_DESC_equip_nails;
	model = "\z\addons\dayz_communityassets\models\nails.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_nails_ca.paa";
	type = 256;
};

class ItemScrews: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_BLD_name_ItemScrews;//"Box of screws for metal"
	picture = "\z\addons\dayz_epoch_w\magazine\ui\m_screws_ca.paa";
    model = "\z\addons\dayz_epoch_w\magazine\dze_screwtray.p3d";
	descriptionShort = $STR_BLD_desc_ItemScrews;//"Box of screws"
};

class equip_duct_tape : CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_duct_tape;
	descriptionShort = $STR_ITEM_DESC_equip_duct_tape;
	model = "\z\addons\dayz_communityassets\models\duct_tape.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\tape.paa";
	type = 256;
};

class equip_feathers : CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_feathers;
	descriptionShort = $STR_ITEM_DESC_equip_feathers;
	model = "\z\addons\dayz_communityassets\models\feather.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_feather_ca.paa";
	type = 256;
};

class equip_pvc_box : CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_pvc_box;
	descriptionShort = $STR_ITEM_DESC_equip_pvc_box;
		model = "\z\addons\dayz_communityassets\models\plastic_box.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_plastic_box_ca.paa";
	type = 256;
};

class equip_hobo_fishing_kit : CA_Magazine {
	scope = public;
	count = 1;
	displayName = "Hobo Fishing Kit";
	descriptionShort = "Hobo Fishing Kit, catches dem fishes";
	model = "\z\addons\dayz_communityassets\models\hobofishingkit.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_hobofishingkit_ca.paa";
	type = 256;
};

class equip_hose : CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_hose;
	descriptionShort = $STR_ITEM_DESC_equip_hose;
	model = "\z\addons\dayz_communityassets\models\hose.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_hose.paa";
	type = 256;
};

class equip_hose_clamp : CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_hose_clamp;
	descriptionShort = $STR_ITEM_DESC_equip_hose_clamp;
	model = "\z\addons\dayz_communityassets\models\hose_clamp.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_hoseclamp_ca.paa";
	type = 256;
};

class Item_coni : CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_ITEM_DESC_equip_con_i;
	descriptionShort = $STR_ITEM_NAME_equip_con_i;
	model = "z\addons\dayz_communityassets\models\connector_i.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_connector_i_ca.paa";
	type = 256;
};

class Item_Connector_I : CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_ITEM_DESC_equip_con_i;
	descriptionShort = $STR_ITEM_NAME_equip_con_i;
	model = "z\addons\dayz_communityassets\models\connector_I.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_connector_I_ca.paa";
	type = 256;
};

class Item_Connector_L : CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_ITEM_DESC_equip_con_l;
	descriptionShort = $STR_ITEM_NAME_equip_con_l;
	model = "z\addons\dayz_communityassets\models\connector_L.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_connector_L_ca.paa";
	type = 256;
};

class Item_Connector_T : CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_ITEM_DESC_equip_con_t;
	descriptionShort = $STR_ITEM_NAME_equip_con_t;
	model = "z\addons\dayz_communityassets\models\connector_T.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_connector_T_ca.paa";
	type = 256;
};

class equip_tin_powder : CA_Magazine {
	scope = public;
	count = 1;
	displayName = "Tin of Powder";
	descriptionShort = "Tin of Powder has medicinal qualities";
	model = "\z\addons\dayz_communityassets\models\tin_powder.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_tin_powder_co.paa";
	type = 256;
};

class equip_slugsinacan : CA_Magazine {
	scope = public;
	count = 1;
	displayName = "Slugs in a can";
	descriptionShort = "Slugs in a can";
	model = "\z\addons\dayz_communityassets\models\slugsinacan.p3d";
	picture = "\z\addons\dayz_communityassets\CraftingPlaceholders\equip_sluginacan.paa";
	type = 256;
};

//No models
class equip_cable_tie : CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_cable_tie;
	descriptionShort = $STR_ITEM_DESC_equip_cable_tie;
	picture = "\z\addons\dayz_communityassets\CraftingPlaceholders\equip_cable_tie.paa";
	type = 256;
};

class equip_needle : CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_needle;
	descriptionShort = $STR_ITEM_DESC_equip_needle;
	picture = "\z\addons\dayz_communityassets\CraftingPlaceholders\equip_needle.paa";
	type = 256;
};

class equip_laser : CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_laser;
	descriptionShort = $STR_ITEM_DESC_equip_laser;
	picture = "\z\addons\dayz_communityassets\CraftingPlaceholders\equip_laser.paa";
	type = 256;
};

class equip_weapon_rails: CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_weapon_rails;
	descriptionShort = $STR_ITEM_DESC_equip_weapon_rails;
	picture = "\z\addons\dayz_communityassets\CraftingPlaceholders\equip_part_somegeneric.paa";
	type = 256;
};

class equip_rail_screws : CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_rail_screws;
	descriptionShort = $STR_ITEM_DESC_equip_rail_screws;
	picture = "\z\addons\dayz_communityassets\CraftingPlaceholders\equip_part_somegeneric.paa";
	type = 256;
};
