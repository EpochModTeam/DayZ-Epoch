#include "BloodBags.hpp"
#include "Antibiotic.hpp"

class ItemAntibacterialWipe : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotHandGunItem;
	
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
	scope = public;
	count = 1;
	type = WeaponSlotHandGunItem;
	
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
	};
};

class ItemSepsisBandage : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotHandGunItem;
	
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

class ItemPainkiller : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\dayz_equip\models\med_painkiller_gear.p3d";
	picture = "\dayz_equip\textures\equip_painkiller_ca.paa";
	displayName = $STR_EQUIP_NAME_18;
	descriptionShort = $STR_EQUIP_DESC_18;
	
	class ItemActions
	{
		class Use
		{
			text = $STR_TAKE_PAINKILLER;
			script = "spawn player_useMeds;";
		};
	};
};

class ItemEpinephrine : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\dayz_equip\models\epi.p3d";
	picture = "\dayz_equip\textures\equip_epi_ca.paa";
	displayName = $STR_EQUIP_NAME_14;
	descriptionShort = $STR_EQUIP_DESC_14;
};

class ItemMorphine : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
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
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
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