class Blueprint_Bandage : Recipe {
	displayName = $STR_CRAFT_NAME_Bandage;
	input[] = 
	{
		{"equip_rag","CfgMagazines",1},
		{"equip_gauze","CfgMagazines",1},
		{"equip_string","CfgMagazines",1}
	};
	output[] = 
	{
		{"ItemBandage","CfgMagazines",2}
	};
	required[] = 
	{
	};
};

class Blueprint_Bandage_Packaged : Recipe {
	displayName = $STR_CRAFT_NAME_Bandage;
	input[] = 
	{
		{"equip_rag","CfgMagazines",1},
		{"equip_gauzepackaged","CfgMagazines",1},
		{"equip_string","CfgMagazines",1}
	};
	output[] = 
	{
		{"ItemBandage","CfgMagazines",2}
	};
	required[] = 
	{
	};
};