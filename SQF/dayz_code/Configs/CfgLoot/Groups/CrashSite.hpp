//Crash site types
//Vehicle class, loot group
CrashSiteType[] =
{
	{Loot_NONE,			2,		CrashSite_RU, CrashSiteRU},		//Russian Mi-8
	{Loot_NONE,			1,		CrashSite_US, CrashSiteUS},		//American UH-1Y
	{Loot_NONE,			1,		CrashSite_EU, CrashSiteEU},		//European HC3
	{Loot_NONE,			1,		CrashSite_UN, CrashSiteUN}		//United Nations Mi-8
};



/* Russian */

CrashSiteRU[] =
{
	//Weapons
	{Loot_WEAPON,		2,		Makarov_DZ},
	{Loot_WEAPON,		4,		PDW_DZ},
	{Loot_WEAPON,		4,		Bizon_DZ},
	{Loot_WEAPON,		3,		AKS74U_DZ},
	{Loot_WEAPON,		3,		AK74_DZ},
	{Loot_WEAPON,		4,		AKM_DZ},
	{Loot_WEAPON,		4,		RPK74_DZ},
	{Loot_WEAPON,		2,		RPK_DZ},
	{Loot_WEAPON,		0.7,	PKM_DZ},
	{Loot_WEAPON,		0.7,	SVD_DZ},
	{Loot_WEAPON,		1,		M40A3_DZ},
	{Loot_WEAPON,		0.7,	FNFAL_DZ},
	
	//Tools
	{Loot_WEAPON,		1.5,	ItemGPS},
	{Loot_WEAPON,		1,		Binocular_Vector},
	{Loot_WEAPON,		0.5,	NVGoggles},
	
	//Backpacks
	
	//Clothing
	{Loot_MAGAZINE,		2.5,	Skin_Camo1_DZ},
	{Loot_MAGAZINE,		1.5,	Skin_Sniper1_DZ},
	
	//Containers
	{Loot_CONTAINER,	3,		DZ_MedBox, MedicalBox, 10, 20},
	{Loot_CONTAINER,	2.3,	DZ_AmmoBoxRU, AmmoBoxRU1, 10, 20},		//545x39	AK74, RPK74
	{Loot_CONTAINER,	1.7,	DZ_AmmoBoxRU, AmmoBoxRU2, 10, 20},		//762x39	AK47
	{Loot_CONTAINER,	1,		DZ_AmmoBoxRU, AmmoBoxRU3, 5, 10},		//762x54r	SVD, PKM
	
	//Other
	{Loot_MAGAZINE,		1,		PartVRotor},
	{Loot_MAGAZINE,		2,		ItemCamonet},
	{Loot_GROUP,		7,		AttachmentsEast},
	{Loot_GROUP,		3,		AttachmentsWest},
	
	//Piles
	{Loot_PILE,			15,		CrashSiteRUPile, 2, 4}
};

CrashSiteRUPile[] =
{
	//Tools
	{Loot_WEAPON,		2,		ItemCompass},
	{Loot_WEAPON,		3,		Binocular},
	{Loot_WEAPON,		4,		ItemKnife},
	{Loot_WEAPON,		4,		ItemMap},
	
	//Items
	{Loot_MAGAZINE,		8,		FoodMRE},
	
	//Other
	{Loot_GROUP,		10,		Consumable},
	{Loot_GROUP,		30,		AmmoRU},
	{Loot_GROUP,		20,		MedicalLow}
};



/* American */

CrashSiteUS[] =
{
	//Weapons
	{Loot_WEAPON,		4,		M9_DZ},
	{Loot_WEAPON,		6,		MP5_DZ},
	{Loot_WEAPON,		6,		M4A1_DZ},
	{Loot_WEAPON,		8,		M16A4_DZ},
	{Loot_WEAPON,		0.9,	M249_DZ},
	{Loot_WEAPON,		0.7,	Mk48_DZ},
	{Loot_WEAPON,		1,		M14_DZ},
	{Loot_WEAPON,		0.5,	DMR_DZ},
	{Loot_WEAPON,		1,		M24_DZ},
	
	//Tools
	{Loot_WEAPON,		1.5,	ItemGPS},
	{Loot_WEAPON,		1,		Binocular_Vector},
	{Loot_WEAPON,		0.5,	NVGoggles},
	
	//Backpacks
	
	//Clothing
	{Loot_MAGAZINE,		2.5,	Skin_Camo1_DZ},
	{Loot_MAGAZINE,		1.5,	Skin_Sniper1_DZ},
	
	//Containers
	{Loot_CONTAINER,	3,		DZ_MedBox, MedicalBox, 10, 20},
	{Loot_CONTAINER,	3,		DZ_AmmoBoxUS, AmmoBoxUS1, 10, 20},		//556x45	STANAG, M249
	{Loot_CONTAINER,	2,		DZ_AmmoBoxUS, AmmoBoxUS2, 5, 10},		//762x51	DMR, M240
	
	//Other
	{Loot_MAGAZINE,		1,		PartVRotor},
	{Loot_MAGAZINE,		2,		ItemCamonet},
	{Loot_GROUP,		10,		AttachmentsWest},
	
	//Piles
	{Loot_PILE,			15,		CrashSiteUSPile, 2, 4}
};

