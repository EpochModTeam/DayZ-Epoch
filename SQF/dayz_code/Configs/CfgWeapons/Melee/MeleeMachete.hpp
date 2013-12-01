class MeleeMachete: MeleeWeapon
	{
		scope=2;
		melee= "true";
		autoreload=1;
		magazineReloadTime=0;
		model="\z\addons\dayz_communityassets\models\machete_weaponized.p3d";
		picture="\z\addons\dayz_communityassets\pictures\equip_machete_CA.paa";
		displayName="Machete";
		droppeditem= "MeleeMachete";
		magazines[]=
		{
			"Machete_Swing"
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
					"MeleeMachete"
				};
				output[]=
				{
					"ItemMachete"
				};
			};
		};
		class Library
		{
			libTextDesc="";
		};
		descriptionShort="An agricultural tool turned into a weapon, the Machete may be less versatile than the common hatchet, but it packs a punch.";
	};	
