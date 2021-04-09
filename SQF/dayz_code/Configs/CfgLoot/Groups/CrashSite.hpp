//Crash site types
//Vehicle class, loot group
CrashSiteType[] =
{
	{Loot_NONE,			2,		CrashSite_RU, CrashSiteRU},		//Russian Mi-8
	{Loot_NONE,			1,		CrashSite_US, CrashSiteUS},		//American UH-1Y
	{Loot_NONE,			1,		CrashSite_EU, CrashSiteEU},		//European HC3
	{Loot_NONE,			1,		CrashSite_UN, CrashSiteCZ}		//United Nations Mi-8
};

CrashSiteRU[] =
{
	// Weapons
	{Loot_GROUP,		30,		weaponsRU},
	{Loot_WEAPON,		1,		Anzio_20_DZ}, // High value weapon
	
	//Tools
	{Loot_GROUP,		3,		ToolsMilitary},
	
	//Backpacks
	{Loot_GROUP,		4,		militarybackpacks},
	{Loot_GROUP,		4,		militaryVehicleAmmo},

	//Clothing
	{Loot_GROUP,		3,		militaryclothes},
	
	//Containers
	{Loot_CONTAINER,	1,		DZ_MedBox, MedicalBox, 10, 20},
	{Loot_CONTAINER,	3,		DZ_CardboardBox, Consumable, 10, 20},
	{Loot_CONTAINER,	1,		DZ_AmmoBoxUS, AmmoBoxRU1, 10, 20},
	{Loot_CONTAINER,	1,		DZ_AmmoBoxRU, AmmoBoxRU2, 10, 20},
	{Loot_CONTAINER,	1,		DZ_AmmoBoxRU, AmmoBoxRU3, 5, 10},
	
	//Other
	{Loot_MAGAZINE,		1,		PartVRotor},
	{Loot_MAGAZINE,		2,		forest_large_net_kit},
	{Loot_GROUP,		10,		AttachmentsRU},
	
	//Piles
	{Loot_PILE,			15,		CrashSiteRUPile, 2, 4}
};

CrashSiteRUPile[] =
{
	{Loot_GROUP,		5,		ToolsMilitary},
	{Loot_MAGAZINE,		10,		FoodMRE},
	{Loot_GROUP,		15,		AmmoRU},
	{Loot_MAGAZINE,		3,		3rnd_Anzio_20x102mm},
	{Loot_GROUP,		10,		MedicalLow}
};

CrashSiteUS[] =
{
	//Weapons
	{Loot_GROUP,		30,		weaponsUS},
	{Loot_WEAPON,		1,		M107_DZ}, // High value weapon
	{Loot_WEAPON,		1,		M200_CheyTac_DZ}, // High value weapon
	{Loot_WEAPON,		5,		ACR_WDL_NV_DZ}, // ACR WDL NV
	{Loot_WEAPON,		5,		ACR_BL_NV_DZ}, // ACR BL NV

	//Tools
	{Loot_GROUP,		3,		ToolsMilitary},
	
	//Backpacks
	{Loot_GROUP,		4,		militarybackpacks},
	{Loot_GROUP,		4,		militaryVehicleAmmo},

	//Clothing
	{Loot_GROUP,		3,		militaryclothes},

	//Containers
	{Loot_CONTAINER,	3,		DZ_MedBox, MedicalBox, 10, 20},
	{Loot_CONTAINER,	3,		DZ_CardboardBox, Consumable, 10, 20},
	{Loot_CONTAINER,	1,		DZ_AmmoBoxUS, AmmoBoxUS1, 10, 20},
	{Loot_CONTAINER,	1,		DZ_AmmoBoxUS, AmmoBoxUS2, 5, 10},
	
	//Other
	{Loot_MAGAZINE,		1,		PartVRotor},
	{Loot_MAGAZINE,		2,		forest_large_net_kit},
	{Loot_GROUP,		10,		AttachmentsUS},
	
	//Piles
	{Loot_PILE,			15,		CrashSiteUSPile, 2, 4}
};

