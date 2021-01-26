//Workaround for non reloadable magazine 8Rnd_AT5_BMP2

class AT5Launcher;
class AT5LauncherSingle: AT5Launcher
{
	magazines[] = {"8Rnd_AT5_BMP2","5Rnd_AT5_BRDM2"};
	reloadTime = 30;
};

class M240_veh;
class pook_M60_side: M240_veh {
	class manual;
	class close;
	class short;
	class medium;
	class far;
};
class pook_M60_side_DZ: pook_M60_side
{
	displayName = $STR_DZ_WPN_SIDE_M60_NAME;
	displayNameShort = $STR_DZ_WPN_SIDE_M60_NAME;
	magazines[] = {"pook_250Rnd_762x51","100Rnd_762x51_M240","200Rnd_762x51_M240","460Rnd_762x51_M240_ACR"};
	
	class manual: manual {
		displayName = $STR_DZ_WPN_SIDE_M60_NAME;
	};
	class close: close {
		displayName = $STR_DZ_WPN_SIDE_M60_NAME;
	};
	class short: short {
		displayName = $STR_DZ_WPN_SIDE_M60_NAME;
	};
	class medium: medium {
		displayName = $STR_DZ_WPN_SIDE_M60_NAME;
	};
	class far: far {
		displayName = $STR_DZ_WPN_SIDE_M60_NAME;
	};
};

class pook_M60_dual_DZ: pook_M60_side_DZ
{
	displayName = $STR_DZ_WPN_DUAL_M60_NAME;
	displayNameShort = $STR_DZ_WPN_DUAL_M60_NAME;
	magazines[] = {"pook_1300Rnd_762x51_M60"};
	
	class manual: manual {
		displayName = $STR_DZ_WPN_DUAL_M60_NAME;
	};
	class close: close {
		displayName = $STR_DZ_WPN_DUAL_M60_NAME;
	};
	class short: short {
		displayName = $STR_DZ_WPN_DUAL_M60_NAME;
	};
	class medium: medium {
		displayName = $STR_DZ_WPN_DUAL_M60_NAME;
	};
	class far: far {
		displayName = $STR_DZ_WPN_DUAL_M60_NAME;
	};	
};

class pook_M60_dual_m134_DZ: pook_M60_dual_DZ
{
	displayName = $STR_DZ_WPN_DUAL_M134_NAME;
	displayNameShort = $STR_DZ_WPN_DUAL_M134_NAME;
	magazines[] = {"2000Rnd_762x51_M134","4000Rnd_762x51_M134"};
	
	class manual: manual {
		displayName = $STR_DZ_WPN_DUAL_M134_NAME;
	};
	class close: close {
		displayName = $STR_DZ_WPN_DUAL_M134_NAME;
	};
	class short: short {
		displayName = $STR_DZ_WPN_DUAL_M134_NAME;
	};
	class medium: medium {
		displayName = $STR_DZ_WPN_DUAL_M134_NAME;
	};
	class far: far {
		displayName = $STR_DZ_WPN_DUAL_M134_NAME;
	};	
};