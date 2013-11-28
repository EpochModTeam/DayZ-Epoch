class MeleeHatchet_DZE: MeleeWeapon
{
	scope=2;
	melee= "true";
	autoreload=1;
	magazineReloadTime=0;
	model="\dayz_weapons\models\Hatchet_weaponized";
	picture="\dayz_equip\textures\equip_hatchet_CA.paa";
	displayName=$STR_EQUIP_NAME_41;
	droppeditem= "ItemHatchet_DZE";
	magazines[]=
	{
		"Hatchet_Swing"
	};
	handAnim[]=
	{
		"OFP2_ManSkeleton",
		"\dayz_weapons\anim\melee_hatchet_holding.rtm"
	};
	class ItemActions
	{
		class Toolbelt
		{
			text=$STR_EPOCH_PLAYER_296;
			script="spawn player_addToolbelt;";
			use[]=
			{
				"MeleeHatchet_DZE"
			};
			output[]=
			{
				"ItemHatchet_DZE"
			};
		};
	};
	class Library
	{
		libTextDesc=$STR_EQUIP_DESC_41;
	};
	descriptionShort=$STR_EQUIP_DESC_41;
};
