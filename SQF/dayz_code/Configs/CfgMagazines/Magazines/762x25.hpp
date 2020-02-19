class 8Rnd_762x25_TT33 : CA_Magazine
{
	scope = public;
	type = 16;
	displayName = $STR_DZ_MAG_8RND_762x25_TT33_NAME;
	descriptionShort = $STR_DZ_MAG_8RND_TT33_762x25_DESC;	
	picture = "\RH_de\inv\m_tt33.paa";
	model = "\RH_de\mags\mag_tt33.p3d";	
	ammo = "B_762x25_Ball";
	count = 8;
	initSpeed = 400;
	
	cartridgeName = "762x25";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};