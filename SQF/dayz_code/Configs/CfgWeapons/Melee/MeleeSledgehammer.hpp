class MeleeSledge: MeleeWeapon
	{
		scope=2;
		melee= "true";
		autoreload=1;
		magazineReloadTime=0;
		model="\z\addons\dayz_epoch\models\sledge_weaponized";
		picture="\z\addons\dayz_epoch\pictures\equip_sledge_CA.paa"; // todo icon
		displayName="Sledgehammer";
		droppeditem= "ItemSledge";
		magazines[]=
		{
			"sledge_swing"
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
				text="Add to Toolbelt";
				script="spawn player_addToolbelt;";
				use[]=
				{
					"MeleeSledge"
				};
				output[]=
				{
					"ItemSledge"
				};
			};
		};
		class Library
		{
			libTextDesc="A tool with a large, flat head attached to a handle. The head is typically made of metal. The sledgehammer can apply more force than other hammers.";
		};
		descriptionShort="A tool with a large, flat head attached to a handle. The head is typically made of metal. The sledgehammer can apply more force than other hammers.";
	};