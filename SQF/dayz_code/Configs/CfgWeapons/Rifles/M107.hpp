class m107;
class m107_DZ: m107 {
	displayname = $STR_DZ_WPN_M107_NAME;
	descriptionShort = $STR_DZ_WPN_M107_DESC;
	scope = public;
	type = WeaponSlotPrimary;
	canlock = 0;
	magazines[] = {"10Rnd_127x99_m107"};
	begin1[] = {"ca\sounds\weapons\rifles\m107",2.51189,1,2000};
	soundBegin[] = {"begin1",1};	
};

class m107_SKN : m107_DZ {};