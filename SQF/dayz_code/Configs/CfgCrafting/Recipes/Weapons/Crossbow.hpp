class Blueprint_Crossbow_Kit : Recipe {
	displayName = $STR_WPN_NAME_4;
	input[] = 
	{
		{"equip_crossbow_Stock","CfgMagazines",1},
		{"equip_Crossbow_Kit","CfgMagazines",1}
	};
	output[] = 
	{
		{"Crossbow_DZ","CfgWeapons",1}
	};
	required[] = 
	{
		{"ItemToolbox","CfgWeapons",1}
	};
};