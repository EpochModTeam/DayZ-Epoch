class Blueprint_TrapTripwireFlare : Recipe {
	displayName = $STR_ITEM_NAME_TRIPWIRE_FLARE;
	descriptionShort = $STR_ITEM_DESC_TRIPWIRE_FLARE;
	input[] = 
	{
		{"equip_string","CfgMagazines",1},
		{"PartWoodPile","CfgMagazines",1},
		{"equip_duct_tape","CfgMagazines",1},
		{"HandRoadFlare","CfgMagazines",1}
	};
	output[] = 
	{
		{"ItemTrapTripwireFlare","CfgMagazines",1}
	};
	required[] = 
	{
		{"ItemToolbox","CfgWeapons",1}
	};
};