CrashSiteUSPile[] =
{
	//Tools
	{Loot_WEAPON,		2,		ItemCompass},
	{Loot_WEAPON,		3,		Binocular},
	{Loot_WEAPON,		4,		ItemKnife},
	{Loot_WEAPON,		4,		ItemMap},
	
	//Items
	{Loot_MAGAZINE,		8,		FoodMRE},
	
	//Other
	{Loot_GROUP,		10,		Consumable},
	{Loot_GROUP,		30,		AmmoUS},
	{Loot_GROUP,		20,		MedicalLow}
};



/* European */

CrashSiteEU[] =
{
	//Weapons
	{Loot_WEAPON,		4,		G17_DZ},
	{Loot_WEAPON,		6,		MP5_DZ},
	{Loot_WEAPON,		5,		G36C_DZ},
	{Loot_WEAPON,		5,		L85_Holo_DZ},
	{Loot_WEAPON,		1.5,	G36K_Camo_DZ},
	{Loot_WEAPON,		2.5,	G36A_Camo_DZ},
	{Loot_WEAPON,		1,		FNFAL_DZ},
	{Loot_WEAPON,		0.5,	FNFAL_ANPVS4_DZ},
	{Loot_WEAPON,		0.7,	M240_DZ},
	{Loot_WEAPON,		0.9,	L110A1_DZ},
	{Loot_WEAPON,		1,		M24_DZ},
	
	//Tools
	{Loot_WEAPON,		1.5,	ItemGPS},
	{Loot_WEAPON,		1,		Binocular_Vector},
	{Loot_WEAPON,		0.5,	NVGoggles},
	
	//Backpacks
	
	//Clothing
	{Loot_MAGAZINE,		2.5,	Skin_Camo1_DZ},
	{Loot_MAGAZINE,		1.5,	Skin_Sniper1_DZ},
	
	//Containers
	{Loot_CONTAINER,	3,		DZ_MedBox, MedicalBox, 10, 20},
	{Loot_CONTAINER,	3,		DZ_AmmoBoxUS, AmmoBoxEU1, 10, 20},		//556x45	G36, M249
	{Loot_CONTAINER,	2,		DZ_AmmoBoxUS, AmmoBoxEU2, 5, 10},		//762x51	FAL, M240
	
	//Other
	{Loot_MAGAZINE,		1,		PartVRotor},
	{Loot_MAGAZINE,		2,		ItemCamonet},
	{Loot_GROUP,		10,		AttachmentsWest},
	
	//Piles
	{Loot_PILE,			15,		CrashSiteEUPile, 2, 4}
};

CrashSiteEUPile[] =
{
	//Tools
	{Loot_WEAPON,		2,		ItemCompass},
	{Loot_WEAPON,		3,		Binocular},
	{Loot_WEAPON,		4,		ItemKnife},
	{Loot_WEAPON,		4,		ItemMap},
	
	//Items
	{Loot_MAGAZINE,		8,		FoodMRE},
	
	//Other
	{Loot_GROUP,		10,		Consumable},
	{Loot_GROUP,		30,		AmmoEU},
	{Loot_GROUP,		20,		MedicalLow}
};



/* United Nations */

CrashSiteUN[] =
{
	//Weapons
	{Loot_WEAPON,		2,		Makarov_DZ},
	{Loot_WEAPON,		2,		M9_DZ},
	{Loot_WEAPON,		2,		G17_DZ},
	{Loot_WEAPON,		2,		Bizon_DZ},
	{Loot_WEAPON,		2,		MP5_DZ},
	{Loot_WEAPON,		3,		AK74_DZ},
	{Loot_WEAPON,		3,		AKS74U_DZ},
	{Loot_WEAPON,		2,		M4A1_DZ},
	{Loot_WEAPON,		3,		M16A4_DZ},
	{Loot_WEAPON,		3,		G36C_DZ},
	{Loot_WEAPON,		2,		L85_Holo_DZ},
	{Loot_WEAPON,		1,		RPK74_DZ},
	
	//Tools
	{Loot_WEAPON,		2,		ItemGPS},
	
	//Clothing
	{Loot_MAGAZINE,		2,		Skin_Camo1_DZ},
	
	//Containers
	{Loot_CONTAINER,	10,		DZ_MedBox, MedicalBox, 10, 20},
	{Loot_CONTAINER,	10,		DZ_CardboardBox, Consumable, 10, 20},
	{Loot_CONTAINER,	2,		DZ_AmmoBoxUS, AmmoBoxUS1, 5, 15},		//556x45	STANAG, M249
	{Loot_CONTAINER,	2,		DZ_AmmoBoxRU, AmmoBoxRU1, 5, 15},		//545x39	AK74, RPK74
	
	//Other
	{Loot_MAGAZINE,		1,		PartVRotor},
	{Loot_MAGAZINE,		2,		ItemCamonet},
	{Loot_GROUP,		3,		AttachmentsEast},
	{Loot_GROUP,		3,		AttachmentsWest},
	
	//Piles
	{Loot_PILE,			20,		CrashSiteUNPile, 2, 4}
};

CrashSiteUNPile[] =
{
	//Tools
	{Loot_WEAPON,		4,		ItemCompass},
	{Loot_WEAPON,		6,		Binocular},
	{Loot_WEAPON,		4,		ItemKnife},
	{Loot_WEAPON,		6,		ItemMap},
	
	//Items
	{Loot_MAGAZINE,		4,		FoodMRE},
	
	//Other
	{Loot_GROUP,		20,		Consumable},
	{Loot_GROUP,		20,		AmmoUN},
	{Loot_GROUP,		30,		MedicalHigh}
};