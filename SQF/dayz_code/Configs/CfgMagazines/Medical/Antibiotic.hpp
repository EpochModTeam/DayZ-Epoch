class ItemAntibiotic_base : CA_Magazine
{
	scope = 0;
	count = 1;
	type = 256;	
	model = "\dayz_equip\models\med_antibiotic_gear.p3d";
	picture = "\dayz_equip\textures\equip_antibiotics_ca.paa";
	displayName = $STR_EQUIP_NAME_17;	
};

class ItemAntibiotic : ItemAntibiotic_base
{
	scope = 2;
	descriptionShort = $STR_EQUIP_DESC_17;
	
	class medical
	{
		chance = 1.10; //100%
		amount = -1;
		qtyRemaining = "ItemAntibiotic6";
	};
	
	class ItemActions
	{
		class Use
		{
			text = $STR_TAKE_ANTIBIOTIC;
			script = "spawn player_useMeds;";
		};
		class Combine {
			text = $STR_ANTIBIOTICS_COMBINE;
			script = "spawn player_combineAntibiotics;";
		};
	};
};

class ItemAntibiotic6 : ItemAntibiotic
{
	displayName = $STR_EQUIP_NAME_ANTIBIOTICS_6;
	descriptionShort = $STR_EQUIP_DESC_48;
	
	class medical
	{
		amount = 6;
		qtyRemaining = "ItemAntibiotic5";
	};
};

class ItemAntibiotic5 : ItemAntibiotic
{
	displayName = $STR_EQUIP_NAME_ANTIBIOTICS_5;
	descriptionShort = $STR_EQUIP_DESC_49;
	
	class medical
	{
		amount = 5;
		qtyRemaining = "ItemAntibiotic4";
	};
};

class ItemAntibiotic4 : ItemAntibiotic
{
	displayName = $STR_EQUIP_NAME_ANTIBIOTICS_4;
	descriptionShort = $STR_EQUIP_DESC_50;
	
	class medical
	{
		amount = 4;
		qtyRemaining = "ItemAntibiotic3";
	};
};

class ItemAntibiotic3 : ItemAntibiotic
{
	displayName = $STR_EQUIP_NAME_ANTIBIOTICS_3;
	descriptionShort = $STR_EQUIP_DESC_51;
	
	class medical
	{
		amount = 3;
		qtyRemaining = "ItemAntibiotic2";
	};
};

class ItemAntibiotic2 : ItemAntibiotic
{
	displayName = $STR_EQUIP_NAME_ANTIBIOTICS_2;
	descriptionShort = $STR_EQUIP_DESC_52;
	
	class medical
	{
		amount = 2;
		qtyRemaining = "ItemAntibiotic1";
	};
};

class ItemAntibiotic1 : ItemAntibiotic
{
	displayName = $STR_EQUIP_NAME_ANTIBIOTICS_1;
	descriptionShort = $STR_EQUIP_DESC_53;
	
	class medical
	{
		amount = 1;
		qtyRemaining = "ItemAntibioticEmpty";
	};
};

class ItemAntibioticEmpty : ItemAntibiotic_base
{
	scope = 2;
	displayName = $STR_EQUIP_NAME_ANTIBIOTICS_EMPTY;
	descriptionShort = $STR_EQUIP_DESC_54;
};