class P226_DZ: M9
{
	scope = 2;	
	displayName = $STR_DZ_WPN_P226_NAME;
	descriptionShort = $STR_DZ_WPN_P226_DESC;
	model = "\RH_de\RH_p226.p3d";
	picture = "\RH_de\inv\p226.paa";	
	begin1[] = {"\RH_de\sound\p226.wss",0.794328,1,700};
	soundBegin[] = {"begin1",1};
	drySound[] = {"\ca\Weapons\Data\Sound\T33_dry_v1",0.01,1,20};
	reloadMagazineSound[] = {"\RH_de\sound\p226_reload.wss",0.1,1,20};
	magazines[] = {"15Rnd_9x19_P226"};
};

class P226_Silver_DZ: P226_DZ
{
	displayName = $STR_DZ_WPN_P226_SILVER_NAME;	
	model = "\RH_de\RH_p226s.p3d";
	picture = "\RH_de\inv\p226s.paa";
};