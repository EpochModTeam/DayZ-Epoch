class Blueprint_woodenCraftTable : Recipe {
	displayName = $STR_ITEM_NAME_WOODENCRAFTTABLE;
	input[] = 
	{
		{"PartWoodPile","CfgMagazines",1}
		//{"equip_nails","CfgMagazines",1}
	};
	output[] = 
	{
		{"ItemcraftTable","CfgMagazines",1}
	};
	required[] = 
	{
		{"ItemToolbox","CfgWeapons",1}
	};
};
