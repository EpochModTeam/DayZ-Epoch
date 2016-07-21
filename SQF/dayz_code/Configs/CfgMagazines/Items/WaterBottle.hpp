class ItemWaterBottleUnfilled : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\dayz_equip\models\waterbottle_gear.p3d";
	picture = "\dayz_equip\textures\equip_waterbottle_empty_ca.paa";
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

class ItemWaterBottleDmg : CA_Magazine //We don't have a damaged canteen image/model , so the regular bottle image is used for now
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\dayz_equip\models\waterbottle_gear.p3d";
	picture = "\dayz_equip\textures\equip_waterbottle_empty_ca.paa";
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