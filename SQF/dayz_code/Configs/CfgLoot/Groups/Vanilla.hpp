// Grouping Vanilla Mod specific items together because they have limited use in Epoch and should be called sporadically.
// DayZ Mod base building is not enabled in Epoch so there is no reason to spawn many of these items.
// skigoggles posted a list of unused (junk) items here: https://helpthedeadreturn.wordpress.com/2015/12/08/items-of-dubious-value-junk/ 

VanillaSurvival[] =
{
//	{Loot_MAGAZINE,		1,		equip_pvc_box},  // Unused
//	{Loot_MAGAZINE,		1,		ItemBookBible}, // Novelty church item - added directly to church loot
//	{Loot_MAGAZINE,		1,		PartWoodPile}, // Build a fire -  In Epoch these can be easily harvested from trees
//	{Loot_MAGAZINE,		1,		equip_rope}, // Only appears to be used to craft string
	{Loot_MAGAZINE,		1,		equip_rag}, // Used to craft bandages and makeshift backpack
	{Loot_MAGAZINE,		1,		equip_string}, // Used in multiple crafting recipes
	{Loot_MAGAZINE,		1,		equip_duct_tape}, // Repair broken stuff - craft a sling
	{Loot_MAGAZINE,		1,		equip_herb_box}, // Combine with ItemWaterBottle to make Herbal Tea
	{Loot_MAGAZINE,		1,		equip_nails}, // Combine with baseball bat - Vanilla base building
	{Loot_MAGAZINE,		1,		equip_hose} // Need this to siphon gas with fuel container - very useful
};

VanillaConstruction[] =
{
//	{Loot_MAGAZINE,		1,		equip_scrapelectronics}, // Unused
//	{Loot_MAGAZINE,		2,		equip_1inch_metal_pipe}, // Unused
//	{Loot_MAGAZINE,		2,		equip_2inch_metal_pipe}, // Unused
//	{Loot_WEAPON,		2,		ItemShovel}, // Has no function in Epoch
//	{Loot_WEAPON,		1,		WeaponHolder_ItemPickaxe}, // Get ItemStone from rocks on the map - no function in Epoch.
//	{Loot_WEAPON,		2,		WeaponHolder_ItemPickaxeBroken},
//	{Loot_MAGAZINE,		9,		equip_metal_sheet}, // Vanilla base building
//	{Loot_MAGAZINE,		9,		equip_metal_sheet_rusted}, // Unused
//	{Loot_MAGAZINE,		4,		ItemScrews}, // Vanilla base building
//	{Loot_MAGAZINE,		5,		ItemStone}, // Vanilla base building - foundations
//	{Loot_WEAPON,		1,		ItemDIY_wood}, // Vanilla base building
//	{Loot_WEAPON,		1,		ItemDIY_Gate} // Vanilla base building
	{Loot_MAGAZINE,		1,		equip_hose}, // Need this to siphon gas with fuel container - very useful
	{Loot_MAGAZINE,		1,		equip_lever}, // Repair broken handles if dayz_toolBreaking enabled
	{Loot_MAGAZINE,		1,		ItemPlank}, // Vanilla base building -  craft a sling
	{Loot_MAGAZINE,		1,		equip_nails}, // Combine with baseball bat - Vanilla base building
	{Loot_MAGAZINE,		1,		equip_brick}, // Used to sharpen tools if dayz_knifeDulling enabled
	{Loot_MAGAZINE,		1,		ItemLog} // Make a fire, make ItemPlank
};