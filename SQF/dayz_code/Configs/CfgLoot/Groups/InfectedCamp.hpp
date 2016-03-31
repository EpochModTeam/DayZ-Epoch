InfectedCampType[] =
{
	{Loot_NONE,			1,		Camp1_Small},
	{Loot_NONE,			1,		Camp2_Small},
	{Loot_NONE,			1,		Camp3_Small}
};

InfectedCampObject[] =
{
	{Loot_GROUP,		9,		InfectedCampCorpse},
	{Loot_GROUP,		1,		InfectedCampWreck}
};

InfectedCampCorpse[] =
{
	{Loot_VEHICLE,		1,		Body1},
	{Loot_VEHICLE,		1,		Body2}
};

InfectedCampWreck[] =
{
	{Loot_VEHICLE,		5,		LADAWreck},
	{Loot_VEHICLE,		4,		UralWreck},
	{Loot_VEHICLE,		3,		HMMWVWreck},
	{Loot_VEHICLE,		2,		BMP2Wreck},
	{Loot_VEHICLE,		1,		T72Wreck}
};

InfectedCamp[] =
{
	//Tools
	{Loot_WEAPON,		7,		ItemWatch},
	{Loot_WEAPON,		3,		ItemCompass},
	{Loot_WEAPON,		7,		ItemFlashlight},
	{Loot_WEAPON,		5,		ItemKnife},
	{Loot_WEAPON,		4,		Binocular},
	{Loot_WEAPON,		8,		ItemCrowbar},
	
	//Pistols
	{Loot_GROUP,		10,		pistols},

	//Rifles
	{Loot_GROUP,		6,		assaultrifles},
	{Loot_GROUP,		8,		farmweapons},
	{Loot_WEAPON,		2,		Mosin_DZ},
	{Loot_WEAPON,		4,		Crossbow_DZ},
	{Loot_WEAPON,		5,		MeleeBaseBallBat},
	
	//Items
	{Loot_MAGAZINE,		3,		equip_rope},
	{Loot_MAGAZINE,		3,		equip_herb_box},
	{Loot_MAGAZINE,		1,		ItemWire},
	{Loot_MAGAZINE,		4,		ItemTankTrap},
	{Loot_MAGAZINE,		6,		PartWoodPile},
	{Loot_GROUP,		6,		militaryclothes},
	{Loot_MAGAZINE,		2,		ItemBookBible},
	
	//Groups
	{Loot_GROUP,		30,		MedicalLow},
	{Loot_GROUP,		20,		MedicalHigh},
	{Loot_GROUP,		10,		Parts},
	{Loot_GROUP,		100,	Consumable},
	{Loot_WEAPON,		3,		ItemMatchbox}
};