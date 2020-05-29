/*
lootParams defines how loot items are placed around the crash site.
http://i.imgur.com/CYj2ooF.png

0		offset		center in local space
1		angle		rotation in degrees
2		x min		minimum distance on the x axis
3		z min		minimum distance on the z axis
4		max			maximum distance
*/

class CrashSite : House
{
	icon = "ca\Misc_E\data\Icons\Icon_uh60_wreck_CA";
	mapSize = 15;
	vehicleClass = "Wrecks";
	
	class EventHandlers
	{
		init = "if (!isDedicated) then { (_this select 0) execVM 'z\addons\dayz_code\compile\crashsite_fire.sqf' };";
	};
};

class CrashSite_RU : CrashSite
{
	scope = 2;
	displayname = $STR_EPOCH_CRASHSITE1;
	model = "\z\addons\dayz_communityassets\crashsite\mi8\mi8_ru.p3d";
	lootParams[] = {{0.6, -4.5, 0}, 7, 2.5, 5, 7};
};

class CrashSite_UN : CrashSite_RU
{
	displayname = $STR_EPOCH_CRASHSITE2;
	model = "\z\addons\dayz_communityassets\crashsite\mi8\mi8_un.p3d";
};

class CrashSite_US : CrashSite
{
	scope = 2;
	displayname = $STR_EPOCH_CRASHSITE3;
	model = "\ca\air2\uh1y\uh1y_crashed.p3d";
	hiddenSelections[] = {"zasleh"};
	smoke[] = {-0.8,-2.3,2};
	lootParams[] = {{-1, -3.5, 0}, 0, 1.8, 3.5, 7};
};

class CrashSite_EU : CrashSite
{
	scope = 2;
	displayname = $STR_EPOCH_CRASHSITE4;
	model = "\z\addons\dayz_communityassets\crashsite\hc3\hc3.p3d";
	lootParams[] = {{-0.4, -0.5, 0}, 4, 2.5, 7.5, 7};
};

//Old crash site wrecks from the glt_bh_wreck addon

class UH60_NAVY_Wreck_DZ: SpawnableWreck {
	scope = 2;
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