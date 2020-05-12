// This file was created to group tools into different categories
// Melee weapons hatchet, machete, crowbar, and baseball bat added directly to building loot.

// This list contains small tools that can spawn anywhere
ToolsSurvival[] =
{
	{Loot_TOOL,		1,		ItemKnife},
	{Loot_TOOL,		1,		ItemMap},
	{Loot_TOOL,		1,		ItemWatch},
	{Loot_TOOL,		1,		ItemCompass},
	{Loot_TOOL,		1,		ItemMatchbox},
	{Loot_TOOL,		1,		ItemFlashlight},
	{Loot_TOOL,		1,		Binocular}
};

// This list contains large tools that should not be called in small groups
ToolsBuilding[] =
{
	{Loot_TOOL,		1,		ItemSledge}, // Sledge hammer should be a bit more rare than everything else.
	{Loot_MAGAZINE,	2,		ItemSledgeHandle},
	{Loot_MAGAZINE,	2,		ItemSledgeHead},
	{Loot_TOOL,		3,		ItemKeyKit},
	{Loot_TOOL,		6,		ItemToolbox},
	{Loot_TOOL,		4,		ItemShovel} 
};

// Small tools that can spawn anywhere
ToolsMilitary[] =
{
	{Loot_TOOL,		1,		ItemKnife},
	{Loot_TOOL,		1,		ItemGPS},
	{Loot_TOOL,		1,		ItemCompass},
	{Loot_TOOL,		1,		ItemFlashlightRed},
	{Loot_TOOL,		1,		Binocular},
	{Loot_TOOL,		1,		NVGoggles},
	{Loot_TOOL,		1,		Binocular_Vector},
	{Loot_TOOL,		1,		ItemEtool} //Equal to ItemShovel just the military version
};