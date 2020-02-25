class P38_DZ: M9
{
	scope = public;	
	displayName = $STR_DZ_WPN_P38_NAME;
	descriptionShort = $STR_DZ_WPN_P38_DESC;
	model = "\RH_de\RH_p38.p3d";
	picture = "\RH_de\inv\p38.paa";	
	begin1[] = {"\RH_de\sound\p38.wss",0.794328,1,700};
	soundBegin[] = {"begin1",1};
	drySound[] = {"\ca\Weapons\Data\Sound\T33_dry_v1",0.01,1,20};
	reloadMagazineSound[] = {"\RH_de\sound\p38_reload.wss",0.1,1,20};
	magazines[] = {"8Rnd_9x19_P38"};
};