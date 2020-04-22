class ACR_30Rnd_680x43: CA_Magazine
{
	scope = 2;
	displayName = $STR_DZ_MAG_30RND_ACR_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_ACR_DESC;
	picture = "\FHQ_Remington\ammo\ui\i_30rndpmag.paa";
	ammo = "B_680x43_Ball";
	initSpeed = 700;
	tracersEvery = 0;
	model = "\FHQ_Remington\acr\magazine.p3d";	
	count = 30;
	
	class ItemActions
	{
		COMBINE_MAG
	};
};
class ACR_30Rnd_680x43_SD: ACR_30Rnd_680x43
{
	displayName = $STR_DZ_MAG_30RND_ACRSD_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_ACRSD_DESC;
	picture = "\FHQ_Remington\ammo\ui\i_30rndpmag_sd.paa";
	ammo = "B_680x43_SD";
	initSpeed = 420;	
};