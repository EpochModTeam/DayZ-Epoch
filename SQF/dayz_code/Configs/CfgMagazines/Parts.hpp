class PartFueltank: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_8;
	model = "\dayz_equip\models\fueltank.p3d";
	picture = "\dayz_equip\textures\equip_fueltank_ca.paa";
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
class PartWheel: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_9;
	model = "\dayz_equip\models\wheel.p3d";
	picture = "\dayz_equip\textures\equip_wheel_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_9;
};
class PartGeneric: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_10;
	model = "\dayz_equip\models\genericparts.p3d";
	picture = "\dayz_equip\textures\equip_genericparts_ca.paa";
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