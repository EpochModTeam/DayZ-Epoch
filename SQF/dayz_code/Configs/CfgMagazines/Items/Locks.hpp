class ItemComboLock: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_COMBINATIONLOCK;
	weight = 0.5;
	model = "\z\addons\dayz_epoch\models\combo_lock_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_combolock_ca.paa";
	descriptionShort = $STR_EPOCH_COMBINATIONLOCK_DESC;
};


class ItemPadlock: CA_Magazine //Vanilla lock, left in config for potential admin use, but all scripts changed to use Epoch ItemComboLock
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_BLD_name_ItemPadlock;//"Padlock"
	picture = "\z\addons\dayz_buildings\equip\padlock.paa";
	model = "z\addons\dayz_buildings\models\padlock.p3d";
	descriptionShort = $STR_BLD_desc_ItemPadlock;//"Padlock - Used for securing Workshop's and Houses."
};