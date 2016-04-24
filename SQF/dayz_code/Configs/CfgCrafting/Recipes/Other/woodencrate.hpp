class Blueprint_crate : Recipe {
	displayName = $STR_ITEM_NAME_equip_crate;
	input[] = 
	{
		{"PartWoodPile","CfgMagazines",6},
		{"equip_nails","CfgMagazines",1}
	};
	output[] = 
	{
		{"equip_crate","CfgMagazines",1}
	};
	required[] = 
	{
		{"ItemToolbox","CfgWeapons",1}
	};
};
