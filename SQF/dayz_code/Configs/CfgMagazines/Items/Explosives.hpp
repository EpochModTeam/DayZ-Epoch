class TimeBomb: CA_Magazine
{
	scope = 1;
	displayName = "$STR_MN_TIME_BOMB";
	picture = "\CA\weapons\data\equip\m_satchel_CA.paa";
	useAction = 1;
	useActionTitle = "$STR_ACTION_PUTBOMB";
	type = 256;
	value = 5;
	ammo = "TimeBomb";
	count = 1;
	initSpeed = 0;
	maxLeadSpeed = 0;
	nameSoundWeapon = "satchelcharge";
	nameSound = "satchelcharge";
	sound[] = {"\ca\Weapons\Data\Sound\gravel_L",0.00031622776,1,10};
	descriptionShort = "$STR_DSS_TimeBomb";
};

class Mine: TimeBomb
{
	scope = 2;
	type = WeaponSlotItem; // Only takes up one gear slot in Epoch
	displayName = $STR_MN_MINE;
	picture = "\CA\weapons\data\equip\m_AT15_ca.paa";
	ammo = "Mine";
	nameSoundWeapon = "mine";
	nameSound = "mine";
	descriptionShort = $STR_DSS_MINE;	
};

class MineE: TimeBomb
{
	scope = 2;
	type = WeaponSlotItem; // Only takes up one gear slot in Epoch
	displayName = $STR_MN_MINE;
	picture = "\CA\weapons\data\equip\m_TM46_ca.paa";
	ammo = "MineE";
	nameSoundWeapon = "mine";
	descriptionShort = $STR_DSS_MINE_E;	
};

class PipeBomb: TimeBomb
{
	scope = 2;
	displayName = $STR_DZ_MAG_SATCHEL_NAME; // Singular "Satchel Charge" for death messages "with a x"
	descriptionShort = $STR_DSS_Pipe_Bomb;
	type = WeaponSlotItem; // Only takes up one gear slot in Epoch
	picture = "\CA\weapons\data\equip\m_satchel_CA.paa";
	model = "\z\addons\dayz_epoch_w\magazine\dze_satchel.p3d";
	value = 5;
	ammo = "PipeBomb";
	count = 1;
	initSpeed = 0;
	maxLeadSpeed = 0;
	nameSoundWeapon = "satchelcharge";
	nameSound = "satchelcharge";
	useAction = 1;
	useActionTitle = "$STR_ACTION_PUTBOMB";
};

class ItemC4Charge : CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_C4_CHARGE;
	descriptionShort = $STR_EPOCH_C4_CHARGE_DESC;
	model = "\ca\weapons\explosive.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\carbomb.paa";
};

class ItemCarBomb : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_ITEM_NAME_equip_carbomb;
	model = "\ca\weapons\explosive.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\carbomb.paa";
	descriptionShort = $STR_ITEM_DESC_equip_carbomb;
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_attach_carbomb;
			script = "spawn player_attach_bomb;";
		};
	};
};	