class MeleeCrowbar: MeleeWeapon
	{
		scope=2;
		melee= "true";
		autoreload=1;
		magazineReloadTime=0;
		model="\dayz_weapons\models\crowbar_weaponized";
		picture="\dayz_weapons\textures\equip_crowbar_CA.paa";
		displayName=$STR_EQUIP_NAME_CROWBAR;
		droppeditem= "ItemCrowbar";
		magazines[]=
		{
			"Crowbar_Swing"
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
				text=$STR_ACTIONS_2TB;
				script="spawn player_addToolbelt;";
				use[]=
				{
					"MeleeCrowbar"
				};
				output[]=
				{
					"ItemCrowbar"
				};
			};
			
			class Drop
			{
				text=$STR_ACTIONS_DROP;
				script="spawn player_dropWeapon;";
				use[]=
				{
					"Crowbar_Swing"
				};
			};
		};
		class Library
		{
			libTextDesc=$STR_EQUIP_DESC_CROWBAR;
		};
		descriptionShort=$STR_EQUIP_DESC_CROWBAR; 
	};