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
	scope = public;
	model = "\z\addons\dayz_communityassets\crashsite\mi8\mi8_ru.p3d";
	lootParams[] = {{0.6, -4.5, 0}, 7, 2.5, 5, 7};
};

class CrashSite_UN : CrashSite_RU
{
	model = "\z\addons\dayz_communityassets\crashsite\mi8\mi8_un.p3d";
};

class CrashSite_US : CrashSite
{
	scope = public;
	model = "\ca\air2\uh1y\uh1y_crashed.p3d";
	hiddenSelections[] = {"zasleh"};
	smoke[] = {-0.8,-2.3,2};
	lootParams[] = {{-1, -3.5, 0}, 0, 1.8, 3.5, 7};
};

class CrashSite_EU : CrashSite
{
	scope = public;
	model = "\z\addons\dayz_communityassets\crashsite\hc3\hc3.p3d";
	lootParams[] = {{-0.4, -0.5, 0}, 4, 2.5, 7.5, 7};
};