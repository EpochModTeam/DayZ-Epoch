//Vehicle class, min loot, max loot, min loot distance, max loot distance
CarePackageType[] =
{
	{Loot_NONE,			5,		Misc_cargo_cont_net1, 4, 8},
	{Loot_NONE,			4,		Misc_cargo_cont_net2, 6, 10},
	{Loot_NONE,			3,		Misc_cargo_cont_net3, 8, 12}
};

CarePackage[] =
{
	//Tools
	{Loot_GROUP,		6,		ToolsMilitary},
	{Loot_GROUP,		6,		ToolsBuilding},
	
	//Backpacks
	{Loot_GROUP,		4,		backpacks},
	{Loot_GROUP,		3,		militarybackpacks},
	
	//Containers
	{Loot_CONTAINER,	5,		DZ_CardboardBox, Consumable, 6, 12},
	{Loot_CONTAINER,	3,		DZ_MedBox, MedicalHigh, 8, 16},
	
	//Items
	{Loot_GROUP,		10,		tents},
	{Loot_PILE,			10,		MedicalLow, 1, 3},
	{Loot_PILE,			15,		Consumable, 1, 3}
	//DZE from old SupplyDrop group
	//{Loot_MAGAZINE,		1,		bulk_ItemTankTrap},
	//{Loot_MAGAZINE,		1,		PartPlywoodPack},
	//{Loot_MAGAZINE,		1,		PartPlankPack},
	//{Loot_MAGAZINE,		1,		bulk_PartGeneric},
	//{Loot_MAGAZINE,		1,		bulk_ItemSandbag},
	//{Loot_MAGAZINE,		1,		MortarBucket},
	//{Loot_MAGAZINE,		3,		CinderBlocks}
};