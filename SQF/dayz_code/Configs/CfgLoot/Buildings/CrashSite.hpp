class CrashSite : Default
{
	zombieChance = 1;
	minRoaming = 4;
	maxRoaming = 8;
	zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
};

class CrashSite_RU : CrashSite {
	zombieClass[] = {"z_soldier_ru_pilot","z_soldier_ru_crewman","z_soldier_ru_pilot","z_soldier_ru_crewman","z_soldier_ru_specialforces","z_soldier_ru_soldier","z_soldier_ru_soldier_heavy"};
};
class CrashSite_US : CrashSite {
	zombieClass[] = {"z_soldier_usmc_pilot","z_soldier_usmc_crew","z_soldier_usmc_mg","z_soldier_usmc_soldier_heavy","z_soldier_usmc_soldier"};
};
class CrashSite_EU : CrashSite {
	zombieClass[] = {"z_soldier_cz_pilot","z_soldier_cz_soldier_heavy","z_soldier_cz_spec"};
};
class CrashSite_UN : CrashSite {
	zombieClass[] = {"z_soldier_cdf_crew","z_soldier_pilot","z_soldier_cdf_pilot","z_soldier_un_soldier_heavy","z_soldier_heavy"};
};
