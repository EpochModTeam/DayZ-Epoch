class PPK_DZ: M9
{
	scope = public;	
	displayName = $STR_DZ_WPN_PPK_NAME;
	descriptionShort = $STR_DZ_WPN_PPK_DESC;
	model = "\RH_de\RH_ppk.p3d";
	picture = "\RH_de\inv\ppk.paa";
	begin1[] = {"\RH_de\sound\ppk.wss",0.794328,1,700};
	soundBegin[] = {"begin1",1};
	drySound[] = {"\ca\Weapons\Data\Sound\T33_dry_v1",0.01,1,20};
	reloadMagazineSound[] = {"\RH_de\sound\ppk_reload.wss",0.1,1,20};
	magazines[] = {"7Rnd_9x17_PPK"};
};