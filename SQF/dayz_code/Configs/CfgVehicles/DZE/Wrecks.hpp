class UH60_NAVY_Wreck_DZ: SpawnableWreck {
	scope = public;
	class Armory {
		disabled = 1;
	};
	model = "\glt_bh_wreck\UH60_Crashed.p3d";
	displayName = "UH60 Wreck (NAVY)";
	vehicleClass = "Wrecks";
	destrType = "DestructNo";
	hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
	hiddenSelectionsTextures[] = {"\glt_bh_wreck\uh60_1_navy_co.paa", "\glt_bh_wreck\uh60_2_navy_co.paa", "\glt_bh_wreck\uh60_3_navy_co.paa", "\glt_bh_wreck\uh60_4_navy_co.paa"};
	typicalCargo[] = {};
	irTarget = "false";
	transportAmmo = 0;
	transportRepair = 0;
	transportFuel = 0;
	transportSoldier = 0;
	class Eventhandlers {};
};
class UH60_ARMY_Wreck_DZ: UH60_NAVY_Wreck_DZ {
	displayName = "UH60 Wreck (ARMY)";
	hiddenSelectionsTextures[] = {"\glt_bh_wreck\uh60_1_co.paa", "\glt_bh_wreck\uh60_2_co.paa", "\glt_bh_wreck\uh60_3_co.paa", "\glt_bh_wreck\uh60_4_co.paa"};
};
class UH60_NAVY_Wreck_burned_DZ: UH60_NAVY_Wreck_DZ {
	displayName = "UH60 Wreck burned (NAVY)";
	hiddenSelectionsTextures[] = {"\glt_bh_wreck_burned\uh60_1_navy_destr_co.paa", "\glt_bh_wreck_burned\uh60_2_navy_destr_co.paa", "\glt_bh_wreck_burned\uh60_3_navy_destr_co.paa", "\glt_bh_wreck_burned\uh60_4_navy_destr_co.paa"};
};
class UH60_ARMY_Wreck_burned_DZ: UH60_NAVY_Wreck_DZ {
	displayName = "UH60 Wreck burned (ARMY)";
	hiddenSelectionsTextures[] = {"\glt_bh_wreck_burned\uh60_1_destr_co.paa", "\glt_bh_wreck_burned\uh60_2_destr_co.paa", "\glt_bh_wreck_burned\uh60_3_destr_co.paa", "\glt_bh_wreck_burned\uh60_4_destr_co.paa"};
};