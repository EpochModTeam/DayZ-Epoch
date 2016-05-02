class ItemTinBar: CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_TIN;
	model = "\z\addons\dayz_epoch\models\tin_bar.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_tin_bar_CA.paa";
	descriptionShort = $STR_EPOCH_TIN_DESC;

};
class ItemTinBar10oz: CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_10OZTIN;
	model = "\z\addons\dayz_epoch\models\tin_bar.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_tin_bar_10oz_CA.paa";
	descriptionShort = $STR_EPOCH_10OZTIN_DESC;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_211;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemTinBar",10}};
			input[] = {{"ItemTinBar10oz",1}};
		};
	};
};