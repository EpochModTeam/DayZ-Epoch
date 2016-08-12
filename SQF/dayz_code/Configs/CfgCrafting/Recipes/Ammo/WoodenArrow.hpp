class Wooden_Arrow : Recipe {
	displayName = $STR_ITEMWOODENARROW_CODE_NAME;
	input[] = 
	{
		{"PartWoodPile","CfgMagazines",1},
		{"equip_feathers","CfgMagazines",2}
	};
	output[] = 
	{
		{"1Rnd_Arrow_Wood","CfgMagazines",4}
	};
	required[] = 
	{
		{"ItemToolbox","CfgWeapons",1}
	};
};