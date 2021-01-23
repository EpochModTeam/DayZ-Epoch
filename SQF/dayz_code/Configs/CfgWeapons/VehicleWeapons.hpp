//Workaround for non reloadable magazine 8Rnd_AT5_BMP2

class AT5Launcher;
class AT5LauncherSingle: AT5Launcher
{
	magazines[] = {"8Rnd_AT5_BMP2","5Rnd_AT5_BRDM2"};
	reloadTime = 30;
};

class M240_veh;
class pook_M60_side: M240_veh
{
	magazines[] = {"pook_250Rnd_762x51","100Rnd_762x51_M240","200Rnd_762x51_M240","460Rnd_762x51_M240_ACR"};
};

class pook_M60_dual: pook_M60_side
{
	magazines[] = {"pook_1300Rnd_762x51_M60"};
};