Military[] =
{ 
//Probably shouldn't use one big group for this. It breaks the RU/US/EU/CZ crashsite themes. 
//Also it spawns mismatched ammo box and weapon types.
	//Pistols
	{Loot_GROUP,		10,		pistols},
	{Loot_GROUP,		5,		shotgunsingleshot},
	{Loot_GROUP,		4,		sniperrifles},
	{Loot_GROUP,		8,		submachinegun},
	{Loot_GROUP,		13,		assaultrifles},
	{Loot_GROUP,		4,		machineguns},
	
	//Tools
	{Loot_TOOL,		3,		Binocular},
	{Loot_TOOL,		4,		ItemFlashlightRed},
	{Loot_TOOL,		3.5,	ItemKnife},
	{Loot_TOOL,		0.5,	ItemGPS},
	{Loot_TOOL,		3,		ItemMap},
	{Loot_TOOL,		3,		ItemEtool},
	
	//Backpacks
	{Loot_GROUP,		6,		backpacks},
	{Loot_GROUP,		6,		militarybackpacks},

	
	//Clothing
	{Loot_GROUP,		2,		militaryclothes},
	{Loot_GROUP,		1,		specialclothes},
	
	//Containers
	{Loot_CONTAINER,	1.1,		DZ_AmmoBoxRU, AmmoBoxRU1, 10, 20},		//545x39	AK74, RPK74
	{Loot_CONTAINER,	0.5,		DZ_AmmoBoxRU, AmmoBoxRU2, 10, 20},		//762x39	AK47
	{Loot_CONTAINER,	0.2,		DZ_AmmoBoxRU, AmmoBoxRU3, 5, 10},		//762x54r	SVD, PKM
	{Loot_CONTAINER,	1.2,		DZ_AmmoBoxUS, AmmoBoxEU1, 10, 20},		//556x45	G36, M249
	{Loot_CONTAINER,	0.8,			DZ_AmmoBoxUS, AmmoBoxEU2, 5, 10},		//762x51	FAL, M240
	{Loot_CONTAINER,	1.2,		DZ_AmmoBoxUS, AmmoBoxUS1, 10, 20},		//556x45	STANAG, M249
	{Loot_CONTAINER,	0.8,			DZ_AmmoBoxUS, AmmoBoxUS2, 5, 10},		//762x51	DMR, M240
//	{Loot_CONTAINER,	2,			DZ_MedBox, MedicalBox, 10, 20},
	
	//Other
	{Loot_MAGAZINE,		5,		FoodMRE},
//	{Loot_MAGAZINE,		4,		ItemSandbag},
	{Loot_PILE,			15,		AmmoMilitaryLow, 1, 3},
	{Loot_GROUP,		4,		AmmoMilitaryHigh},
	{Loot_GROUP,		4,		AttachmentsGeneric},
	{Loot_GROUP,		8,		AttachmentsEast},
	{Loot_PILE,			10,		MedicalLow, 1, 2},
	{Loot_PILE,			15,		Trash, 1, 2},
	{Loot_PILE,			10,		Consumable, 1, 2}
//	{Loot_GROUP,		10,		Generic}
};

MilitarySmall[] =
{
	{Loot_GROUP,		10,		pistols},
	{Loot_TOOL,			2,		Binocular},
	{Loot_TOOL,			0.5,	ItemGPS},
	{Loot_TOOL,			3,		ItemMap},
	{Loot_TOOL,			3,		ItemKnife},
	{Loot_GROUP,		2,		militaryclothes},
	{Loot_GROUP,		2,		specialclothes},
	{Loot_GROUP,		15,		AmmoMilitaryLow},
	{Loot_GROUP,		4,		AmmoMilitaryHigh},
	{Loot_GROUP,		4,		AttachmentsGeneric},
	{Loot_GROUP,		8,		AttachmentsEast},
	{Loot_GROUP,		10,		MedicalLow},
	{Loot_GROUP,		15,		Trash},
	{Loot_GROUP,		10,		Consumable}
//	{Loot_GROUP,		10,		GenericSmall}
};

