class Blueprint_MAKAROVSD : Recipe {
	displayName = $STR_CRAFT_NAME_MAKAROVSD;
	descriptionShort = $STR_CRAFT_DESC_MAKAROVSD;
	input[] = 
	{
		{"Makarov","CfgWeapons",1},
		{"Attachment_Silencer","CfgMagazines",1}
	};
	output[] = 
	{
		{"MakarovSD","CfgWeapons",1}
	};
	required[] = 
	{
		{"ItemToolbox","CfgWeapons",1}
	};
};