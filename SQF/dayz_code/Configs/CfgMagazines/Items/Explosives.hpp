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