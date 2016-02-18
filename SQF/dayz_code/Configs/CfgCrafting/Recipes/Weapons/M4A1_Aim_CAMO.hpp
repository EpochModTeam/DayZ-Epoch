class Blueprint_M4A1_Aim_CAMO : Recipe {
	displayName = $STR_CRAFT_NAME_M4A1_Aim_CAMO;
	descriptionShort = $STR_CRAFT_DESC_M4A1_Aim_CAMO;
	input[] = 
	{
		{"M4A1_Aim","CfgWeapons",1},
		{"Attachment_CAMO","CfgMagazines",1}
	};
	output[] = 
	{
		{"M4A1_Aim_CAMO","CfgWeapons",1}
	};
	required[] = 
	{
		{"ItemToolbox","CfgWeapons",1}
	};
};