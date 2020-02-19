class 6Rnd_44Magnum: CA_Magazine
{
	scope = public;
	type = 16;
	displayName = $STR_DZ_MAG_6RND_44MAGNUM_NAME;
	descriptionShort = $STR_DZ_MAG_6RND_44MAGNUM_DESC;
	picture = "\RH_de\inv\m_44m.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	ammo = "B_44mag_Ball";
	count = 6;
	initSpeed = 421;
	
	class ItemActions
	{
		COMBINE_MAG
	};	
};