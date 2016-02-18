class HMMWV_DZ: HMMWV_Base {
	accuracy = 0.32;
	displayname = $STR_VEH_NAME_HMMWV;
	maxspeed = 230;
	hasgunner = 0;
	hiddenselections[] = {"Camo1"};
	hiddenselectionstextures[] = {"\ca\wheeled\hmmwv\data\hmmwv_body_co.paa"};
	icon = "\Ca\wheeled\data\map_ico\icomap_hmwv_CA.paa";
	mapsize = 5;
	model = "ca\wheeled_E\HMMWV\HMMWV";
	picture = "\Ca\wheeled\data\ico\HMMWV_CA.paa";
	scope = 2;
	side = 2;
	crew = "";
	typicalCargo[] = {};
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	transportmaxbackpacks = 2;
	class Turrets {};
	class Damage {
		mat[] = {"ca\wheeled\hmmwv\data\hmmwv_details.rvmat", "Ca\wheeled\HMMWV\data\hmmwv_details_damage.rvmat", "Ca\wheeled\HMMWV\data\hmmwv_details_destruct.rvmat", "ca\wheeled\hmmwv\data\hmmwv_body.rvmat", "Ca\wheeled\HMMWV\data\hmmwv_body_damage.rvmat", "Ca\wheeled\HMMWV\data\hmmwv_body_destruct.rvmat", "ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat", "ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat", "ca\wheeled\data\hmmwv_clocks_destruct.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_Half_D.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_Half_D.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_in.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_in_Half_D.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_in_Half_D.rvmat"};
		tex[] = {};
	};
};