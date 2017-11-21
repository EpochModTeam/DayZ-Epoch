// EPOCH CONFIG VARIABLES //

// To change a variable copy paste it in the mission init.sqf below the #include line.
// Standard DayZ variables are found in dayz_code\init\variables.sqf.

dayz_knifeDulling = false; // Enable knife dulling. Knives need to be sharpened after so many uses.
dayz_matchboxCount = false; // Enable match stick count. After five uses matches run out and must be replaced.
dayz_toolBreaking = false; //Sledgehammer, crowbar and pickaxe have a chance to break when used.
dayz_waterBottleBreaking = false; // Water bottles have a chance to break when boiling and require duct tape to fix
dayz_tameDogs = false; // Allow taming dogs with raw meat. Note dog behavior is experimental and buggy.
dayz_townGenerator = false; // Spawn vanilla map junk instead of Epoch DynamicDebris. Currently only compatible with Chernarus. Also enables comfrey plant spawner which negatively impacts performance.
dayz_townGeneratorBlackList = []; // If townGenerator is enabled it will not spawn junk within 150m of these positions. Example for Chernarus traders: [[4053,11668,0],[11463,11349,0],[6344,7806,0],[1606,7803,0],[12944,12766,0],[5075,9733,0],[12060,12638,0]]
DZE_TempVars = [7, 15, 4, 4, 2, 6, 3, 2, 0.25, 0.75, 0.5]; //[vehicle, fire, building, moving, sun, heatpack, water, standing, rain, wind, night] water, standing, rain, wind and night factors have a negative impact on temperature. The greater they are the quicker the player gets cold.
DZE_WeatherVariables = [10, 20, 5, 10, 0, 0.2, 0, 0.7, 0, 0.6, 0, 8, 25, 30, 0, false]; //See DynamicWeatherEffects.sqf for info on these values.
DZE_TwoPrimaries = 2; // 0 do not allow primary weapon on back. 1 allow primary weapon on back, but not when holding a primary weapon in hand. 2 allow player to hold two primary weapons, one on back and one in their hands.
DZE_AntiWallLimit = 3; // Number of activations before player_antiWall kills player for glitching attempt. Lower is stricter, but may result in false positives.
DZE_DamageBeforeMaint = 0.09; // Min damage built items must have before they can be maintained
DZE_NameTags = 0; // Name displays when looking at player up close  0 = Off, 1= On, 2 = Player choice
DZE_ForceNameTagsInTrader = false; // Force name display when looking at player up close in traders. Overrides player choice.
DZE_HumanityTargetDistance = 25; // Distance to show name tags (red for bandit, blue for hero, green for friend)
DZE_HeartBeat = false; // Enable heartbeat sound when looking at bandit (<= -3000 humanity) up close
DZE_HeliLift = true; // Enable Epoch heli lift system
DZE_RestrictSkins = []; // Clothes that players are not allowed to wear. i.e. ["Skin_GUE_Soldier_CO_DZ","Skin_GUE_Soldier_2_DZ"] etc.
DZE_UI = "vanilla"; //"vanilla","epoch","dark"  UI status icons style. Dark accommodates color blind people.
DZE_VanillaUICombatIcon = true; //Display or hide combat UI icon if using DZE_UI = "vanilla"; otherwise it has no affect.
timezoneswitch = 0; // Changes murderMenu times with this offset in hours.
DZE_NoVehicleExplosions = false; //Disable vehicle explosions to prevent damage to objects by ramming. Doesn't work with amphibious pook which should not be used due to FPS issues.
DZE_SafeZoneNoBuildItems = []; // Array of object class names not allowed to be built near the zones in DZE_SafeZonePosArray (see mission\init.sqf). Can be nested arrays for custom distances. i.e ["VaultStorageLocked","LockboxStorageLocked",["Plastic_Pole_EP1_DZ",1300]] etc.
DZE_SafeZoneNoBuildDistance = 150; // Distance from zones in DZE_SafeZonePosArray (see mission\init.sqf) to disallow building near.
DZE_NoBuildNear = []; //Array of object class names that are blacklisted to build near. i.e ["Land_Mil_ControlTower","Land_SS_hangar"] etc.
DZE_NoBuildNearDistance = 150; // Distance from blacklisted objects to disallow building near.
DZE_BuildHeightLimit = 0; // 0 = No building height limit | >0 = Height limit in meters | Changing this to 30 would limit the maximum built height to 30 meters.
DZE_GodModeBaseExclude = []; //Array of object class names excluded from the god mode bases feature
DZE_salvageLocked = true; //Enable or disable salvaging of locked vehicles, useful for stopping griefing on locked vehicles.
DZE_DisabledChannels = [(localize "str_channel_side"),(localize "str_channel_global"),(localize "str_channel_command")]; //List of disabled voice channels. Other channels are: "str_channel_group","str_channel_direct","str_channel_vehicle"
DZE_NutritionDivisor = [1, 1, 1, 1]; //array of DIVISORS that regulate the rate of [calories, thirst, hunger, temperature] use when "working" (keep in mind that temperature raises with actions) - min values 0.1 - Larger values slow the effect, smaller values accelerate it
DZE_ZombieSpeed = [0,0]; //Default agro speed is 6 per zombie config, set array elements 0 and 1 the same for non-variable speed, set to 0 to disable. array format = [min, max];  Ex: [2, 6]; results in a range of speed between 2 and 6 (2 is the old DZE_slowZombies hard-coded speed)

