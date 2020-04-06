class ItemKeyKit: ItemCore {
	scope = public;
	displayname = $STR_EQUIP_KEYKIT;
	model="\z\addons\dayz_epoch\models\keykit.p3d";
	descriptionShort=$STR_EQUIP_KEYKIT_DESC;
	picture="\z\addons\dayz_epoch\pictures\equip_keykit_ca.paa";
};

class ItemKeyKitBroken: ItemKeyKit {
	displayname = $STR_EQUIP_KEYKIT_BROKEN;
	descriptionShort = $STR_EQUIP_KEYKIT_BROKEN_DESC;
};