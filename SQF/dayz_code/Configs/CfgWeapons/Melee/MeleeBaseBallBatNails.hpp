class MeleeBaseBallBatNails : MeleeWeapon
	{
		scope=2;
		melee= "true";
		autoreload=1;
		magazineReloadTime=0;
		model="\z\addons\dayz_communityassets\models\baseball_bat_nails_weaponized.p3d";
		picture="\z\addons\dayz_communityassets\pictures\equip_baseball_bat_nails_ca.paa";
		displayName="$STR_EQUIP_NAME_BASEBALLBATNAILS";
		droppeditem= "MeleeBaseBallBatNails";
		magazines[]=
		{
			"BatNails_Swing"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\dayz_weapons\anim\melee_hatchet_holding.rtm"
		};
		class Library
		{
			libTextDesc="$STR_EQUIP_DESC_BASEBALLBATNAILS";
		};
		descriptionShort="$STR_EQUIP_DESC_BASEBALLBATNAILS";
	};