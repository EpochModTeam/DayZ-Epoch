class ItemPainkiller : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\dayz_equip\models\med_painkiller_gear.p3d";
	picture = "\dayz_equip\textures\equip_painkiller_ca.paa";
	displayName = $STR_EQUIP_NAME_18;
	descriptionShort = $STR_EQUIP_DESC_18;
	
	class medical
	{
		chance = 1.10; //100%
		amount = -1;
		qtyRemaining = "ItemPainkiller6";
	};
	
	class ItemActions
	{
		class Use
		{
			text = $STR_TAKE_PAINKILLER;
			script = "spawn player_useMeds;";
		};
		class Combine {
			text = $STR_ANTIBIOTICS_COMBINE;
			script = "spawn player_combinePainkiller;";
		};
	};
};

class ItemPainkiller6 : ItemPainkiller
{
	displayName = $STR_EQUIP_NAME_PAINKILLER_6;
	descriptionShort = $STR_EQUIP_DESC_PAINKILLER_6;
	
	class medical
	{
		amount = 6;
		qtyRemaining = "ItemPainkiller5";
	};
};

class ItemPainkiller5 : ItemPainkiller
{
	displayName = $STR_EQUIP_NAME_PAINKILLER_5;
	descriptionShort = $STR_EQUIP_DESC_PAINKILLER_5;
	
	class medical
	{
		amount = 5;
		qtyRemaining = "ItemPainkiller4";
	};
};

class ItemPainkiller4 : ItemPainkiller
{
	displayName = $STR_EQUIP_NAME_PAINKILLER_4;
	descriptionShort = $STR_EQUIP_DESC_PAINKILLER_4;
	
	class medical
	{
		amount = 4;
		qtyRemaining = "ItemPainkiller3";
	};
};

class ItemPainkiller3 : ItemPainkiller
{
	displayName = $STR_EQUIP_NAME_PAINKILLER_3;
	descriptionShort = $STR_EQUIP_DESC_PAINKILLER_3;
	
	class medical
	{
		amount = 3;
		qtyRemaining = "ItemPainkiller2";
	};
};

class ItemPainkiller2 : ItemPainkiller
{
	displayName = $STR_EQUIP_NAME_PAINKILLER_2;
	descriptionShort = $STR_EQUIP_DESC_PAINKILLER_2;
	
	class medical
	{
		amount = 2;
		qtyRemaining = "ItemPainkiller1";
	};
};

class ItemPainkiller1 : ItemPainkiller
{
	displayName = $STR_EQUIP_NAME_PAINKILLER_1;
	descriptionShort = $STR_EQUIP_DESC_PAINKILLER_1;
	
	class medical
	{
		amount = 1;
		qtyRemaining = "ItemPainkillerEmpty";
	};
};

class ItemPainkillerEmpty : CA_Magazine
{
	scope = public;
	displayName = $STR_EQUIP_NAME_PAINKILLER_EMPTY;
	descriptionShort = $STR_EQUIP_DESC_PAINKILLER_EMPTY;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\dayz_equip\models\med_painkiller_gear.p3d";
	picture = "\dayz_equip\textures\equip_painkiller_ca.paa";	
};