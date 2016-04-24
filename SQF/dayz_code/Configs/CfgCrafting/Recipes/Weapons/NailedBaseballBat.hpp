class Blueprint_NailedBaseballBat : Recipe {
	displayName = $STR_CRAFT_NAME_NailedBaseballBat;
	descriptionShort = $STR_CRAFT_DESC_NailedBaseballBat;
	input[] = 
	{
		{"MeleeBaseBallBat","CfgWeapons",1},
		{"equip_nails","CfgMagazines",2}
	};
	output[] = 
	{
		{"MeleeBaseBallBatNails","CfgWeapons",1}
	};
	required[] = 
	{
		{"ItemToolbox","CfgWeapons",1}
	};
};