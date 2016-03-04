class Blueprint_M4A1_HWS_GL_CAMO : Recipe {
	displayName = $STR_CRAFT_NAME_M4A1_HWS_GL_CAMO;
	descriptionShort = $STR_CRAFT_DESC_M4A1_HWS_GL_CAMO;
	input[] = 
	{
		{"M4A1_HWS_GL","CfgWeapons",1},
		{"Attachment_CAMO","CfgMagazines",1}
	};
	output[] = 
	{
		{"M4A1_HWS_GL_CAMO","CfgWeapons",1}
	};
	required[] = 
	{
		{"ItemToolbox","CfgWeapons",1}
	};
};