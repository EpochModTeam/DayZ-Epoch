class Blueprint_SVD_CAMO : Recipe {
	displayName = $STR_CRAFT_NAME_SVD_CAMO;
	descriptionShort = $STR_CRAFT_DESC_SVD_CAMO;
	input[] = 
	{
		{"SVD_DZ","CfgWeapons",1},
		{"Skin_Sniper1_DZ","CfgMagazines",1},
		{"Attachment_CAMO","CfgMagazines",1}
	};
	output[] = 
	{
		{"SVD_CAMO_DZ","CfgWeapons",1}
	};
	required[] = 
	{
		{"ItemToolbox","CfgWeapons",1}
	};
};