class ItemJerrycanEmpty : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
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
	containerEmpty = "ItemJerrycanEmpty";
	
	//used for tent burning
	fireIntensity = 6;
	
	class ItemActions 
	{
		class Empty	
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
	};	
};

class ItemJerrycanWater : ItemJerrycanEmpty
{
	picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
	displayName = $STR_ITEM_NAME_JERRYCAN_WATER;
	descriptionShort = $STR_ITEM_DESC_JERRYCAN_WATER;	
	containerEmpty = "ItemJerrycanEmpty";
	
	class ItemActions 
	{
		class Empty	
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
	};	
};

class ItemJerrycanMilk : ItemJerrycanEmpty
{
	picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
	displayName = $STR_ITEM_NAME_JERRYCAN_MILK;
	descriptionShort = $STR_ITEM_DESC_JERRYCAN_MILK;	
	containerEmpty = "ItemJerrycanEmpty";
	
	class ItemActions 
	{
		class Empty	
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
	};	
};

class ItemFuelcanEmpty : ItemJerrycanEmpty
{
	type = 256;	
	model = "z\addons\dayz_communityassets\models\fuelcan.p3d";
	picture = "\dayz_epoch_c\icons\equipment\ItemFuelcanEmpty.paa";
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
	containerEmpty = "ItemFuelcanEmpty";
	
	//used for tent burning
	fireIntensity = 4;
	
	class ItemActions 
	{
		class Empty	
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
	};
};

class ItemFuelcanWater : ItemFuelcanEmpty
{
	picture = "\z\addons\dayz_communityassets\pictures\equip_fuelcan_CA.paa";
	displayName = $STR_ITEM_NAME_FUELCAN_WATER;
	descriptionShort = $STR_ITEM_DESC_FUELCAN_WATER;	
	containerEmpty = "ItemFuelcanEmpty";
	class ItemActions 
	{
		class Empty	
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
	};
};

class ItemFuelcanMilk : ItemFuelcanEmpty
{
	picture = "\z\addons\dayz_communityassets\pictures\equip_fuelcan_CA.paa";
	displayName = $STR_ITEM_NAME_FUELCAN_MILK;
	descriptionShort = $STR_ITEM_DESC_FUELCAN_MILK;	
	containerEmpty = "ItemFuelcanEmpty";
	class ItemActions 
	{
		class Empty	
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
	};
};

class ItemFuelBarrel: CA_Magazine
{
	scope = 2;
	count = 1;
	fuelQuantity = 210;
	type = 256;
	displayName = $STR_EPOCH_FUELBARREL;
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	descriptionShort = $STR_EPOCH_FUELBARREL_DESC;
	fireIntensity = 6; //used for tent burning
	containerEmpty = "ItemFuelBarrelEmpty";
	
	class ItemActions 
	{
		class Empty	
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
	};	
};

class ItemFuelBarrelWater: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_FUELBARREL_WATER;
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	descriptionShort = $STR_EPOCH_FUELBARREL_DESC_WATER;
	containerEmpty = "ItemFuelBarrelEmpty";
	
	class ItemActions 
	{
		class Empty	
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
	};	
};

class ItemFuelBarrelMilk: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_FUELBARREL_MILK;
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	descriptionShort = $STR_EPOCH_FUELBARREL_DESC_MILK;
	containerEmpty = "ItemFuelBarrelEmpty";
	
	class ItemActions 
	{
		class Empty	
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
	};	
};

class ItemFuelBarrelEmpty: ItemFuelBarrel
{
	scope = 2;
	count = 1;
	fuelQuantity = 0;
	type = 256;
	displayName = $STR_EPOCH_EMPTYFUELBARREL;
	picture = "\z\addons\dayz_epoch\pictures\equip_oildrum_e_CA.paa";
	descriptionShort = $STR_EPOCH_EMPTYFUELBARREL_DESC;
	fullcan = "ItemFuelBarrel";
	
	class ItemActions
	{
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_276;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemFireBarrel_kit",1}};
			input[] = {{"ItemFuelBarrelEmpty",1},{"ItemJerryCan",1},{"PartWoodPile",4}};
		};
	};
};

class ItemOilBarrel: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_OILBARREL;
	descriptionShort = $STR_EPOCH_OILBARREL_DESC;
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";	
	containerEmpty = "ItemOilBarrelEmpty";
	
	class ItemActions 
	{
		class Empty	
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
	};	
};

class ItemOilBarrelEmpty : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_EMPTYOILBARREL;
	descriptionShort = $STR_EPOCH_EMPTYOILBARREL_DESC;
	picture = "\z\addons\dayz_epoch\pictures\equip_oildrum_e_CA.paa";
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	
	class ItemActions
	{
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_276;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemFireBarrel_kit",1}};
			input[] = {{"ItemOilBarrelEmpty",1},{"ItemJerryCan",1},{"PartWoodPile",4}};
		};
	};	
};	

class ItemMethylaminBarrelEmpty : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_EMPTYMETHYLAMINEBARREL;
	descriptionShort = $STR_EPOCH_EMPTYMETHYLAMINEBARREL_DESC;
	picture = "\z\addons\dayz_epoch\pictures\equip_oildrum_e_CA.paa";
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	
	class ItemActions
	{
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_276;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemFireBarrel_kit",1}};
			input[] = {{"ItemMethylaminBarrelEmpty",1},{"ItemJerryCan",1},{"PartWoodPile",4}};
		};
	};	
};

class ItemMethylaminBarrel : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	displayName = $STR_EPOCH_METHYLAMINEBARREL;
	descriptionShort = $STR_EPOCH_METHYLAMINEBARREL_DESC;
	containerEmpty = "ItemMethylaminBarrelEmpty";
	
	class ItemActions 
	{
		class Empty	
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
	};	
};