class Blueprint_G36C_camo : Recipe {
	displayName = $STR_CRAFT_NAME_G36C_CAMO;
	descriptionShort = $STR_CRAFT_DESC_G36C_CAMO;
	input[] = 
	{
		{"G36C","CfgWeapons",1},
		{"Attachment_CAMO","CfgMagazines",1}
	};
	output[] = 
	{
		{"G36C_CAMO","CfgWeapons",1}
	};
	required[] = 
	{
		{"ItemToolbox","CfgWeapons",1}
	};
};