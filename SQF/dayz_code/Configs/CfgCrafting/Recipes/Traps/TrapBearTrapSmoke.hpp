class Blueprint_TrapBearTrapSmoke : Recipe {
	displayName = $STR_ITEM_NAME_BEAR_TRAP_SMOKE;
	descriptionShort = $STR_ITEM_DESC_BEAR_TRAP_SMOKE;
	input[] = 
	{
		{"equip_string","CfgMagazines",1},
		{"TrapBear","CfgMagazines",1},
		{"PartWoodPile","CfgMagazines",1},
		{"equip_duct_tape","CfgMagazines",1},
		{{"SmokeShell","CfgMagazines",1},
			{"SmokeShellRed","CfgMagazines",1},
			{"SmokeShellGreen","CfgMagazines",1}}
	};
	output[] = 
	{
		{"ItemTrapBearTrapSmoke","CfgMagazines",1}
	};
	required[] = 
	{
		{"ItemToolbox","CfgWeapons",1}
	};
};
