class equip_aa_battery : CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_aa_battery;
	descriptionShort = $STR_ITEM_DESC_equip_aa_battery;
	picture = "\z\addons\dayz_communityassets\pictures\equip_aa_battery_ca.paa";
	type = 256;
};

class equip_d_battery : CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_d_battery;
	descriptionShort = $STR_ITEM_DESC_equip_d_battery;
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