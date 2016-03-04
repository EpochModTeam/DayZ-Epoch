class Blueprint_BaseBallBatBarbed : Recipe {
	displayName = $STR_CRAFT_NAME_BaseBallBatBarbed;
	descriptionShort = $STR_CRAFT_DESC_BaseBallBatBarbed;
	input[] = 
	{
		{"MeleeBaseBallBat","CfgWeapons",1},
		{"equip_nails","CfgMagazines",1},
		{"ItemWire","CfgMagazines",1}
	};
	output[] = 
	{
		{"MeleeBaseBallBatBarbed","CfgWeapons",1}
	};
	required[] = 
	{
		{"ItemToolbox","CfgWeapons",1}
	};
};