class PipeBomb : Recipe {
	displayName = $STR_CRAFT_NAME_PipeBomb;
	descriptionShort = $STR_CRAFT_DESC_PipeBomb;
	input[] = 
	{
		{"equip_1inch_metal_pipe","CfgMagazines",1},
		{"equip_2inch_metal_pipe","CfgMagazines",1},
		{"equip_metal_sheet","CfgMagazines",1},
		{"equip_fuse","CfgMagazines",1},
		{"equip_pipecap","CfgMagazines",1],
	};
	output[] = 
	{
		{"PipeBomb","CfgMagazines",1}
	};
	required[] = 
	{
		{"ItemToolbox","CfgWeapons",1}
	};
};