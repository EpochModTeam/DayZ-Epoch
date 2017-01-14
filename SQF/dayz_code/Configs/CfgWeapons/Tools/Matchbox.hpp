class ItemMatchbox_base : ItemCore
{
	scope = private;
	model = "\dayz_equip\models\matchbox_gear.p3d";
	picture = "\dayz_equip\textures\equip_matchbox_ca.paa";
	displayName = $STR_EQUIP_NAME_3;
	descriptionShort = $STR_EQUIP_DESC_3;
};

class ItemMatchboxEmpty : ItemMatchbox_base
{
	scope = public;
	displayName = $STR_EQUIP_NAME_3_EMPTY;
	descriptionShort = $STR_EQUIP_DESC_3_EMPTY;
};

//Loot Spawn Table.
class ItemMatchbox : ItemMatchbox_base
{
	scope = public;	
	matches = -1;
	qtyRemaining = "Item5Matchbox";
	
	class ItemActions
	{
		class Use
		{
			text = $STR_ACTIONS_MAKEFIRE;
			script = "spawn player_makeFire;"; //Do not use player_build because we have no ghost preview model for Land_Fire_DZ yet
			use[] = {"PartWoodPile"};
		};
	};
};

//Do not add to loot tables.
class Item5Matchbox : ItemMatchbox
{
	descriptionShort = $STR_EQUIP_DESC_3_A;
	matches = 5;
	qtyRemaining = "Item4Matchbox";
};
class Item4Matchbox : ItemMatchbox
{
	descriptionShort = $STR_EQUIP_DESC_3_B;
	qtyRemaining = "Item3Matchbox";
	matches = 4;
};
class Item3Matchbox : ItemMatchbox
{
	descriptionShort = $STR_EQUIP_DESC_3_C;
	qtyRemaining = "Item2Matchbox";
	matches = 3;
};
class Item2Matchbox : ItemMatchbox
{
	descriptionShort = $STR_EQUIP_DESC_3_D;
	qtyRemaining = "Item1Matchbox";
	matches = 2;
};
class Item1Matchbox : ItemMatchbox
{
	descriptionShort = $STR_EQUIP_DESC_3_E;
	qtyRemaining = "ItemMatchboxEmpty";
	matches = 1;
};