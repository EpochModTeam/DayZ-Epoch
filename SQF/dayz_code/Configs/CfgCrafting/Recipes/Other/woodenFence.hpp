class Blueprint_woodenFence : Recipe {
	displayName = $STR_ITEM_NAME_equip_crate;
	input[] = 
	{
		{"ItemLog","CfgMagazines",2},
		{"ItemStone","CfgMagazines",3}
	};
	output[] = 
	{
		{"equip_crate","CfgMagazines",1}
	};
	required[] = 
	{
		{"ItemEtool","CfgWeapons",1}
	};
};