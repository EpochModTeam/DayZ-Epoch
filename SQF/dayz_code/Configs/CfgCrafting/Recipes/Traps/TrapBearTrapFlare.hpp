class Blueprint_TrapBearTrapFlare : Recipe {
	displayName = $STR_ITEM_NAME_BEAR_TRAP_FLARE;
	descriptionShort = $STR_ITEM_DESC_BEAR_TRAP_FLARE;
	input[] = 
	{
		{"equip_string","CfgMagazines",1},
		{"TrapBear","CfgMagazines",1},
		{"PartWoodPile","CfgMagazines",1},
		{"equip_duct_tape","CfgMagazines",1},
		{"HandRoadFlare","CfgMagazines",1}
	};
	output[] = 
	{
		{"ItemTrapBearTrapFlare","CfgMagazines",1}
	};
	required[] = 
	{
		{"ItemToolbox","CfgWeapons",1}
	};
};
