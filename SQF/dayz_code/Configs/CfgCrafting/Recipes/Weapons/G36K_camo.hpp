class Blueprint_G36K_camo : Recipe {
	displayName = $STR_CRAFT_NAME_G36K_CAMO;
	descriptionShort = $STR_CRAFT_DESC_G36K_CAMO;
	input[] = 
	{
		{"G36K","CfgWeapons",1},
		{"Attachment_CAMO","CfgMagazines",1}
	};
	output[] = 
	{
		{"G36K_CAMO","CfgWeapons",1}
	};
	required[] = 
	{
		{"ItemToolbox","CfgWeapons",1}
	};
};