class MeleeFishingPole: MeleeWeapon
{
	scope=2;
	autoreload=1;
	magazineReloadTime=0;
	model="\z\addons\dayz_epoch\models\fishing_rod_weaponized.p3d";
	picture="\z\addons\dayz_epoch\pictures\equip_fishingpole_CA.paa";
	displayName="Fishing Pole";
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
			text="Cast Fishing Pole";
			script="spawn player_goFishing;";
		};
		class Toolbelt
		{
			text="Add to Toolbelt";
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
			class Drop
			{
				text="Drop";
				script="spawn player_dropWeapon; r_action_count = r_action_count + 1;";
				use[]=
				{
					"Fishing_Swing"
				};
			};
	};
	class Library
	{
		libTextDesc="";
	};
	descriptionShort="Fishing Pole: This carbon fiber rod may be old but, she still works like a charm.";
};	