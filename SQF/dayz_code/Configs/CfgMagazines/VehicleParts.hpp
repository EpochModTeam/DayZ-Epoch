class PartFueltank : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\dayz_equip\models\fueltank.p3d";
	picture = "\dayz_equip\textures\equip_fueltank_ca.paa";
	displayName = $STR_EQUIP_NAME_8;
	descriptionShort = $STR_EQUIP_DESC_8;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_212;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"PartGeneric",1}};
			input[] = {{"PartFueltank",1}};
		};
	};
};
	
class PartWheel : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\dayz_equip\models\wheel.p3d";
	picture = "\dayz_equip\textures\equip_wheel_ca.paa";
	displayName = $STR_EQUIP_NAME_9;
	descriptionShort = $STR_EQUIP_DESC_9;
};

class PartEngine : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\dayz_equip\models\engine.p3d";
	picture = "\dayz_equip\textures\equip_engine_ca.paa";
	displayName = $STR_EQUIP_NAME_11;
	descriptionShort = $STR_EQUIP_DESC_11;
	class ItemActions {
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_212;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"PartGeneric",2}};
			input[] = {{"PartEngine",1}};
		};
	};
};

class PartVRotor : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\dayz_equip\models\vrotor.p3d";
	picture = "\dayz_equip\textures\equip_vrotor_ca.paa";
	displayName = $STR_EQUIP_NAME_32;
	descriptionShort = $STR_EQUIP_DESC_32;
	class ItemActions {
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_212;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"PartGeneric",3}};
			input[] = {{"PartVRotor",1}};
		};
	};
};

class PartGlass : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\dayz_equip\models\carglass.p3d";
	picture = "\dayz_equip\textures\equip_carglass_ca.paa";
	displayName = $STR_EQUIP_NAME_30;
	descriptionShort = $STR_EQUIP_DESC_30;
};
	
class PartGeneric : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\dayz_equip\models\genericparts.p3d";
	picture = "\dayz_equip\textures\equip_genericparts_ca.paa";
	displayName = $STR_EQUIP_NAME_10;
	descriptionShort = $STR_EQUIP_DESC_10;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_213;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"ItemPole",1}};
			input[] = {{"PartGeneric",2}};
		};
	};
};