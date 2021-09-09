class equip_aa_battery : CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_aa_battery;
	descriptionShort = $STR_ITEM_DESC_equip_aa_battery;
	model = "\z\addons\dayz_epoch_w\magazine\dze_aa_battery.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_aa_battery_ca.paa";
	type = 256;
};

class equip_aa_battery_empty : CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_aa_battery_empty;
	descriptionShort = $STR_ITEM_DESC_equip_aa_battery_empty;
	model = "\z\addons\dayz_epoch_w\magazine\dze_aa_battery.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_aa_battery_ca.paa";
	type = 256;
};

class equip_d_battery : CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_d_battery;
	descriptionShort = $STR_ITEM_DESC_equip_d_battery;	
	model = "\z\addons\dayz_epoch_w\magazine\dze_d_battery.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_d_battery_ca.paa";
	type = 256;
};

class equip_d_battery_empty : CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_d_battery_empty;
	descriptionShort = $STR_ITEM_DESC_equip_d_battery_empty;	
	model = "\z\addons\dayz_epoch_w\magazine\dze_d_battery.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_d_battery_ca.paa";
	type = 256;
};

class equip_floppywire : CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_floppywire;
	descriptionShort = $STR_ITEM_DESC_equip_floppywire;
	model = "\z\addons\dayz_communityassets\models\floppywire.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_floppywire.paa";
	type = 256;
};

class equip_satawire : CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_satawire;
	descriptionShort = $STR_ITEM_DESC_equip_satawire;
	model = "\z\addons\dayz_communityassets\models\floppywire.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_floppywire.paa";
	type = 256;
};

class equip_scrapelectronics : CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_scrapelectronics;
	descriptionShort = $STR_ITEM_DESC_equip_scrapelectronics;
	model = "\z\addons\dayz_communityassets\models\scrapelectronics.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\scrapelectronics.paa";
	type = 256;
};

class equip_graphicscard : CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_graphicscard;
	descriptionShort = $STR_ITEM_DESC_equip_graphicscard;
	model = "\z\addons\dayz_communityassets\models\scrapelectronics.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\scrapelectronics.paa";
	type = 256;
};

class equip_graphicscard_broken : CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_graphicscard_broken;
	descriptionShort = $STR_ITEM_DESC_equip_graphicscard_broken;
	model = "\z\addons\dayz_communityassets\models\scrapelectronics.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\scrapelectronics.paa";
	type = 256;
};

class equip_soundcard : CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_soundcard;
	descriptionShort = $STR_ITEM_DESC_equip_soundcard;
	model = "\z\addons\dayz_communityassets\models\scrapelectronics.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\scrapelectronics.paa";
	type = 256;
};

class equip_soundcard_broken : CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_soundcard_broken;
	descriptionShort = $STR_ITEM_DESC_equip_soundcard_broken;
	model = "\z\addons\dayz_communityassets\models\scrapelectronics.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\scrapelectronics.paa";
	type = 256;
};

class equip_pcicard : CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_pcicard;
	descriptionShort = $STR_ITEM_DESC_equip_pcicard;
	model = "\z\addons\dayz_communityassets\models\scrapelectronics.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\scrapelectronics.paa";
	type = 256;
};

class equip_pcicard_broken : CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_pcicard_broken;
	descriptionShort = $STR_ITEM_DESC_equip_pcicard_broken;
	model = "\z\addons\dayz_communityassets\models\scrapelectronics.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\scrapelectronics.paa";
	type = 256;
};

class ItemLightBulb: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LIGHTBULB;
	model = "\z\addons\dayz_epoch\models\bulb.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_bulb_CA.paa";
	descriptionShort = $STR_EPOCH_LIGHTBULB_DESC;
	
	class ItemActions
	{
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_196;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemEtool","ItemToolbox"};
			output[] = {{"light_pole_kit",1}};
			input[] = {{"ItemLightBulb",1},{"PartGeneric",1},{"PartWoodLumber",6}};
		};
	};
};

class ItemLightBulbBroken: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LIGHTBULB_BROKEN;
	model = "\z\addons\dayz_epoch\models\bulb.p3d";
	picture = "\dayz_epoch_c\icons\equipment\LightBulbBroken.paa";
	descriptionShort = $STR_EPOCH_LIGHTBULB_BROKEN_DESC;
};

class ItemNotebook: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_ITEM_NOTEBOOK;
	descriptionShort = $STR_EPOCH_ITEM_NOTEBOOK_DESC;
	model = "\CA\misc2\notebook\notebook.p3d";
	picture = "\dayz_epoch_c\icons\equipment\Notebook.paa";
};

class ItemNotebookBroken: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_NOTEBOOK_BROKEN;
	descriptionShort = $STR_EPOCH_NOTEBOOK_BROKEN_DESC;
	model = "\CA\misc2\notebook\notebook.p3d";
	picture = "\dayz_epoch_c\icons\equipment\NotebookBroken.paa";
};

