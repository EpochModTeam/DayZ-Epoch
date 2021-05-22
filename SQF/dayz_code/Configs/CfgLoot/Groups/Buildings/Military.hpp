// Military and Military Industrial buildings spawn matching loot based on RU, US, EU and CZ groups.

Military[] =
{
	{Loot_NONE,		1,		MilitaryRU, MilitarySmallRU}, //Russian Weapons, Attachments, Ammo
	{Loot_NONE,		1,		MilitaryUS, MilitarySmallUS}, //American Weapons, Attachments, Ammo
	{Loot_NONE,		1,		MilitaryEU, MilitarySmallEU}, //European Weapons, Attachments, Ammo
	{Loot_NONE,		1,		MilitaryCZ, MilitarySmallCZ} //Czech Weapons, Attachments, Ammo
};

MilitaryRU[] =
{
	// Weapons
	{Loot_GROUP,		40,		weaponsRU},
	
	//Tools
	{Loot_GROUP,		10,		ToolsMilitary},
	
	//Backpacks
	{Loot_GROUP,		9,		militarybackpacks},
	
	//Clothing
	{Loot_GROUP,		3,		militaryclothes},
	
	//Containers
	{Loot_CONTAINER,	2,		DZ_AmmoBoxUS, AmmoBoxRU1, 10, 20},	//5.45x39
	{Loot_CONTAINER,	2,		DZ_AmmoBoxRU, AmmoBoxRU2, 10, 20},	//7.62x39
	{Loot_CONTAINER,	1,		DZ_AmmoBoxRU, AmmoBoxRU3, 3, 7},	//7.62x54R
	{Loot_CONTAINER,	2,		DZ_AmmoBoxRU, AmmoBoxRU6, 5, 9},	//7.62x39
	{Loot_CONTAINER,	1,		DZ_AmmoBoxRU, AmmoBoxRU7, 5, 9},	//9x39mm	
	{Loot_CONTAINER,	1,		DZ_ExplosiveBoxRU, AmmoBoxRU4, 5, 15},	//GP-25
	{Loot_CONTAINER,	1,		DZ_ExplosiveBoxRU, AmmoBoxRU5, 3, 7},	//Grenades

	//Other
	{Loot_MAGAZINE,		3,		FoodMRE},
	{Loot_PILE,			15,		AmmoRU, 1, 4},
	{Loot_GROUP,		8,		AttachmentsRU},
	{Loot_PILE,			10,		MedicalLow, 1, 2},
	{Loot_PILE,			10,		Trash, 1, 2},
	{Loot_PILE,			10,		Consumable, 1, 2}
};

MilitarySmallRU[] =
{
	{Loot_WEAPON,		8,		Makarov_DZ},
	{Loot_WEAPON,		5,		Makarov_SD_DZ},
	{Loot_GROUP,		5,		ToolsMilitary},
	{Loot_GROUP,		3,		militaryclothes},
	{Loot_MAGAZINE,		1,		PipeBomb}, // Satchel charges are very destructive and should be rare.
	{Loot_GROUP,		30,		AmmoRU},
	{Loot_GROUP,		15,		AttachmentsRU},
	{Loot_GROUP,		10,		MedicalLow},
	{Loot_GROUP,		10,		Trash},
	{Loot_GROUP,		10,		Consumable}
};

MilitaryUS[] =
{
	// Weapons
	{Loot_GROUP,		40,		weaponsUS},
	
	//Tools
	{Loot_GROUP,		10,		ToolsMilitary},
	
	//Backpacks
	{Loot_GROUP,		9,		militarybackpacks},
	
	//Clothing
	{Loot_GROUP,		3,		militaryclothes},
	
	//Containers
	{Loot_CONTAINER,	1,		DZ_AmmoBoxUS, AmmoBoxUS1, 7, 14},	//5.56x45
	{Loot_CONTAINER,	1,		DZ_AmmoBoxUS, AmmoBoxUS2, 7, 14},	//7.62x51
	{Loot_CONTAINER,	1,		DZ_AmmoBoxUS, AmmoBoxUS3, 7, 14},	//M203
	{Loot_CONTAINER,	1,		DZ_AmmoBoxUS, AmmoBoxUS4, 7, 14},	//Explosives
	{Loot_CONTAINER,	1,		DZ_AmmoBoxUS, AmmoBoxUS5, 7, 14},	//6.80x43
	
	//Other
	{Loot_MAGAZINE,		3,		FoodMRE},
	{Loot_PILE,			15,		AmmoUS, 1, 4},
	{Loot_GROUP,		6,		AttachmentsUS},
	{Loot_PILE,			10,		MedicalLow, 1, 2},
	{Loot_PILE,			10,		Trash, 1, 2},
	{Loot_PILE,			10,		Consumable, 1, 2}
};