// Death Messages
DZE_DeathMsgChat = "none"; //"none","global","side","system" Display death messages in selected chat channel.
DZE_DeathMsgDynamicText = false; // Display death messages as dynamicText in the top left with weapon icons.
DZE_DeathMsgRolling = false; // Display death messages as rolling messages in bottom center of screen.
DZE_DeathScreen = true; // True=Use Epoch death screen (Trade city obituaries have been amended) False=Use DayZ death screen (You are dead)

// Dynamic Vehicles
DynamicVehicleDamageLow = 0; // Min damage random vehicles can spawn with
DynamicVehicleDamageHigh = 100; // Max damage random vehicles can spawn with
DynamicVehicleFuelLow = 0; // Min fuel random vehicles can spawn with
DynamicVehicleFuelHigh = 100; // Max fuel random vehicles can spawn with
MaxAmmoBoxes = 3; // Max number of random Supply_Crate_DZE filled with vehicle ammo to spawn around the map
MaxMineVeins = 50; // Max number of random mine veins to spawn around the map

// HALO Jump
DZE_HaloAltitudeMeter = false; // Display altitude and speed on screen while in halo jump.
DZE_HaloOpenChuteHeight = 180; // Automatically open chute at specified height. Set to -1 to disable this feature.
DZE_HaloSpawnHeight = 2000; // This is the altitude fresh spawn players start at when HALO spawn is enabled.
DZE_HaloJump = true; // Enable halo jumping out of air vehicles above 400m

// Trader Menu
DZE_ConfigTrader = true; // Use config files for traders instead of database. Loads faster and uses less network traffic. False enables database traders with legacy trader menu.
DZE_serverLogTrades = true; // Log trades to server RPT (sent with publicVariableServer on every trade)
DZE_GemOccurance = [["ItemTopaz",10], ["ItemObsidian",8], ["ItemSapphire",6], ["ItemAmethyst",4], ["ItemEmerald",3], ["ItemCitrine",2], ["ItemRuby",1]]; //Sets how rare each gem is in the order shown when mining (whole numbers only)
DZE_GemWorthArray = [["ItemTopaz",15000], ["ItemObsidian",20000], ["ItemSapphire",25000], ["ItemAmethyst",30000], ["ItemEmerald",35000], ["ItemCitrine",40000], ["ItemRuby",45000]]; // Array of gem prices, only works with config traders. Set DZE_GemWorthArray=[]; to disable return change in gems.
DZE_SaleRequiresKey = false; // Require the player has the key for a vehicle in order to sell it. The key can be in the player's toolbelt, backpack, or the vehicle's inventory.
DZE_keepVehicleKey = false; // Keep the vehicle key when the vehicle is sold? (Useful on servers with the key changer mod)
DZE_TRADER_SPAWNMODE = false; // Vehicles purchased at traders will be parachuted in
Z_VehicleDistance = 40; // Max distance a vehicle can be sold or accessed from at a trader.
Z_AllowTakingMoneyFromBackpack = true; // Allow traders to take money from backpacks when buying with default currency.
Z_AllowTakingMoneyFromVehicle = true; // Allow traders to take money from vehicles when buying with default currency.
Z_SingleCurrency = false; // Does your server use a single currency system?
CurrencyName = "Coins"; // If using single currency this is the currency display name.
Z_moneyVariable = "cashMoney"; // If using single currency this is the variable name used to store player wealth.
Z_bankVariable = "moneySpecial"; // If using single currency this is the variable name used to store object bank wealth.
Z_globalVariable = "GlobalMoney"; // If using single currency this is the variable name used to store coins globally.
DZE_MoneyStorageClasses = []; // If using single currency this is an array of object classes players can store coins in.