class ItemSmallTV: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_SMALL_TV;
	descriptionShort = $STR_EPOCH_SMALL_TV_DESC;
	model = "\CA\misc2\smallTV\smallTV.p3d";
	picture = "\dayz_epoch_c\icons\equipment\SmallTV.paa";
};

class ItemSmallTVBroken: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_SMALL_TV_BROKEN;
	descriptionShort = $STR_EPOCH_SMALL_TV_BROKEN_DESC;
	model = "\CA\misc2\smallTV\smallTV.p3d";
	picture = "\dayz_epoch_c\icons\equipment\SmallTVBroken.paa";
};

class ItemBigTV: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_BIG_TV;
	descriptionShort = $STR_EPOCH_BIG_TV_DESC;
	model = "\CA\Structures\Furniture\Eletrical_appliances\tv_a\tv_a.p3d";
	picture = "\dayz_epoch_c\icons\equipment\BigTV.paa";
};

class ItemBigTVBroken: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_BIG_TV_BROKEN;
	descriptionShort = $STR_EPOCH_BIG_TV_BROKEN_DESC;
	model = "\CA\Structures\Furniture\Eletrical_appliances\tv_a\tv_a.p3d";
	picture = "\dayz_epoch_c\icons\equipment\BigTVBroken.paa";
};

class ItemSatelitePhone: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_SATELLITE_PHONE;
	descriptionShort = $STR_EPOCH_SATELLITE_PHONE_DESC;
	model = "\CA\misc3\satelitePhone\satellitePhone.p3d";
	picture = "\dayz_epoch_c\icons\equipment\SatPhone.paa";
};

class ItemSatelitePhoneBroken: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_SATELLITE_PHONE_BROKEN;
	descriptionShort = $STR_EPOCH_SATELLITE_PHONE_BROKEN_DESC;
	model = "\CA\misc3\satelitePhone\satellitePhone.p3d";
	picture = "\dayz_epoch_c\icons\equipment\SatPhoneBroken.paa";
};

class ItemPC: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_PC;
	descriptionShort = $STR_EPOCH_PC_DESC;
	model = "\CA\Structures\Furniture\Eletrical_appliances\pc\pc.p3d";
	picture = "\dayz_epoch_c\icons\equipment\PC.paa";
};

class ItemPCBroken: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_PC_BROKEN;
	descriptionShort = $STR_EPOCH_PC_BROKEN_DESC;
	model = "\CA\Structures\Furniture\Eletrical_appliances\pc\pc.p3d";
	picture = "\dayz_epoch_c\icons\equipment\PCBroken.paa";
};

class ItemDesktopRadio: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_DESKTOP_RADIO;
	descriptionShort = $STR_EPOCH_DESKTOP_RADIO_DESC;
	model = "\CA\misc\mutt_vysilacka.p3d";
	picture = "\dayz_epoch_c\icons\equipment\DesktopRadio.paa";
};

class ItemDesktopRadioBroken: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_DESKTOP_RADIO_BROKEN;
	descriptionShort = $STR_EPOCH_DESKTOP_RADIO_BROKEN_DESC;
	model = "\CA\misc\mutt_vysilacka.p3d";
	picture = "\dayz_epoch_c\icons\equipment\DesktopRadioBroken.paa";
};

class ItemMusicRadio1: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_RADIO_MUSIC1;
	descriptionShort = $STR_EPOCH_RADIO_MUSIC1_DESC;
	model = "\CA\misc\radio.p3d";
	picture = "\dayz_epoch_c\icons\equipment\MusicRadio1.paa";
};

class ItemMusicRadio1Broken: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_RADIO_MUSIC1_BROKEN;
	descriptionShort = $STR_EPOCH_RADIO_MUSIC1_BROKEN_DESC;
	model = "\CA\misc\radio.p3d";
	picture = "\dayz_epoch_c\icons\equipment\MusicRadio1Broken.paa";
};

class ItemMusicRadio2: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_RADIO_MUSIC2;
	descriptionShort = $STR_EPOCH_RADIO_MUSIC2_DESC;
	model = "\CA\Structures\Furniture\Eletrical_appliances\radio_b\radio_b.p3d";
	picture = "\dayz_epoch_c\icons\equipment\MusicRadio2.paa";
};

class ItemMusicRadio2Broken: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_RADIO_MUSIC2_BROKEN;
	descriptionShort = $STR_EPOCH_RADIO_MUSIC2_BROKEN_DESC;
	model = "\CA\Structures\Furniture\Eletrical_appliances\radio_b\radio_b.p3d";
	picture = "\dayz_epoch_c\icons\equipment\MusicRadio2Broken.paa";
};