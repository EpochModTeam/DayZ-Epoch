class Wooden_Arrow : Recipe {
	displayName = $STR_ITEMWOODENARROW_CODE_NAME;
	input[] = 
	{
		{"PartWoodPile","CfgMagazines",1},
		{"equip_feathers","CfgMagazines",2}
	};
	output[] = 
	{
		{"WoodenArrow","CfgMagazines",4}
	};
	required[] = 
	{
		{"ItemToolbox","CfgWeapons",1}
	};
};