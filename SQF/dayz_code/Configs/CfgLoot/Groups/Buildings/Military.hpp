Military[] =
{
	//Pistols
	{Loot_GROUP,		10,		pistols},
	//{Loot_GROUP,		2,		shotgunsingleshot},
	//{Loot_GROUP,		2,		sniperrifles},
	//{Loot_GROUP,		2,		submachinegun},
	//{Loot_GROUP,		2,		assaultrifles},
	//Submachineguns
	{Loot_WEAPON,		1,		PDW_DZ},
	{Loot_WEAPON,		3,		Bizon_DZ},
	{Loot_WEAPON,		2,		MP5_DZ},
	
	//Assault rifles
	{Loot_WEAPON,		2,		M16A2_DZ},
	{Loot_WEAPON,		1,		M16A2_GL_DZ},
	{Loot_WEAPON,		1.5,	M16A4_DZ},
	{Loot_WEAPON,		0.5,	M4A1_DZ},
//	{Loot_WEAPON,		3,		G36C_DZ},
	{Loot_WEAPON,		3,		AK74_DZ},
	{Loot_WEAPON,		3,		AKS74U_DZ},
	{Loot_WEAPON,		1,		AKM_DZ},
	{Loot_WEAPON,		1,		SA58_DZ},
	
	//Shotguns
	{Loot_WEAPON,		2,		Remington870_DZ},
	{Loot_WEAPON,		1,		M1014_DZ},
	
	//Tools
	{Loot_TOOL,			3,		Binocular},
	{Loot_TOOL,			4,		ItemFlashlightRed},
	{Loot_TOOL,			4,		ItemKnife},
	{Loot_TOOL,			0.5,	ItemGPS},
	{Loot_TOOL,			3,		ItemMap},
	{Loot_TOOL,			3,		ItemEtool},
	
	//Backpacks
	{Loot_GROUP,		6,		backpacks},
	{Loot_GROUP,		6,		militarybackpacks},

	
	//Clothing
	{Loot_GROUP,		2,		militaryclothes},
	{Loot_GROUP,		1,		specialclothes},
	
	//Containers
	{Loot_CONTAINER,	2,		DZ_AmmoBoxRU, AmmoBoxRU1, 6, 12},
	{Loot_CONTAINER,	2,		DZ_AmmoBoxUS, AmmoBoxUS1, 4, 10},
	
	//Other
	{Loot_MAGAZINE,		5,		FoodMRE},
	{Loot_MAGAZINE,		5,		ItemSandbag},
	{Loot_PILE,			15,		AmmoMilitaryLow, 1, 3},
	{Loot_GROUP,		4,		AmmoMilitaryHigh},
	{Loot_GROUP,		4,		AttachmentsGeneric},
	{Loot_GROUP,		8,		AttachmentsEast},
	{Loot_PILE,			10,		MedicalLow, 1, 2},
	{Loot_PILE,			15,		Trash, 1, 2},
	{Loot_PILE,			10,		Consumable, 1, 2},
	{Loot_GROUP,		10,		Generic}
};

