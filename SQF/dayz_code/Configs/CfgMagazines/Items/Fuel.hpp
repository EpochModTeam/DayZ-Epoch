class ItemJerrycanEmpty : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\dayz_equip\models\jerrycan.p3d";
	picture = "\dayz_equip\textures\equip_jerrycan_e_ca.paa";
	displayName = $STR_ITEM_NAME_JERRYCAN_EMPTY;
	descriptionShort = $STR_ITEM_DESC_JERRYCAN_EMPTY;
	
	fuelQuantity = 0;
	fullcan = "ItemJerrycan";
};

class ItemJerrycan : ItemJerrycanEmpty
{
	picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
	displayName = $STR_ITEM_NAME_JERRYCAN;
	descriptionShort = $STR_ITEM_DESC_JERRYCAN;
	
	fuelQuantity = 20;
	emptycan = "ItemJerrycanEmpty";
	
	//used for tent burning
	fireIntensity = 6;
};

class ItemFuelcanEmpty : ItemJerrycanEmpty
{
	type = WeaponSlotItem;
	
	model = "z\addons\dayz_communityassets\models\fuelcan.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_fuelcan_empty_CA.paa";
	displayName = $STR_ITEM_NAME_FUELCAN_EMPTY;
	descriptionShort = $STR_ITEM_DESC_FUELCAN_EMPTY;
	
	fuelQuantity = 0;
	fullcan = "ItemFuelcan";
};

class ItemFuelcan : ItemFuelcanEmpty
{
	picture = "\z\addons\dayz_communityassets\pictures\equip_fuelcan_CA.paa";
	displayName = $STR_ITEM_NAME_FUELCAN;
	descriptionShort = $STR_ITEM_DESC_FUELCAN;
	
	fuelQuantity = 5;
	emptycan = "ItemFuelcanEmpty";
	
	//used for tent burning
	fireIntensity = 4;
};