// Military and Military Industrial buildings spawn matching loot based on RU, US, EU and CZ groups.

MilitaryIndustrial[] = 
{
	{Loot_NONE,		1,		MilitaryIndustrialRU, MilitaryIndustrialSmallRU}, //Russian Weapons, Attachments, Ammo
	{Loot_NONE,		1,		MilitaryIndustrialUS, MilitaryIndustrialSmallUS},	//American Weapons, Attachments, Ammo
	{Loot_NONE,		1,		MilitaryIndustrialEU, MilitaryIndustrialSmallEU}, //European Weapons, Attachments, Ammo
	{Loot_NONE,		1,		MilitaryIndustrialCZ, MilitaryIndustrialSmallCZ} //Czech Weapons, Attachments, Ammo
};

MilitaryIndustrialRU[] = {
	{Loot_GROUP,		15,		Parts},
	{Loot_MAGAZINE,		1,		PartVRotor},
	{Loot_MAGAZINE,		4,		FoodMRE},
	{Loot_GROUP,		1,		FuelBarrel},
	{Loot_MAGAZINE,		1,		ItemGenerator},
	{Loot_MAGAZINE,		1,		fuel_pump_kit},
	{Loot_MAGAZINE,		1,		ItemTankTrap},
	{Loot_MAGAZINE,		4,		ItemSandbag},
	{Loot_MAGAZINE,		1,		ItemWire},
	{Loot_PILE,			5,		Trash, 1, 2},
	{Loot_PILE,			3,		Consumable, 1, 2},
	{Loot_GROUP, 		10, 	MilitaryRU},
	{Loot_MAGAZINE,		4,		ItemScrews}
};

MilitaryIndustrialSmallRU[] = {
	{Loot_GROUP, 		1, 	MilitarySmallRU}
};

MilitaryIndustrialUS[] = {
	{Loot_GROUP,		15,		Parts},
	{Loot_MAGAZINE,		1,		PartVRotor},
	{Loot_MAGAZINE,		4,		FoodMRE},
	{Loot_GROUP,		1,		FuelBarrel},
	{Loot_MAGAZINE,		1,		ItemGenerator},
	{Loot_MAGAZINE,		1,		fuel_pump_kit},
	{Loot_MAGAZINE,		1,		ItemTankTrap},
	{Loot_MAGAZINE,		4,		ItemSandbag},
	{Loot_MAGAZINE,		1,		ItemWire},
	{Loot_PILE,			5,		Trash, 1, 2},
	{Loot_PILE,			3,		Consumable, 1, 2},
	{Loot_GROUP, 		10, 	MilitaryUS},
	{Loot_MAGAZINE,		4,		ItemScrews}
};

MilitaryIndustrialSmallUS[] = {
	{Loot_GROUP, 		1, 	MilitarySmallUS}
};

MilitaryIndustrialEU[] = {
	{Loot_GROUP,		15,		Parts},
	{Loot_MAGAZINE,		1,		PartVRotor},
	{Loot_MAGAZINE,		4,		FoodMRE},
	{Loot_GROUP,		1,		FuelBarrel},
	{Loot_MAGAZINE,		1,		ItemGenerator},
	{Loot_MAGAZINE,		1,		fuel_pump_kit},
	{Loot_MAGAZINE,		1,		ItemTankTrap},
	{Loot_MAGAZINE,		4,		ItemSandbag},
	{Loot_MAGAZINE,		1,		ItemWire},
	{Loot_PILE,			5,		Trash, 1, 2},
	{Loot_PILE,			3,		Consumable, 1, 2},
	{Loot_GROUP, 		10, 	MilitaryEU},
	{Loot_MAGAZINE,		4,		ItemScrews}
};

MilitaryIndustrialSmallEU[] = {
	{Loot_GROUP, 		1, 	MilitarySmallEU}
};

MilitaryIndustrialCZ[] = {
	{Loot_GROUP,		15,		Parts},
	{Loot_MAGAZINE,		1,		PartVRotor},
	{Loot_MAGAZINE,		4,		FoodMRE},
	{Loot_GROUP,		1,		FuelBarrel},
	{Loot_MAGAZINE,		1,		ItemGenerator},
	{Loot_MAGAZINE,		1,		fuel_pump_kit},
	{Loot_MAGAZINE,		1,		ItemTankTrap},
	{Loot_MAGAZINE,		4,		ItemSandbag},
	{Loot_MAGAZINE,		1,		ItemWire},
	{Loot_PILE,			5,		Trash, 1, 2},
	{Loot_PILE,			3,		Consumable, 1, 2},
	{Loot_GROUP, 		10, 	MilitaryCZ},
	{Loot_MAGAZINE,		4,		ItemScrews}
};

MilitaryIndustrialSmallCZ[] = {
	{Loot_GROUP, 		1, 	MilitarySmallCZ}
};