class ItemWaterBottleUnfilled : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\z\addons\dayz_communityassets\textures\waterbottle.paa";
	displayName = $STR_EQUIP_NAME_13;
	descriptionShort = $STR_EQUIP_DESC_13;
	
	containerWater = "ItemWaterBottle";
	containerWaterSafe = "ItemWaterBottleSafe";
	containerWaterInfected = "ItemWaterBottleInfected";
	
	class ItemActions
	{
		class Fill
		{
			text = $STR_ACTIONS_FILL_W;
			script = "spawn player_fillWater;";
		};
	};
};

class ItemWaterBottleDmg : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "z\addons\dayz_communityassets\models\waterbottle_damaged.p3d";
	picture = "\z\addons\dayz_communityassets\textures\waterbottle_damaged.paa";
	displayName = $STR_ITEMWATERBOTTLEDMG_CODE_NAME;
	descriptionShort = $STR_ITEMWATERBOTTLEDMG_CODE_DESC;
	
	class ItemActions
	{
		class Repair
		{
			text = $STR_ACTIONS_FIX_W;
			script = "spawn player_fixBottle;";
		};
	};
};