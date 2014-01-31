class ItemAluminumBar: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Aluminum";
	model = "\z\addons\dayz_epoch\models\aluminum_bar.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_alum_bar_CA.paa";
	descriptionShort = "Aluminum Bar";

};
class ItemAluminumBar10oz: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "10oz Aluminum";
	model = "\z\addons\dayz_epoch\models\aluminum_bar.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_alum_bar_10oz_CA.paa";
	descriptionShort = "10oz Aluminum Bar";
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