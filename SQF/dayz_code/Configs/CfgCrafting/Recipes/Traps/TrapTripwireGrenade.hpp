class Blueprint_TrapTripwireGrenade : Recipe {
	displayName = $STR_ITEM_NAME_TRIPWIRE_GRENADE;
	descriptionShort = $STR_ITEM_DESC_TRIPWIRE_GRENADE;
	input[] =
	{
		{"equip_string","CfgMagazines",1},
		{"PartWoodPile","CfgMagazines",1},
		{"equip_duct_tape","CfgMagazines",1},
		{{"HandGrenade_West","CfgMagazines",1},
			{"HandGrenade_East","CfgMagazines",1}}
	};
	output[] =
	{
		{"ItemTrapTripwireGrenade","CfgMagazines",1}
	};
	required[] =
	{
		{"ItemToolbox","CfgWeapons",1}
	};
};