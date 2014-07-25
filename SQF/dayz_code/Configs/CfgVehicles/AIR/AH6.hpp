class AH6_Base_EP1;
class AH6J_EP1_DZ: AH6_Base_EP1
{
	scope = 2;
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
	scope = 2;
	side = 2;
	displayName = "AH6J_DZE";
	magazines[] = {};
};
class AH6X_DZ: AH6_Base_EP1 {
	displayname = "AH6X Little Bird";
	displaynameshort = "AH6X_DZ";
	audible = 6;
	enablemanualfire = 0;
	scope = 2;
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
class MH6J_DZ: AH6_Base_EP1 {
	scope = 2;
	side = 2;
	crew = "";
	enablemanualfire = 0;
	typicalCargo[] = {};
	displayname = "MH-6J Little Bird";
	displaynameshort = "MH6J_DZ";
	hiddenselections[] = {"camo1", "camo2"};
	transportsoldier = 5;
	hiddenselectionstextures[] = {"ca\air_e\ah6j\data\ah6_merge1_co.paa", "ca\air_e\ah6j\data\default_co.paa"};
	icon = "\ca\air_e\data\UI\Icon_mh6j_CA.paa";
	model = "\ca\air_e\ah6j\mh6j";
	picture = "\ca\air_e\data\UI\Picture_mh6j_CA.paa";
	radartype = 0;
	class TransportMagazines{};
	class TransportWeapons{};
	weapons[] = {};
	magazines[] = {};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 3;
	transportMaxMagazines = 20;
	transportmaxbackpacks = 5;
	class Turrets {};
};
