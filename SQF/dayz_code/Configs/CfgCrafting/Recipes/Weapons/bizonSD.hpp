class Blueprint_bizonSD : Recipe {
	displayName = $STR_CRAFT_NAME_bizonSD;
	descriptionShort = $STR_CRAFT_DESC_bizonSD;
	input[] = 
	{
		{"bizon","CfgWeapons",1},
		{"Attachment_Silencer","CfgMagazines",1}
	};
	output[] = 
	{
		{"bizon_silenced","CfgWeapons",1}
	};
	required[] = 
	{
		{"ItemToolbox","CfgWeapons",1}
	};
};