// Plot Management and Plot for Life
DZE_permanentPlot = true; // Plot ownership saves after death. Enables Plot for Life by @RimBlock and Plot Management by @DevZupa.
DZE_plotManagementMustBeClose = false; //Players must be within 10m of pole to be added as a plot friend.
DZE_PlotManagementAdmins = []; //Array of admin PlayerUIDs. UIDs in this list are able to access every pole's management menu and delete or build any buildable with a pole nearby.
DZE_MaxPlotFriends = 10; //Max friends allowed on a plot. There is no character limit in the inventory field of the database, but lower values limit the max global setVariable size to improve performance.
DZE_maintainCurrencyRate = 100; //The currency rate of what maintaining an item will be, for instance: at 100, 10 items will have a worth of 1000 (1 10oz gold or 1k coins) see actions/maintain_area.sqf for more examples.
DZE_limitPlots = false; // Limit the amount of plot poles per person to 1, UIDS in the DZE_PlotManagementAdmins array are exempt.
DZE_isRemovable = ["Plastic_Pole_EP1_DZ"]; //Items that can be removed with a crowbar with no ownership or access required. To forbid base take overs remove plot pole from this list and add it to DZE_restrictRemoval. It is not necessary to add wrecks or items that inherit from 'BuiltItems' to this list.
DZE_restrictRemoval = ["Fence_corrugated_DZ","M240Nest_DZ","ParkBench_DZ","FireBarrel_DZ","Scaffolding_DZ","CanvasHut_DZ","LightPole_DZ","DeerStand_DZ","MetalGate_DZ","StickFence_DZ"]; //Items that can be removed with a crowbar only with proper ownership or access. It is not necessary to add doors, storage or items that inherit from 'ModularItems' to this list. Items that inherit from 'BuiltItems' can be added to this list if desired.

// Snap Build and Build Vectors
DZE_modularBuild = true; // Enable Snap Building by @raymix and Build Vectors by @strikerforce.
DZE_snapExtraRange = 0; // Increase the default range from which objects can snap by this many meters.
DZE_noRotate = []; // List of objects (magazine classnames) that cannot be rotated. Example: ["ItemVault","ItemTent","ItemDomeTent","ItemDesertTent"];
DZE_vectorDegrees = [0.01, 0.1, 1, 5, 15, 45, 90]; // Degree positions players are able to rotate buildables with using the build vectors action menu.
DZE_curDegree = 45; // Starting rotation angle. Prefer any value in the array above.
DZE_dirWithDegrees = true; // When rotating objects with Q&E, use the custom degrees.
DZE_buildMaxMoveDistance = 10; // Max distance player can walk from start position when building. Anything >= the differnce between DZE_PlotPole values is not recommended (allows walking into other plots).
DZE_buildMaxHeightDistance = 10; // Max distance player can raise or lower object from start position when building.

DZE_modularConfig = [];
/*
	Array of classnames with magazine based loot to be refunded on deconstruction of modular built items that do not typically refund.

	For example:
	DZE_modularConfig = [
		["CinderWall_DZ", [["CinderBlocks",7],["MortarBucket",2]]],
		["CinderWallDoor_DZ", [["CinderBlocks",7],["MortarBucket",2],["ItemTankTrap",3],["ItemPole",[1,3]]]]
	];

	This would refund 7 cinder blocks and 2 mortar for "CinderWall_DZ"
	For "CinderWallDoor_DZ" you would get 7 cinder blocks, 2 mortar, 3 tank traps and a random number of poles between 1 and 3.
	The refund amount can be an array where the first param is the minimum and the second is the maximum, it will refund a random amount between them.
*/

// Door Management
DZE_doorManagement = true; // Enable Door Management by @DevZupa. 
DZE_doorManagementMustBeClose = false; //Players must be within 10m of door to be added as a door friend.
DZE_doorManagementAdmins = []; //Array of admin PlayerUIDs. UIDs in this list are able to access every door's management menu and open it.
DZE_doorManagementAllowManualCode = true; //Allow unlocking doors by manually entering the combination. Setting false requires the use of eye scan for all doors.
DZE_doorManagementMaxFriends = 10; //Max friends allowed on a door. There is no character limit in the inventory field of the database, but lower values limit the max global setVariable size to improve performance.
DZE_doorManagementHarderPenalty = true; //Enforce an exponential wait on attempts between unlocking a door from a failed code.

// Group System
dayz_groupSystem = false; // Enable group system
dayz_markGroup = 1; // Players can see their group members on the map 0=never, 1=always, 2=With GPS only
dayz_markSelf = 0; // Players can see their own position on the map 0=never, 1=always, 2=With GPS only
dayz_markBody = 0; // Players can see their corpse position on the map 0=never, 1=always, 2=With GPS only
dayz_requireRadio = false; // Require players to have a radio on their toolbelt to create a group, be in a group and receive invites.

/* 
	Developers:
	
	This file's purpose is to slim down init.sqf to only the map specific and most frequently changed variables.
	It cuts down on the amount of if(isNil)then{}; statements in variables.sqf and makes the mission smaller.
	
	Variables that are map specific or frequently changed should be included in init.sqf by default
	with a corresponding if(isNil)then{}; in variables.sqf.
*/