CrashSiteUSPile[] =
{
	{Loot_GROUP,		5,		ToolsMilitary},
	{Loot_MAGAZINE,		10,		FoodMRE},
	{Loot_GROUP,		15,		AmmoUS},
	{Loot_MAGAZINE,		3,		10Rnd_127x99_m107},
	{Loot_MAGAZINE,		3,		5Rnd_408_CheyTac},
	{Loot_GROUP,		10,		MedicalLow}
};

CrashSiteEU[] =
{
	//Weapons
	{Loot_GROUP,		30,		weaponsEU},
	{Loot_WEAPON,		1,		BAF_AS50_scoped_DZ}, // High value weapon
	{Loot_WEAPON,		1,		WA2000_DZ},

	//Tools
	{Loot_GROUP,		3,		ToolsMilitary},
	
	//Backpacks
	{Loot_GROUP,		4,		militarybackpacks},
	{Loot_GROUP,		4,		militaryVehicleAmmo},

	//Clothing
	{Loot_GROUP,		3,		militaryclothes},
	
	//Containers
	{Loot_CONTAINER,	3,		DZ_MedBox, MedicalBox, 10, 20},
	{Loot_CONTAINER,	3,		DZ_CardboardBox, Consumable, 10, 20},
	{Loot_CONTAINER,	1,		DZ_AmmoBoxUS, AmmoBoxEU1, 10, 20},
	{Loot_CONTAINER,	1,		DZ_AmmoBoxUS, AmmoBoxEU2, 5, 10},
	
	//Other
	{Loot_MAGAZINE,		1,		PartVRotor},
	{Loot_MAGAZINE,		2,		desert_net_kit},
	{Loot_GROUP,		10,		AttachmentsEU},
	
	//Piles
	{Loot_PILE,			15,		CrashSiteEUPile, 2, 4}
};

CrashSiteEUPile[] =
{
	{Loot_GROUP,		5,		ToolsMilitary},
	{Loot_MAGAZINE,		10,		FoodMRE},
	{Loot_GROUP,		15,		AmmoEU},
	{Loot_MAGAZINE,		3,		5Rnd_127x99_as50},
	{Loot_MAGAZINE,		3,		6Rnd_762x51_WA2000},
	{Loot_GROUP,		10,		MedicalLow}
};

CrashSiteCZ[] =
{
	//Weapons
	{Loot_GROUP,		30,		weaponsCZ},
	{Loot_WEAPON,		1,		MAAWS}, // High value weapon

	//Tools
	{Loot_GROUP,		3,		ToolsMilitary},
	
	//Backpacks
	{Loot_GROUP,		4,		militarybackpacks},
	{Loot_GROUP,		4,		militaryVehicleAmmo},
	
	//Clothing
	{Loot_GROUP,		3,		militaryclothes},
	
	//Containers
	{Loot_CONTAINER,	3,		DZ_MedBox, MedicalBox, 10, 20},
	{Loot_CONTAINER,	3,		DZ_CardboardBox, Consumable, 10, 20},
	{Loot_CONTAINER,	1,		DZ_AmmoBoxUS, AmmoBoxCZ1, 10, 20},
	{Loot_CONTAINER,	1,		DZ_AmmoBoxRU, AmmoBoxCZ2, 10, 20},
	{Loot_CONTAINER,	1,		DZ_AmmoBoxUS, AmmoBoxCZ3, 10, 20},
	
	//Other
	{Loot_MAGAZINE,		1,		PartVRotor},
	{Loot_MAGAZINE,		2,		desert_large_net_kit},
	{Loot_GROUP,		10,		AttachmentsCZ},
	
	//Piles
	{Loot_PILE,			15,		CrashSiteCZPile, 2, 4}
};

CrashSiteCZPile[] =
{
	{Loot_GROUP,		5,		ToolsMilitary},
	{Loot_MAGAZINE,		10,		FoodMRE},
	{Loot_GROUP,		15,		AmmoCZ},
	{Loot_MAGAZINE,		3,		MAAWS_HEAT},
	{Loot_GROUP,		10,		MedicalHigh}
};