MilitarySpecial[] =
{
	{Loot_WEAPON,		2,		NVGoggles},
	{Loot_GROUP,		10,		pistols},
	{Loot_GROUP,		5,		shotgunsingleshot},
	{Loot_GROUP,		9,		sniperrifles},
	{Loot_GROUP,		12,		submachinegun},
	{Loot_GROUP,		13,		assaultrifles},
	{Loot_GROUP,		9,		machineguns},
	
	//Tools
	{Loot_TOOL,		3,		Binocular},
	{Loot_TOOL,		2,		Binocular_Vector},
	{Loot_TOOL,		3,		ItemFlashlightRed},
	{Loot_TOOL,		4,		ItemKnife},
	{Loot_TOOL,		1.3,	ItemGPS},
	{Loot_TOOL,		4,		ItemMap},
	{Loot_TOOL,		2,		ItemEtool},
	
	//Backpacks
	{Loot_GROUP,		9,		militarybackpacks},
	{Loot_GROUP,		9,		machinegunammo},
	
	//Clothing
	{Loot_GROUP,		3,		militaryclothes},
	{Loot_GROUP,		2,		specialclothes},
	
	//Containers
	{Loot_CONTAINER,	2.2,		DZ_AmmoBoxRU, AmmoBoxRU1, 10, 20},	//5.45x39
	{Loot_CONTAINER,	1.8,			DZ_AmmoBoxUS, AmmoBoxUS1, 7, 14},	//5.56x45
	{Loot_CONTAINER,	1.8,			DZ_AmmoBoxRU, AmmoBoxCZ1, 7, 14},	//7.62x39
	{Loot_CONTAINER,	0.8,			DZ_AmmoBoxRU, AmmoBoxCZ2, 2, 5},	//7.62x54R
//	{Loot_CONTAINER,	0.5,		DZ_AmmoBoxRU, AmmoBoxRU3, 3, 7},	//7.62x54R
	{Loot_CONTAINER,	0.2,		DZ_ExplosiveBoxRU, AmmoBoxRU4, 5, 15},	//GP-25
	{Loot_CONTAINER,	0.2,		DZ_ExplosiveBoxRU, AmmoBoxRU5, 3, 7},	//Grenades

	//Other
	{Loot_MAGAZINE,		3,		FoodMRE},
//	{Loot_MAGAZINE,		2,		ItemSandbag},
	{Loot_MAGAZINE,		0.5,	PipeBomb},
	{Loot_MAGAZINE,		0.5,	MAAWS_HEAT},
	{Loot_MAGAZINE,		2,		100Rnd_762x54_PK},
	{Loot_PILE,			15,		AmmoMilitaryLow, 1, 4},
	{Loot_PILE,			10,		AmmoMilitaryHigh, 1, 3},
	{Loot_GROUP,		2,		AttachmentsGeneric},
	{Loot_GROUP,		8,		AttachmentsEast},
	{Loot_GROUP,		6,		AttachmentsWest},
	{Loot_PILE,			10,		MedicalLow, 1, 2},
	{Loot_PILE,			10,		Trash, 1, 2},
	{Loot_PILE,			10,		Consumable, 1, 2}
//	{Loot_GROUP,		8,		Generic}
};

MilitarySpecialSmall[] =
{
	{Loot_WEAPON,		2,		NVGoggles},
	{Loot_GROUP,		10,		pistols},
	{Loot_TOOL,			3,		Binocular},
	{Loot_TOOL,			2,		Binocular_Vector},
	{Loot_TOOL,			3,		ItemKnife},
	{Loot_TOOL,			1.3,	ItemGPS},
	{Loot_TOOL,			3,		ItemMap},
	{Loot_GROUP,		3,		militaryclothes},
	{Loot_GROUP,		2,		specialclothes},
	{Loot_MAGAZINE,		0.5,	PipeBomb},
	{Loot_MAGAZINE,		0.5,	MAAWS_HEAT},
	{Loot_MAGAZINE,		2,		100Rnd_762x54_PK},
	{Loot_GROUP,		15,		AmmoMilitaryLow},
	{Loot_GROUP,		10,		AmmoMilitaryHigh},
	{Loot_GROUP,		2,		AttachmentsGeneric},
	{Loot_GROUP,		8,		AttachmentsEast},
	{Loot_GROUP,		6,		AttachmentsWest},
	{Loot_GROUP,		10,		MedicalLow},
	{Loot_GROUP,		10,		Trash},
	{Loot_GROUP,		10,		Consumable}
//	{Loot_GROUP,		8,		GenericSmall}
};

MilitaryIndustrial[] = {//DZE ADDED
	{Loot_GROUP,		15,		Parts},
	{Loot_MAGAZINE,		5,		FoodMRE},
	{Loot_MAGAZINE,		3,		ItemFuelBarrelEmpty},
	{Loot_MAGAZINE,		2,		ItemGenerator},
	{Loot_MAGAZINE,		2,		fuel_pump_kit},
	{Loot_MAGAZINE,		3,		ItemWire},
	{Loot_MAGAZINE,		3,		ItemTankTrap},
	{Loot_MAGAZINE,		6,		ItemSandbag},
	{Loot_MAGAZINE,		1,		PartEngine},
	{Loot_GROUP, 		15, 	Military},
	{Loot_GROUP,		4,		Generic}
};

MilitaryIndustrialSmall[] = {
	{Loot_GROUP, 		15, 	MilitarySmall},
	{Loot_GROUP,		8,		GenericSmall}
};
