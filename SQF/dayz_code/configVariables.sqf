// EPOCH CONFIG VARIABLES //

// To change a variable copy it to your mission init.sqf in the Epoch Config Variables section
// Standard DayZ variables are found in dayz_code\init\variables.sqf

dayz_knifeDulling = false; // Enable knife dulling. Knives need to be sharpened after so many uses.
dayz_matchboxCount = false; // Enable match stick count. After five uses matches run out and must be replaced.
dayz_toolBreaking = false; //Sledgehammer, crowbar and pickaxe have a chance to break when used.
dayz_waterBottleBreaking = false; // Water bottles have a chance to break when boiling and require duct tape to fix
dayz_sellDistance_vehicle = 10; // Max distance players can sell land vehicles from at traders
dayz_sellDistance_boat = 30; // Max distance players can sell boats from at traders
dayz_sellDistance_air = 40; // Max distance players can sell air vehicles from at traders
dayz_tameDogs = false; // Allow taming dogs with raw meat
dayz_townGenerator = false; // Spawn vanilla map junk in addition to Epoch DynamicDebris. Only works on Chernarus.
dayz_townGeneratorBlackList = [[4053,11668,0],[11463,11349,0],[6344,7806,0],[1606,7803,0],[12944,12766,0],[5075,9733,0],[12060,12638,0]]; // Town generator will not spawn junk within 150m of these positions.
DayZ_UseSteamID = true; // Use getPlayerUID instead of getPlayerUIDOld

DynamicVehicleDamageLow = 0; // Min damage random vehicles can spawn with
DynamicVehicleDamageHigh = 100; // Max damage random vehicles can spawn with
DynamicVehicleFuelLow = 0; // Min fuel random vehicles can spawn with
DynamicVehicleFuelHigh = 100; // Max fuel random vehicles can spawn with

DZE_TwoPrimaries = 2; // 0 do not allow primary weapon on back. 1 allow primary weapon on back, but not when holding a primary weapon in hand. 2 (default) allow player to hold two primary weapons, one on back and one in their hands
DZE_AntiWallLimit = 3; // Number of activations before player_antiWall kills player for glitching attempt. Lower is stricter, but may result in false positives.
DZE_DamageBeforeMaint = 0.09; // Minimum damage built items must have before they can be maintained
DZE_DeathMsgChat = "none"; //"none","global","side","system" Display death messages in selected chat channel.
DZE_DeathMsgDynamicText = false; // Display death messages as dynamicText in the top left with weapon icons.
DZE_DeathMsgCutText = false; // Display death messages as cutText
DZE_DeathScreen = true; // True=Use Epoch death screen (Trade city obituaries have been amended) False=Use DayZ death screen (You are dead)
DZE_HaloJump = true; // Enable halo jumping out of air vehicles above 400m
DZE_modularBuild = true; // Enable Snap building by @raymix
DZE_snapExtraRange = 0; // Increase the default range from which objects can snap by this many meters.
DZE_NameTags = 1; // Name displays when looking at player up close  0 = Off, 1= On, 2 = Player choice
DZE_ForceNameTagsInTrader = false; // Force name display when looking at player up close in traders. Overrides player choice.
DZE_HumanityTargetDistance = 25; // Distance to show name tags (red for bandit, blue for hero, green for friend)
DZE_HeartBeat = false; // Enable heartbeat sound when looking at bandit (<= -3000 humanity) up close
DZE_HeliLift = true; // Enable Epoch heli lift system
DZE_R3F_WEIGHT = false; // Enable R3F weight. Players carrying too much will be overburdened and knocked out.
DZE_RestrictSkins = []; // Clothes that players are not allowed to wear. i.e. ["Skin_GUE_Soldier_CO_DZ","Skin_GUE_Soldier_2_DZ"] etc.
DZE_TRADER_SPAWNMODE = false; // Vehicles purchased at traders will be parachuted in
DZE_UI = "vanilla"; //"vanilla","epoch","dark"  UI status icons style. Dark accommodates color blind people.
MaxAmmoBoxes = 3; // Max number of random Supply_Crate_DZE to spawn around the map
MaxMineVeins = 50; // Max number of random mine veins to spawn around the map
timezoneswitch = 0; // Changes murderMenu times with this offset in hours.
DZE_SafeZonePosArray = []; //Prevent players in safeZones from being killed if their vehicle is destroyed. Format is [[[3D POS] RADIUS],[[3D POS] RADIUS]]; Ex. DZE_SafeZonePosArray = [[[6325.6772,7807.7412,0],150],[[4063.4226,11664.19,0],150]];
DZE_GemOccurance = [["ItemTopaz",10], ["ItemObsidian",8], ["ItemSapphire",6], ["ItemAmethyst",4], ["ItemEmerald",3], ["ItemCitrine",2], ["ItemRuby",1]];; //Sets how rare each gem in the order shown when mining (whole numbers only)

/****** Advanced Trading Variables ***********/
DZE_advancedTrading = true; //Use advanced trading system. WARNING: set to false if you use database traders, you should use config-traders anyway!
DZE_GemWorthArray = [["ItemTopaz",15000], ["ItemObsidian",20000], ["ItemSapphire",25000], ["ItemAmethyst",30000], ["ItemEmerald",35000], ["ItemCitrine",40000], ["ItemRuby",45000]]; //array of gem prices, works only in advanced trading
Z_AT_FolderLocation = '\z\addons\dayz_code\actions\AdvancedTrading';
Z_VehicleDistance = 40; // Distance that a vehicle needs to be to see it's content or to sell it.
Z_SingleCurrency = false; // Does your server use a single currency system.
Z_AllowTakingMoneyFromBackpack = true; // When buying items with DEFAULT CURRENCY to any inventory. Do you allow the trader to take money from your backpack.
Z_AllowTakingMoneyFromVehicle = true; // When buying items with DEFAULT CURRENCY to any inventory. Do you allow the trader to take money from your vehicle.
Z_MoneyVariable = "cashMoney"; // If using a Single currency system, change this to whatever currency you are using.
/**********************************************/

/////////// plotManagement Variables ///////////
// see also: https://github.com/DevZupa/PlotManagement
DZE_plotManagement = true;
DZE_PlotManagementAdmins = []; //Array of admin PlayerUIDs enclosed in quotations, UIDs in this list are able to access every pole's management menu and delete or build any buildable with a pole nearby
DZE_MaxPlotFriends = 6; //Maximum number of friends allowed on a plot pole. (default 6)
// see also: https://github.com/RimBlock/Epoch/tree/master/A%20Plot%20for%20Life
DZE_plotforLife = false; // NOT IMPLEMENTED. Set always to false - value is used by plotManagement
////////////////////////////////////////////////

/* 
	Developers:
	
	This file's purpose is to slim down init.sqf to only the map specific and most frequently changed variables.
	It cuts down on the amount of if(isNil)then{}; statements in variables.sqf and makes the mission smaller.
	
	Variables that are map specific or frequently changed should be included in init.sqf by default
	with a corresponding if(isNil)then{}; in variables.sqf.
*/