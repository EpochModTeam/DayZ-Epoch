class 1Rnd_Arrow_Wood : CA_Magazine
{
	scope = public;
	
	model = "\dayz_weapons\models\bolt_gear";
	picture = "\z\addons\dayz_communityassets\pictures\equip_warrow_ca.paa";
	displayName = $STR_ITEMWOODENARROW_CODE_NAME;
	descriptionShort = $STR_ITEMWOODENARROW_CODE_DESC;
	
	count = 1;
	initSpeed = 150;
	ammo = "WoodenArrow";
	
	class ItemActions
	{
		class CreateQuiver
		{
			text = $STR_ACTION_CREATEQUIVER;
			script = "spawn player_createquiver";
		};
	};
};

class 12Rnd_Quiver_Wood : 1Rnd_Arrow_Wood
{
	type = WeaponSlotItem * 2;
	
	model = "\z\addons\dayz_communityassets\models\quiver";
	picture = "\z\addons\dayz_communityassets\pictures\equip_quiver_ca.paa";
	descriptionShort = $STR_ITEMQUIVER_CODE_DESC;
	displayName = $STR_ITEMQUIVER_CODE_NAME;
	
	count = 12;
	
	class ItemActions
	{
		COMBINE_MAG
		
		class FillQuiver
		{
			text = $STR_ACTION_FILLQUIVER;
			script = "spawn player_fillquiver;";
		};
	};
};

class 1Rnd_Bolt_Tranquilizer : CA_Magazine
{
	scope = public;
	type = WeaponSlotItem;
	count = 1;
	
	model = "z\addons\community_crossbow\models\ammo.p3d";
	picture = "\z\addons\community_crossbow\textures\bolt_tranq.paa";
	displayName = $STR_DZ_MAG_BOLT_TRQ_NAME;
	descriptionShort = $STR_DZ_MAG_BOLT_TRQ_DESC;
	
	ammo = "tranquiliser_bolt";
};

class 1Rnd_Bolt_Explosive : CA_Magazine
{
	scope = public;
	type = WeaponSlotItem;
	count = 1;
	
	picture = "\z\addons\community_crossbow\textures\bolt_expl.paa";
	model = "z\addons\community_crossbow\models\ammo.p3d";
	displayName = $STR_DZ_MAG_BOLT_EXP_NAME;
	descriptionShort = $STR_DZ_MAG_BOLT_EXP_DESC;
	
	ammo = "explosive_bolt";
};

//TODO: Remove legacy
class WoodenArrow : 1Rnd_Arrow_Wood {};
class Quiver : 12Rnd_Quiver_Wood {};
class Tranquiliser_Bolt : 1Rnd_Bolt_Tranquilizer {};
class Crossbow_EX_Bolt : 1Rnd_Bolt_Explosive {};