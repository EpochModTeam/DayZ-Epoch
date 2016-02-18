class Blueprint_BodgedWaterbottle : Recipe {
	displayName = "Broken Watter Bottle.";
	descriptionShort = "Patch a broken water bottle.";
	input[] = 
	{
		{"equip_duct_tape","CfgMagazines",1},
		{"ItemWaterBottleDmg","CfgMagazines",1}
	};
	output[] = 
	{
		{"ItemBodgedWaterbottle","CfgMagazines",1}
	};
	required[] = 
	{
	};
};
