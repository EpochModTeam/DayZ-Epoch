#define Loot_NONE		0
/*
Has no standard functionality.
Can be used to leverage the weighted selection system for other purposes.
*/

#define Loot_GROUP		1
/*
Picks another definition from the specified group.

Syntax:
	{Loot_GROUP,		Chance,		Group}
Example:
	{Loot_GROUP,		2,			Generic}
*/


#define Loot_WEAPON		2
#define Loot_TOOL Loot_WEAPON
/*
Spawns a weapon with the given classname.

Syntax:
	{Loot_WEAPON,		Chance,		Class}
Example:
	{Loot_WEAPON,		0.8,		AKM_DZ}
*/


#define Loot_MAGAZINE	3
/*
Spawns a magazine with the given classnane.

Syntax:
	{Loot_MAGAZINE,		Chance,		Class}
Example:
	{Loot_MAGAZINE,		4,			ItemWaterBottle}
*/


#define Loot_PILE		4
/*
Spawns a pile of loot with a random number of items in the range [min,max].
Items are picked from the specified loot group.
Specified group should only contain Loot_WEAPON or Loot_MAGAZINE definitions.

Syntax:
	{Loot_PILE,			Chance,		Group, Min, Max}
Example:
	{Loot_PILE,			1,			Consumable, 1, 3}
*/


#define Loot_BACKPACK	5
/*
Spawns a backpack on the ground, or inserts into object cargo.

Syntax:
	{Loot_BACKPACK,		Chance,		Class}
Example:
	{Loot_BACKPACK,		0.1,		DZ_BP_Czech}
*/


#define Loot_VEHICLE	6
/*
Spawns a vehicle with the given classname.

Syntax:
	{Loot_VEHICLE,		Chance,		Class}
Example:
	{Loot_VEHICLE,		0.8,		WeaponHolder_ItemCamoNet}
*/


#define Loot_CONTAINER	7
/*
Spawns a vehicle with the given classname. Fills with [min,max] items from given group.

Syntax:
	{Loot_CONTAINER,	Chance,		Class, Group, Min, Max}
Example:
	{Loot_CONTAINER,	0.5,		MedBox, Medical, 5, 10}
*/


#define Loot_CUSTOM		8
/*
Executes given script. Script must return an object reference.

Syntax:
	{Loot_CUSTOM,		Chance,		Script}
Example:
	{Loot_CUSTOM,		0.5,		"call MyFunction"}
*/