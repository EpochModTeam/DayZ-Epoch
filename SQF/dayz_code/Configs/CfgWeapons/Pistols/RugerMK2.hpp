class Ruger_MK2_DZ: Makarov
{
	scope = 2;
	displayName = $STR_DZ_WPN_RUGERMK2_NAME;
	descriptionShort = $STR_DZ_WPN_RUGERMK2_DESC;	
	model = "\RH_de\RH_mk2.p3d";
	picture = "\RH_de\inv\mk2.paa";
	begin1[] = {"\RH_de\sound\Mk2.wss",0.316228,1,200};
	soundBegin[] = {"begin1",1};
	drySound[] = {"\ca\Weapons\Data\Sound\T33_dry_v1",0.01,1,20};
	reloadMagazineSound[] = {"\RH_de\sound\mk2_reload.wss",0.031623,1,20};
	magazines[] = {"10Rnd_22lfB_RUGERMK2"};
};