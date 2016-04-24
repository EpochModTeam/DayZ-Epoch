class Blueprint_M9SD : Recipe {
	displayName = $STR_CRAFT_NAME_M9SD;
	descriptionShort = $STR_CRAFT_DESC_M9SD;
	input[] = 
	{
		{"M9","CfgWeapons",1},
		{"Attachment_Silencer","CfgMagazines",1}
	};
	output[] = 
	{
		{"M9SD","CfgWeapons",1}
	};
	required[] = 
	{
		{"ItemToolbox","CfgWeapons",1}
	};
};