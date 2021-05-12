class ItemMatchbox_base : ItemCore
{
	scope = 0;
	model = "\dayz_equip\models\matchbox_gear.p3d";
	picture = "\dayz_equip\textures\equip_matchbox_ca.paa";
	displayName = $STR_EQUIP_NAME_MATCHES;
	descriptionShort = $STR_EQUIP_DESC_MATCHES;
};

class ItemMatchboxWet : ItemMatchbox_base
{
	scope = 2;
	picture = "\dayz_epoch_c\icons\tools\ItemMatchesEmpty.paa";
	displayName = $STR_EQUIP_NAME_MATCHES_WET;
	descriptionShort = $STR_EQUIP_DESC_MATCHES_WET;
};

class ItemMatchboxEmpty : ItemMatchbox_base
{
	scope = 2;
	picture = "\dayz_epoch_c\icons\tools\ItemMatchesEmpty.paa";
	displayName = $STR_EQUIP_NAME_MATCHES_EMPTY;
	descriptionShort = $STR_EQUIP_DESC_MATCHES_EMPTY;
};

//Loot Spawn Table.
class ItemMatchbox : ItemMatchbox_base
{
	scope = 2;	
	model = "\dayz_equip\models\matchbox_gear.p3d"; // Some mods override this. We leave this here just to be sure.
	picture = "\dayz_equip\textures\equip_matchbox_ca.paa";
	matches = -1;
	qtyRemaining = "Item5Matchbox";
	
	class ItemActions
	{
		class Combine 
		{
			text = $STR_ANTIBIOTICS_COMBINE;
			script = "spawn player_combineMatches;";
		};
	};
};

//Do not add to loot tables.
class Item5Matchbox : ItemMatchbox
{
	displayName = $STR_EQUIP_NAME_MATCHES_5;
	descriptionShort = $STR_EQUIP_DESC_MATCHES_5;
	matches = 5;
	qtyRemaining = "Item4Matchbox";
};
class Item4Matchbox : ItemMatchbox
{
	displayName = $STR_EQUIP_NAME_MATCHES_4;
	descriptionShort = $STR_EQUIP_DESC_MATCHES_4;
	qtyRemaining = "Item3Matchbox";
	matches = 4;
};
class Item3Matchbox : ItemMatchbox
{
	displayName = $STR_EQUIP_NAME_MATCHES_3;
	descriptionShort = $STR_EQUIP_DESC_MATCHES_3;
	qtyRemaining = "Item2Matchbox";
	matches = 3;
};
class Item2Matchbox : ItemMatchbox
{	
	displayName = $STR_EQUIP_NAME_MATCHES_2;
	descriptionShort = $STR_EQUIP_DESC_MATCHES_2;
	qtyRemaining = "Item1Matchbox";
	matches = 2;
};
class Item1Matchbox : ItemMatchbox
{
	displayName = $STR_EQUIP_NAME_MATCHES_1;
	descriptionShort = $STR_EQUIP_DESC_MATCHES_1;
	qtyRemaining = "ItemMatchboxEmpty";
	matches = 1;
};