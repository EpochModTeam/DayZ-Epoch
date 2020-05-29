class Tokarew_TT33_DZ: Makarov
{
	scope = 2;
	displayName = $STR_DZ_WPN_TT33_NAME;
	descriptionShort = $STR_DZ_WPN_TT33_DESC;	
	model = "\RH_de\RH_tt33.p3d";
	picture = "\RH_de\inv\tt33.paa";
	begin1[] = {"\RH_de\sound\TT33.wss",0.794328,1,700};
	soundBegin[] = {"begin1",1};
	drySound[] = {"\ca\Weapons\Data\Sound\T33_dry_v1",0.01,1,20};
	reloadMagazineSound[] = {"\RH_de\sound\tt33_reload.wss",0.1,1,20};
	magazines[] = {"8Rnd_762x25_TT33"};
};