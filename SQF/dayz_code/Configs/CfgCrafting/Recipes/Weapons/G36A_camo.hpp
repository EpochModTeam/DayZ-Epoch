class Blueprint_G36A_camo : Recipe {
	displayName = $STR_CRAFT_NAME_G36A_CAMO;
	descriptionShort = $STR_CRAFT_DESC_G36A_CAMO;
	input[] = 
	{
		{"G36A","CfgWeapons",1},
		{"Attachment_CAMO","CfgMagazines",1}
	};
	output[] = 
	{
		{"G36A_CAMO","CfgWeapons",1}
	};
	required[] = 
	{
		{"ItemToolbox","CfgWeapons",1}
	};
};