MilitarySpecial[] =
{
	//Pistols
	{Loot_WEAPON,		3,		Makarov_DZ},
	{Loot_WEAPON,		1,		MakarovSD},
	{Loot_WEAPON,		2,		M1911_DZ},
	{Loot_WEAPON,		2,		M9_DZ},
	{Loot_WEAPON,		1,		M9SD},
	{Loot_WEAPON,		2,		G17_DZ},
	{Loot_WEAPON,		2,		Revolver_DZ},
	{Loot_WEAPON,		0.5,	revolver_gold_EP1},
	
	//Submachineguns
	{Loot_WEAPON,		2,		PDW_DZ},
	{Loot_WEAPON,		3,		Bizon_DZ},
	{Loot_WEAPON,		2,		MP5_DZ},
	
	//Assault rifles
	{Loot_WEAPON,		3,		M16A2_DZ},
	{Loot_WEAPON,		2,		M16A2_GL_DZ},
	{Loot_WEAPON,		2,		M16A4_DZ},
	{Loot_WEAPON,		1,		M4A1_DZ},
//	{Loot_WEAPON,		3,		G36C_DZ},
	{Loot_WEAPON,		2,		AK74_DZ},
	{Loot_WEAPON,		2,		AKS74U_DZ},
	{Loot_WEAPON,		2,		AKM_DZ},
	{Loot_WEAPON,		2,		SA58_DZ},
	{Loot_WEAPON,		1,		SA58_RIS_DZ},
	
	//Shotguns
	{Loot_WEAPON,		1,		Remington870_DZ},
	{Loot_WEAPON,		2,		M1014_DZ},
	
	//Machine guns
	{Loot_WEAPON,		1,		RPK74_DZ},
	{Loot_WEAPON,		0.5,	UK59_DZ},
//	{Loot_WEAPON,		0.5,	PKM_DZ},
	
	//Tools
	{Loot_TOOL,			4,		Binocular},
	{Loot_TOOL,			3,		ItemFlashlightRed},
	{Loot_TOOL,			5,		ItemKnife},
	{Loot_TOOL,			1.3,	ItemGPS},
	{Loot_TOOL,			4,		ItemMap},
	{Loot_TOOL,			2,		ItemEtool},
	
	//Backpacks
	{Loot_GROUP,		9,		militarybackpacks},
	
	//Clothing
	{Loot_GROUP,		3,		militaryclothes},
	{Loot_GROUP,		2,		specialclothes},
	
	//Containers
	{Loot_CONTAINER,	3,		DZ_AmmoBoxRU, AmmoBoxRU1, 10, 20},	//5.45x39
	{Loot_CONTAINER,	2,		DZ_AmmoBoxUS, AmmoBoxUS1, 7, 14},	//5.56x45
	{Loot_CONTAINER,	2,		DZ_AmmoBoxRU, AmmoBoxCZ1, 7, 14},	//7.62x39
	{Loot_CONTAINER,	1,		DZ_AmmoBoxRU, AmmoBoxCZ2, 2, 5},	//7.62x54R
//	{Loot_CONTAINER,	0.5,	DZ_AmmoBoxRU, AmmoBoxRU3, 3, 7},	//7.62x54R
	{Loot_CONTAINER,	0.5,	DZ_ExplosivesBoxRU, AmmoBoxRU4, 5, 15},	//GP-25
	{Loot_CONTAINER,	0.5,	DZ_ExplosivesBoxRU, AmmoBoxRU5, 3, 7},	//Grenades
	
	//Other
	{Loot_MAGAZINE,		3,		FoodMRE},
	{Loot_MAGAZINE,		2,		ItemSandbag},
	{Loot_MAGAZINE,		0.5,	PipeBomb},
	{Loot_MAGAZINE,		0.5,	MAAWS_HEAT},
	{Loot_PILE,			15,		AmmoMilitaryLow, 1, 4},
	{Loot_PILE,			10,		AmmoMilitaryHigh, 1, 3},
	{Loot_GROUP,		2,		AttachmentsGeneric},
	{Loot_GROUP,		8,		AttachmentsEast},
	{Loot_GROUP,		6,		AttachmentsWest},
	{Loot_PILE,			10,		MedicalLow, 1, 2},
	{Loot_PILE,			10,		Trash, 1, 2},
	{Loot_PILE,			10,		Consumable, 1, 2},
	{Loot_GROUP,		8,		Generic}
};

MilitaryIndustrial[] = {//DZE ADDED
	{Loot_GROUP,				8,		Parts},
	{ItemFuelBarrelEmpty,		3,		FoodMRE},
	{ItemGenerator,				3,		FoodMRE},
	{fuel_pump_kit,				1,		FoodMRE},
	{Loot_GROUP, 				8, 		Military}
};