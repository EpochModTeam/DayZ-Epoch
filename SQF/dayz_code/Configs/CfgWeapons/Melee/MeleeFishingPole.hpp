class MeleeFishingPole: MeleeWeapon
{
	scope=2;
	autoreload=1;
	magazineReloadTime=0;
	model="\z\addons\dayz_epoch\models\fishing_rod_weaponized.p3d";
	picture="\z\addons\dayz_epoch\pictures\equip_fishingpole_CA.paa";
	displayName=$STR_EQUIP_FISHPOLE;
	magazines[]=
	{
		"Fishing_Swing"
	};
	handAnim[]=
	{
		"OFP2_ManSkeleton",
		"\dayz_weapons\anim\melee_hatchet_holding.rtm"
	};
	class ItemActions
	{
		class Use
		{
			text=$STR_EPOCH_PLAYER_297;
			script="spawn player_goFishing;";
		};
		class Toolbelt
		{
			text=$STR_EPOCH_PLAYER_296;
			script="spawn player_addToolbelt;";
			use[]=
			{
				"MeleeFishingPole"
			};
			output[]=
			{
				"ItemFishingPole"
			};
		};
	};
	class Library
	{
		libTextDesc="";
	};
	descriptionShort=$STR_EQUIP_FISHPOLE_DESC;
};	
