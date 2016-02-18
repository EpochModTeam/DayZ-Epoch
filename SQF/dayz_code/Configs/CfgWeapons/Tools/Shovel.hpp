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
		class Use
		{
			text = $STR_CREATE_STASH;
			script = "spawn player_createstash; r_action_count = r_action_count + 1;";
		};
	};
};

class ItemShovelBroken : ItemCore
{
	scope = public;
	
	model = "\z\addons\dayz_communityassets\models\shovel.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_shovel_ca.paa";
	displayName = "Broken Shovel";
	descriptionShort = $STR_EQUIP_DESC_1b;
};