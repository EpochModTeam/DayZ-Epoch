class Blueprint_M4A1_AIM : Recipe {
	displayName = $STR_CRAFT_NAME_M4A1_AIM;
	descriptionShort = $STR_CRAFT_DESC_M4A1_AIM;
	input[] = 
	{
		{"M4A1","CfgWeapons",1},
		{"Attachment_AIM","CfgMagazines",1},
		{"equip_rail_screws","CfgMagazines",2},
		{"equip_weapon_rails","CfgMagazines",1}
	};
	output[] = 
	{
		{"M4A1_AIM","CfgWeapons",1}
	};
	required[] = 
	{
		{"ItemToolbox","CfgWeapons",1}
	};
};