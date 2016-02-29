class AH6X_DZ_Base: AH6_Base_EP1
{
	class Helicopter: Air
	{
		class NewTurret;
		class Turrets {class MainTurret;};
		class HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
	};
};

class AH6X_DZ: AH6_Base_EP1
{
	displayname = $STR_VEH_NAME_AH6X;
	displaynameshort = $STR_EP1_DN_AH6X;
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
	transportMaxMagazines = 30;
	transportmaxbackpacks = 2;
	class Turrets {};
};
