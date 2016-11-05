class ItemShovel : ItemCore
{
	scope = public;
	
	model = "\z\addons\dayz_communityassets\models\shovel.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_shovel_ca.paa";
	displayName = $STR_EQUIP_NAME_1b;
	descriptionShort = $STR_EQUIP_DESC_1b;
	
	stashsmall = "StashSmall";
	stashmedium = "StashMedium";
	consume = "ItemSandbag";
	
	class ItemActions
	{
		/*class Use
		{
			text = $STR_CREATE_STASH;
			script = "spawn player_createstash;";
		};*/
	};
};

class ItemShovelBroken : ItemCore
{
	scope = public;
	
	model = "\z\addons\dayz_communityassets\models\shovel.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_shovel_ca.paa";
	displayName = $STR_EQUIP_NAME_1b_BROKEN;
	descriptionShort = $STR_EQUIP_DESC_1b_BROKEN;
};