MilitarySmallUS[] =
{
	{Loot_WEAPON,		8,		M9_DZ},
	{Loot_WEAPON,		5,		M9_SD_DZ},
	{Loot_GROUP,		5,		ToolsMilitary},
	{Loot_GROUP,		3,		militaryclothes},
	{Loot_MAGAZINE,		1,		PipeBomb},
	{Loot_GROUP,		30,		AmmoUS},
	{Loot_GROUP,		15,		AttachmentsUS},
	{Loot_GROUP,		10,		MedicalLow},
	{Loot_GROUP,		10,		Trash},
	{Loot_GROUP,		10,		Consumable}
};

MilitaryEU[] =
{
	// Weapons
	{Loot_GROUP,		40,		weaponsEU},
	
	//Tools
	{Loot_GROUP,		10,		ToolsMilitary},
	
	//Backpacks
	{Loot_GROUP,		9,		militarybackpacks},
	
	//Clothing
	{Loot_GROUP,		3,		militaryclothes},
	
	//Containers
	{Loot_CONTAINER,	1,		DZ_AmmoBoxUS, AmmoBoxEU1, 7, 14},	//5.56x45
	{Loot_CONTAINER,	1,		DZ_AmmoBoxRU, AmmoBoxEU2, 7, 14},	//7.62x51, 8.6x70
	{Loot_CONTAINER,	1,		DZ_AmmoBoxRU, AmmoBoxEU3, 7, 14},	//7.62x51, 5.56x45
	{Loot_CONTAINER,	1,		DZ_AmmoBoxRU, AmmoBoxEU4, 7, 14},	//7.62x51
	{Loot_CONTAINER,	1,		DZ_AmmoBoxRU, AmmoBoxEU5, 7, 14},	//5.7x28, .45ACP

	//Other
	{Loot_MAGAZINE,		3,		FoodMRE},
	{Loot_PILE,			15,		AmmoEU, 1, 4},
	{Loot_GROUP,		6,		AttachmentsEU},
	{Loot_PILE,			10,		MedicalLow, 1, 2},
	{Loot_PILE,			10,		Trash, 1, 2},
	{Loot_PILE,			10,		Consumable, 1, 2}
};

MilitarySmallEU[] =
{
	{Loot_WEAPON,		8,		G17_DZ},
	{Loot_WEAPON,		5,		G17_SD_DZ},
	{Loot_GROUP,		5,		ToolsMilitary},
	{Loot_GROUP,		3,		militaryclothes},
	{Loot_MAGAZINE,		1,		PipeBomb},
	{Loot_GROUP,		30,		AmmoEU},
	{Loot_GROUP,		15,		AttachmentsEU},
	{Loot_GROUP,		10,		MedicalLow},
	{Loot_GROUP,		10,		Trash},
	{Loot_GROUP,		10,		Consumable}
};

MilitaryCZ[] =
{
	// Weapons
	{Loot_GROUP,		40,		weaponsCZ},
	
	//Tools
	{Loot_GROUP,		10,		ToolsMilitary},
	
	//Backpacks
	{Loot_GROUP,		9,		militarybackpacks},
	
	//Clothing
	{Loot_GROUP,		3,		militaryclothes},
	
	//Containers
	{Loot_CONTAINER,	1,		DZ_AmmoBoxUS, AmmoBoxCZ1, 7, 14},
	{Loot_CONTAINER,	1,		DZ_AmmoBoxRU, AmmoBoxCZ2, 7, 14},
	{Loot_CONTAINER,	1,		DZ_AmmoBoxUS, AmmoBoxCZ3, 7, 14},

	//Other
	{Loot_MAGAZINE,		3,		FoodMRE},
	{Loot_MAGAZINE,		1,		MAAWS_HEAT}, // MAAWS added exclusively to CZ group. They should be fairly rare.
	{Loot_PILE,			15,		AmmoCZ, 1, 4},
	{Loot_GROUP,		6,		AttachmentsCZ},
	{Loot_PILE,			10,		MedicalLow, 1, 2},
	{Loot_PILE,			10,		Trash, 1, 2},
	{Loot_PILE,			10,		Consumable, 1, 2}
};

MilitarySmallCZ[] =
{
	{Loot_WEAPON,		6,		Sa61_DZ},
	{Loot_WEAPON,		3,		CZ75P_DZ},
	{Loot_WEAPON,		3,		CZ75D_DZ},
	{Loot_WEAPON,		3,		CZ75SP_DZ},
	{Loot_WEAPON,		2,		CZ75SP_SD_DZ},
	{Loot_GROUP,		5,		ToolsMilitary},
	{Loot_GROUP,		3,		militaryclothes},
	{Loot_MAGAZINE,		1,		PipeBomb},
	{Loot_MAGAZINE,		1,		MAAWS_HEAT},
	{Loot_GROUP,		30,		AmmoCZ},
	{Loot_GROUP,		15,		AttachmentsCZ},
	{Loot_GROUP,		10,		MedicalLow},
	{Loot_GROUP,		10,		Trash},
	{Loot_GROUP,		10,		Consumable}
};
