class BrowningHP_DZ: M9
{
	scope = 2;
	displayName = $STR_DZ_WPN_BROWNING_HP_NAME;
	descriptionShort = $STR_DZ_WPN_BROWNING_HP_DESC;
	model = "\RH_de\RH_browninghp.p3d";
	picture = "\RH_de\inv\browninghp.paa";	
	begin1[] = {"\RH_de\sound\browninghp.wss",0.794328,1,700};
	soundBegin[] = {"begin1",1};
	drySound[] = {"\ca\Weapons\Data\Sound\T33_dry_v1",0.01,1,20};
	reloadMagazineSound[] = {"\RH_de\sound\p226_reload.wss",0.1,1,20};
	magazines[] = {"13Rnd_9x19_BHP"};
};