class AH6J_EP1_DZ: AH6_Base_EP1
{
	scope = public;
	side = 2;
	displayName = "AH6J_DZ";
	crew = "";
	typicalCargo[] = {};
	weapons[] = {"TwinM134","CMFlareLauncher"};
	magazines[] = {"4000Rnd_762x51_M134","60Rnd_CMFlareMagazine"};
	threat[] = {0.6,0.4,0.1};
	gunBeg[] = {"muzzle_1","muzzle_2"};
	gunEnd[] = {"chamber_1","chamber_2"};
	radarType = 0;
	class TransportMagazines {};
	class TransportWeapons {};
	class Turrets {};
	class AnimationSources
	{
		class Gatling_1
		{
			source = "revolving";
			weapon = "TwinM134";
		};
		class Gatling_2
		{
			source = "revolving";
			weapon = "TwinM134";
		};
	};
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"ca\air_e\ah6j\data\ah6_merge1_co.paa","ca\air_e\ah6j\data\default_co.paa"};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 3;
	transportMaxMagazines = 10;
	transportmaxbackpacks = 2;
};
class AH6J_EP1_DZE: AH6J_EP1_DZ
{
	scope = public;
	side = 2;
	displayName = "AH6J_DZE";
	magazines[] = {"60Rnd_CMFlareMagazine"};
};
class AH6X_DZ: AH6_Base_EP1 {
	displayname = $STR_VEH_NAME_AH6X;
	displaynameshort = $STR_EP1_DN_AH6X;
	audible = 6;
	enablemanualfire = 0;
	scope = public;
	side = 2;
	crew = "";
	typicalCargo[] = {};
	hiddenselections[] = {"camo1"};
	hiddenselectionstextures[] = {"ca\air_e\ah6j\data\ah6_merge1_co.paa"};
	icon = "\ca\air_e\data\UI\Icon_ah6x_CA.paa";
	model = "\ca\air_e\ah6j\ah6x";
	picture = "\ca\air_e\data\UI\Picture_ah6x_CA.paa";
	isuav = 0;
	radartype = 0;
	class TransportMagazines{};
	class TransportWeapons{};
	weapons[] = {};
	magazines[] = {};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 3;
	transportMaxMagazines = 10;
	transportmaxbackpacks = 2;
	fuelCapacity = 242;
	class Turrets {};
};