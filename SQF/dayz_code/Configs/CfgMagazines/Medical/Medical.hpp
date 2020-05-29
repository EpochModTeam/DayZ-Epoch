#include "BloodBags.hpp"
#include "Antibiotic.hpp"
#include "Painkiller.hpp"

class ItemAntibacterialWipe : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 16;	
	model = "\z\addons\dayz_communityassets\models\antiseptic.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_antiseptic_ca.paa";
	displayName = $STR_ITEM_NAME_WIPES;
	descriptionShort = $STR_ITEM_DESC_WIPES;
	
	class ItemActions
	{
		class Use
		{
			text = $STR_ACTIONS_MEDICAL_WIPE;
			script = "spawn player_useMeds;";
		};
	};
};

class ItemBandage : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 16;	
	model = "\dayz_equip\models\fad.p3d";
	picture = "\dayz_equip\textures\equip_fad_ca.paa";
	displayName = $STR_EQUIP_NAME_7;
	descriptionShort = $STR_EQUIP_DESC_7;
	
	class ItemActions
	{
		class Use
		{
			text = $STR_BANDAGE_SELF;
			script = "spawn player_useMeds;";
		};
		class Crafting
		{
			text = $STR_CRAFTING_SEPSISBANDAGE;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSepsisBandage",1}};
			outputweapons[] = {};
			input[] = {{"ItemBandage",1},{"equip_comfreyleafs",1}};
		};		
	};
};

class ItemSepsisBandage : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 16;	
	model = "\dayz_equip\models\fad.p3d";
	picture = "\dayz_equip\textures\equip_fad_ca.paa";
	displayName = $STR_EQUIP_NAME_SEPSISBANDAGE;
	descriptionShort = $STR_EQUIP_DESC_SEPSISBANDAGE;
	
	class ItemActions
	{
		class Use
		{
			text = $STR_BANDAGE_SELF;
			script = "spawn player_useMeds;";
		};
	};
};

class ItemEpinephrine : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "\dayz_equip\models\epi.p3d";
	picture = "\dayz_equip\textures\equip_epi_ca.paa";
	displayName = $STR_EQUIP_NAME_14;
	descriptionShort = $STR_EQUIP_DESC_14;
};

class ItemMorphine : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "\dayz_equip\models\morphine.p3d";
	picture = "\dayz_equip\textures\equip_morphine_ca.paa";
	displayName = $STR_EQUIP_NAME_15;
	descriptionShort = $STR_EQUIP_DESC_15;
	
	class ItemActions
	{
		class Use
		{
			text = $STR_TAKE_MORPHINE;
			script = "spawn player_useMeds;";
		};
	};
};

class ItemHeatPack : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "\dayz_equip\models\Heat_pack.p3d";
	picture = "\dayz_equip\textures\equip_heat_pack_ca.paa";
	displayName = $STR_EQUIP_NAME_42;
	descriptionShort = $STR_EQUIP_DESC_42;
	
	class ItemActions
	{
		class Use
		{
			text = $STR_ACTIONS_HEATPACK;
			script = "spawn player_useMeds;";
		};
	};
};

class equip_woodensplint : CA_Magazine {
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_WOODENSPLINT;
	descriptionShort = $STR_ITEM_DESC_WOODENSPLINT;
	model = "\z\addons\dayz_communityassets\models\woodensplint.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_woodensplint_ca.paa";
	type = 256;
	
	class ItemActions 
	{
		class Use 
		{
			text = $STR_ACTIONS_BRACE_LEG;
			script = "spawn player_useMeds;";
		};
	};
};

class equip_gauze : CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_gauze;
	descriptionShort = $STR_ITEM_DESC_equip_gauze;
	model = "\z\addons\dayz_communityassets\models\gauze.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_gauze_ca.paa";
	type = 256;
	
	class ItemActions
	{
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_269;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemKnife"};
			output[] = {{"ItemBandage",2}};
			outputweapons[] = {};
			input[] = {{"equip_gauze",2},{"equip_rag",1},{"equip_string",1}};
		};
	};	
};

class equip_gauzepackaged : CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_gauzepackaged;
	descriptionShort = $STR_ITEM_DESC_equip_gauzepackaged;
	model = "\z\addons\dayz_communityassets\models\gauze_package.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_gauze_package_ca.paa";
	type = 256;
	
	class ItemActions
	{
		class Crafting
		{
			text = $STR_CRAFTING_PACKAGEGAUZE;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"equip_gauze",3}};
			outputweapons[] = {};
			input[] = {{"equip_gauzepackaged",1}};
		};
	};	
};

class equip_herb_box : CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_HERBBOX;
	descriptionShort = $STR_EQUIP_DESC_HERBBOX;
	model = "\z\addons\dayz_communityassets\models\herb_box.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_herb_box_ca.paa";	
};