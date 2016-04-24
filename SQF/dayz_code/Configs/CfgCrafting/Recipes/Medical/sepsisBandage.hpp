class Blueprint_SepsisBandage : Recipe {
	displayName = $STR_CRAFT_NAME_SepsisBandage;
	input[] = 
	{
		{"ItemBandage","CfgMagazines",1},
		{"equip_comfreyleafs","CfgMagazines",1}
	};
	output[] = 
	{
		{"ItemSepsisBandage","CfgMagazines",1}
	};
	required[] = 
	{
	};
};

/*
class Blueprint_SepsisBandage_Packaged : Recipe {
	displayName = $STR_CRAFT_NAME_SepsisBandage;
	input[] = 
	{
		{"equip_rag","CfgMagazines",1},
		{"equip_gauzepackaged","CfgMagazines",1},
		{"equip_comfreyleafs","CfgMagazines",1},
		{"equip_string","CfgMagazines",1}
	};
	output[] = 
	{
		{"ItemSepsisBandage","CfgMagazines",2}
	};
	required[] = 
	{
	};
};
*/