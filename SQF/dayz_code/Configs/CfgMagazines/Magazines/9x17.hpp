class 7Rnd_9x17_PPK : CA_Magazine
{
	scope = 2;
	type = 16;
	displayName = $STR_DZ_MAG_7RND_9x17_PPK_NAME;
	descriptionShort = $STR_DZ_MAG_7RND_PPK_9x17_DESC;
	picture = "\RH_de\inv\m_ppk.paa";
	model = "\RH_de\mags\mag_ppk.p3d";	
	ammo = "B_9x17_Ball";
	count = 7;
	initSpeed = 320;
	
	class ItemActions
	{
		COMBINE_MAG
	};
};