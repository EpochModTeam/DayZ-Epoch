class 30Rnd_6x35_KAC: CA_Magazine
{
	scope = 2;
	displayName = $STR_DZ_MAG_30RND_KACPDW_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_KACPDW_DESC;
	picture = "\RH_pdw\inv\m_30pdw_ca.paa";
	model = "\RH_pdw\RH_pdw_mag.p3d";
	ammo = "B_6x35_Ball";
	count = 30;
	initSpeed = 930;
	lastroundstracer = 0;
	
	class ItemActions
	{
		COMBINE_MAG
	};	
};