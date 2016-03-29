// EPOCH CONFIG VARIABLES //

// To change a variable copy it to your mission init.sqf in the Epoch Config Variables section
// Standard DayZ variables are found in dayz_code\init\variables.sqf

dayz_knifeDulling = false; // Enable knife dulling. Knives need to be sharpened after so many uses.
dayz_waterBottleBreaking = false; // Water bottles have a chance to break when boiling and require duct tape to fix
dayz_sellDistance_vehicle = 10; // Max distance players can sell land vehicles from at traders
dayz_sellDistance_boat = 30; // Max distance players can sell boats from at traders
dayz_sellDistance_air = 40; // Max distance players can sell air vehicles from at traders
dayz_tameDogs = true; // Allow taming dogs with raw meat

DynamicVehicleDamageLow = 0; // Min damage random vehicles can spawn with
DynamicVehicleDamageHigh = 100; // Max damage random vehicles can spawn with
DynamicVehicleFuelLow = 0; // Min fuel random vehicles can spawn with
DynamicVehicleFuelHigh = 100; // Max fuel random vehicles can spawn with

DZE_AllowCargoCheck = false; // Allow viewing how much space remains in vehicles, safes, tents, etc.
DZE_AntiWallLimit = 3; // Number of activations before player_antiWall kills player for glitching attempt. Lower is stricter, but may result in false positives.
DZE_DeathMsgGlobal = false; // Display death messages in global chat
DZE_DeathMsgSide = false; // Display death messages in side chat
DZE_DeathMsgTitleText = false; // Display death messages as title text
DZE_HaloJump = true; // Enable halo jumping out of air vehicles above 400m
DZE_NameTags = 1; // Name displays when looking at player up close  0 = Off, 1= On, 2 = Player choice
DZE_ForceNameTagsInTrader = false; // Force name display when looking at player up close in traders. Overrides player choice.
DZE_HumanityTargetDistance = 25; // Distance to show name tags (red for bandit, blue for hero, green for friend)
DZE_HeliLift = true; // Enable Epoch heli lift system
DZE_PlayerZed = false; // Enable spawning as a player zombie when players die with infected status
DZE_R3F_WEIGHT = false; // Enable R3F weight. Players carrying too much will be overburdened and knocked out.
MaxAmmoBoxes = 3; // Max number of random Supply_Crate_DZE to spawn around the map
MaxMineVeins = 50; // Max number of random mine veins to spawn around the map
timezoneswitch = 0; // Changes murderMenu times with this offset in hours.




/* 
	Developers:
	
	This file's purpose is to slim down init.sqf to only the map specific and most frequently changed variables.
	It cuts down on the amount of if(isNil)then{}; statements in variables.sqf and makes the mission smaller.
	
	Variables that are map specific or frequently changed should be included in init.sqf by default
	with a corresponding if(isNil)then{}; in variables.sqf.
*/