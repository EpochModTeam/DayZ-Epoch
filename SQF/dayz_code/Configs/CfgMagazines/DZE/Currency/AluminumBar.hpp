class ItemAluminumBar: CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_ALUMINUM;
	model = "\z\addons\dayz_epoch\models\aluminum_bar.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_alum_bar_CA.paa";
	descriptionShort = $STR_EPOCH_ALUMINUM_DESC;

};
class ItemAluminumBar10oz: CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_10OZALUMINUM;
	model = "\z\addons\dayz_epoch\models\aluminum_bar.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_alum_bar_10oz_CA.paa";
	descriptionShort = $STR_EPOCH_10OZALUMINUM_DESC;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_211;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemAluminumBar",10}};
			input[] = {{"ItemAluminumBar10oz",1}};
		};
	};
};