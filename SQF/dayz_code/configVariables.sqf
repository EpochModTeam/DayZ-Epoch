// EPOCH CONFIG VARIABLES //

// To change a variable copy paste it in the mission init.sqf below the #include line.
// Standard DayZ variables are found in dayz_code\init\variables.sqf.

//Server
if (isServer) then {
	DynamicVehicleDamageLow = 0; // Min damage random vehicles can spawn with
	DynamicVehicleDamageHigh = 100; // Max damage random vehicles can spawn with
	DynamicVehicleFuelLow = 0; // Min fuel random vehicles can spawn with
	DynamicVehicleFuelHigh = 100; // Max fuel random vehicles can spawn with
	MaxAmmoBoxes = 3; // Max number of random Supply_Crate_DZE filled with vehicle ammo to spawn around the map
	MaxMineVeins = 50; // Max number of random mine veins to spawn around the map
	DZE_TRADER_SPAWNMODE = false; // Vehicles purchased at traders will be parachuted in
	EpochEvents = []; // [year,month,day of month, minutes,name of file - .sqf] If minutes is set to -1, the event will run once immediately after server start.
	MaxDynamicDebris = 100; // Max number of random road blocks to spawn around the map
	MaxVehicleLimit = 50; // Max number of random vehicles to spawn around the map
	spawnArea = 1400; // Distance around markers to find a safe spawn position
	spawnShoremode = 1; // Random spawn locations  1 = on shores, 0 = inland
	dayz_POIs = false; //Enable POI's
	dayz_enableGhosting = false;
	dayz_ghostTimer = 120;

	// ZSC
	Z_globalBankingTraders = false; // Enable banking NPCs at trader cities.
};

// Client
if (!isDedicated) then {
	DZE_defaultSkin = [["Survivor2_DZ","Rocker1_DZ","Rocker2_DZ","Rocker3_DZ","Rocker4_DZ","Priest_DZ","Functionary1_EP1_DZ","Doctor_DZ","Assistant_DZ","Worker1_DZ","Worker3_DZ","Worker4_DZ","TK_CIV_Takistani01_EP1_DZ","TK_CIV_Takistani03_EP1_DZ","TK_CIV_Takistani04_EP1_DZ","TK_CIV_Takistani06_EP1_DZ","Firefighter1_DZ","Firefighter2_DZ","Firefighter3_DZ","Firefighter4_DZ","Firefighter5_DZ","Firefighter_Officer1_DZ","Firefighter_Officer2_DZ","Postman1_DZ","Postman2_DZ","Postman3_DZ","Postman4_DZ","SchoolTeacher_DZ","Gardener_DZ","RU_Policeman2_DZ","Hunter_DZ","Civilian1_DZ","Civilian3_DZ","Civilian5_DZ","Civilian7_DZ","Civilian9_DZ","Civilian11_DZ","Civilian13_DZ","Prisoner1_DZ","Prisoner2_DZ","Prisoner3_DZ","Reporter_DZ","MafiaBoss_DZ","Dealer_DZ","BusinessMan_DZ"],["SurvivorW2_DZ","SurvivorWcombat_DZ","SurvivorWdesert_DZ","SurvivorWurban_DZ","SurvivorWpink_DZ","SurvivorW3_DZ"]]; // Default player skin for fresh spawns, selected randomly DZE_defaultSkin = [["Male skin1","Male skin2"],["Female skin1","Female skin2"]], comment out the whole line to disable this feature.
	dayz_tameDogs = false; // Allow taming dogs with raw meat. Note dog behavior is experimental and buggy.
	DZE_WarmClothes = []; //Array of warm clothes, type of player model must be added: E.g. ["MVD_Soldier_DZ","GUE_Soldier_2_DZ"];
	DZE_TempVars = [7, 15, 4, 4, 2, 6, 8, 3, 2, 0.25, 0.75, 0.5, 12, 33]; //[vehicle, fire, building, moving, sun, heatpack, warm clothes, water, standing, rain, wind, night, snow, shivering] water, standing, rain, wind and night factors have a negative impact on temperature. The greater they are the quicker the player gets cold. To disable shivering set it to 26.
	DZE_TwoPrimaries = 2; // 0 do not allow primary weapon on back. 1 allow primary weapon on back, but not when holding a primary weapon in hand. 2 allow player to hold two primary weapons, one on back and one in their hands.
	DZE_AntiWallLimit = 3; // Number of activations before player_antiWall kills player for glitching attempt. Lower is stricter, but may result in false positives.
	DZE_DamageBeforeMaint = 0.09; // Min damage built items must have before they can be maintained
	DZE_NameTags = 0; // Name displays when looking at player up close  0 = Off, 1= On, 2 = Player choice
	DZE_ForceNameTagsInTrader = false; // Force name display when looking at player up close in traders. Overrides player choice.
	DZE_HumanityTargetDistance = 25; // Distance to show name tags (red for bandit, blue for hero, green for friend)
	DZE_HeartBeat = false; // Enable heartbeat sound when looking at bandit (<= -3000 humanity) up close
	DZE_RestrictSkins = []; // Clothes that players are not allowed to wear. i.e. ["Skin_GUE_Soldier_CO_DZ","Skin_GUE_Soldier_2_DZ"] etc.
	DZE_VanillaUICombatIcon = true; //Display or hide combat UI icon if using DZE_UI = "vanilla"; otherwise it has no affect.
	timezoneswitch = 0; // Changes murderMenu times with this offset in hours.
	dayz_maxGlobalZeds = 1000; // Maximum allowed zeds on the map
	dayz_quickSwitch = false; //Enable quick weapon switch,
	dayz_paraSpawn = false; // Helo jump spawn
	DZE_SelfTransfuse = false; // Allow players to give themselves blood transfusions
	DZE_selfTransfuse_Values = [12000,15,120]; // [blood amount, infection chance, cool-down (seconds)]
	dayz_DamageMultiplier = 1; // Increases the damage to the player by zombie attacks
	dayz_infectiouswaterholes = true; //Enable infected waterholes
	dayz_randomMaxFuelAmount = 500; //Puts a random amount of fuel in all fuel stations.
	DZE_BackpackAntiTheft = false; // Prevents accessing backpack gear of non-friendly players in trader cities
	DZE_StaticConstructionCount = 0; // Number of animations required for building an object. Leaving set at zero will default to the construction count in the configs for each object.
	dayz_maxMaxWeaponHolders = 120; // Maximum number of loot piles that can spawn within 200 meters of a player.
	dayz_bleedingeffect = 2; //1 = blood on the ground (negatively impacts FPS), 2 = partical effect, 3 = both
	dayz_temperature_override = true; // Set to true to disable all temperature changes.
	dayz_nutritionValuesSystem = false; //true, Enables nutrition system, false, disables nutrition system.
	DZE_DisableVehicleUpgrade = []; // List of vehicles that cannot be upgraded with manuals E.g.: ["ArmoredSUV_PMC_DZE","LandRover_CZ_EP1_DZE"]

	// Build restrictions
	DZE_NoBuildNear = []; //Array of object class names that are blacklisted to build near. i.e ["Land_Mil_ControlTower","Land_SS_hangar"] etc.
	DZE_NoBuildNearDistance = 150; // Distance from blacklisted objects to disallow building near.
	DZE_BuildHeightLimit = 0; // 0 = No building height limit | >0 = Height limit in meters | Changing this to 30 would limit the maximum built height to 30 meters.
	DZE_requireplot = 1; // Players require a plot to build
	DZE_PlotPole = [30,45]; // Plot radius, minimum distance between plots
	DZE_BuildOnRoads = false; // Allow building on roads
	DZE_BuildingLimit = 150; // Maximum allowed objects per plot

	DZE_salvageLocked = true; //Enable or disable salvaging of locked vehicles, useful for stopping griefing on locked vehicles.
	DZE_DisabledChannels = [(localize "str_channel_side"),(localize "str_channel_global"),(localize "str_channel_command")]; //List of disabled voice channels. Other channels are: "str_channel_group","str_channel_direct","str_channel_vehicle"
	DZE_NutritionDivisor = [1, 1, 1, 1]; //array of DIVISORS that regulate the rate of [calories, thirst, hunger, temperature] use when "working" (keep in mind that temperature raises with actions) - min values 0.1 - Larger values slow the effect, smaller values accelerate it
	DZE_ZombieSpeed = [0,0]; //Default agro speed is 6 per zombie config, set array elements 0 and 1 the same for non-variable speed, set to 0 to disable. array format = [min, max];  Ex: [2, 6]; results in a range of speed between 2 and 6 (2 is the old DZE_slowZombies hard-coded speed)
	DZE_lockablesHarderPenalty = true; // Enforce an exponential wait on attempts between unlocking a safe/lockbox from a failed code.
	DZE_Hide_Body = true; //Enable hide dead bodies. Hiding a dead body removes the corpse marker from the map too. Default = true
	DZE_PVE_Mode = false; //Disable the PvP damage on the server. If DZE_BackpackAntiTheft = true, the backpack anti theft is active on the whole server. This is just a basic support for PVE Servers. Default = false

	// SafeZone
	DZE_SafeZoneNoBuildItems = []; // Array of object class names not allowed to be built near the zones in DZE_SafeZonePosArray (see mission\init.sqf). Can be nested arrays for custom distances. i.e ["VaultStorageLocked","LockboxStorageLocked",["Plastic_Pole_EP1_DZ",1300]] etc.
	DZE_SafeZoneNoBuildDistance = 150; // Distance from zones in DZE_SafeZonePosArray (see mission\init.sqf) to disallow building near.
	DZE_DeathScreen = true; // True=Use Epoch death screen (Trade city obituaries have been amended) False=Use DayZ death screen (You are dead)

	// HALO Jump
	DZE_HaloAltitudeMeter = false; // Display altitude and speed on screen while in halo jump.
	DZE_HaloOpenChuteHeight = 180; // Automatically open chute at specified height. Set to -1 to disable this feature.
	DZE_HaloSpawnHeight = 2000; // This is the altitude fresh spawn players start at when HALO spawn is enabled.
	DZE_HaloJump = true; // Enable halo jumping out of air vehicles above 400m

	// Trader Menu
	DZE_serverLogTrades = true; // Log trades to server RPT (sent with publicVariableServer on every trade)
	DZE_GemOccurance = [["ItemTopaz",10], ["ItemObsidian",8], ["ItemSapphire",6], ["ItemAmethyst",4], ["ItemEmerald",3], ["ItemCitrine",2], ["ItemRuby",1]]; //Sets how rare each gem is in the order shown when mining (whole numbers only)
	DZE_GemWorthArray = [["ItemTopaz",15000], ["ItemObsidian",20000], ["ItemSapphire",25000], ["ItemAmethyst",30000], ["ItemEmerald",35000], ["ItemCitrine",40000], ["ItemRuby",45000]]; // Array of gem prices, only works with config traders. Set DZE_GemWorthArray=[]; to disable return change in gems.
	DZE_SaleRequiresKey = false; // Require the player has the key for a vehicle in order to sell it. The key can be in the player's toolbelt, backpack, or the vehicle's inventory.
	DZE_keepVehicleKey = false; // Keep the vehicle key when the vehicle is sold? (Useful on servers with the key changer mod)
	Z_AllowTakingMoneyFromBackpack = true; // Allow traders to take money from backpacks when buying with default currency.
	Z_AllowTakingMoneyFromVehicle = true; // Allow traders to take money from vehicles when buying with default currency.

	// Plot Management and Plot for Life
	DZE_plotManagementMustBeClose = false; //Players must be within 10m of pole to be added as a plot friend.
	DZE_PlotManagementAdmins = []; //Array of admin PlayerUIDs. UIDs in this list are able to access every pole's management menu and delete or build any buildable with a pole nearby.
	DZE_MaxPlotFriends = 10; //Max friends allowed on a plot. There is no character limit in the inventory field of the database, but lower values limit the max global setVariable size to improve performance.
	DZE_maintainCurrencyRate = 100; //The currency rate of what maintaining an item will be, for instance: at 100, 10 items will have a worth of 1000 (1 10oz gold or 1k coins) see actions/maintain_area.sqf for more examples.
	DZE_limitPlots = 0; // Limit the amount of plot poles per person, Use 0 to disable. UIDS in the DZE_PlotManagementAdmins array are exempt.
	DZE_restrictRemoval = ["Fence_corrugated_DZ","M240Nest_DZ","ParkBench_DZ","FireBarrel_DZ","Scaffolding_DZ","CanvasHut_DZ","LightPole_DZ","DeerStand_DZ","MetalGate_DZ","StickFence_DZ"]; //Items that can be removed with a crowbar only with proper ownership or access. It is not necessary to add doors, storage or items that inherit from 'ModularItems' to this list. Items that inherit from 'BuiltItems' can be added to this list if desired.
	DZE_DisableUpgrade = []; //Array of buildables that are not allowed to be upgraded. For example: DZE_DisableUpgrade = ["WoodShack_DZ","StorageShed_DZ"];

	// Snap Build and Build Vectors
	DZE_modularBuild = true; // Enable Snap Building by @raymix and Build Vectors by @strikerforce.
	DZE_snapExtraRange = 0; // Increase the default range from which objects can snap by this many meters.
	DZE_noRotate = ["ItemWoodLadder","woodfence_foundation_kit","metalfence_foundation_kit","cook_tripod_kit","metal_drawbridge_kit","metal_drawbridge_kit_locked","storage_crate_kit"]; // List of objects (magazine classnames) that cannot be rotated. Example: ["ItemVault","ItemTent","ItemDomeTent","ItemDesertTent"];
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
	DZE_doorManagementMustBeClose = false; //Players must be within 10m of door to be added as a door friend.
	DZE_doorManagementAdmins = []; //Array of admin PlayerUIDs. UIDs in this list are able to access every door's management menu and open it.
	DZE_doorManagementAllowManualCode = true; //Allow unlocking doors by manually entering the combination. Setting false requires the use of eye scan for all doors.
	DZE_doorManagementMaxFriends = 10; //Max friends allowed on a door. There is no character limit in the inventory field of the database, but lower values limit the max global setVariable size to improve performance.
	DZE_doorManagementHarderPenalty = true; //Enforce an exponential wait on attempts between unlocking a door from a failed code.

	// Group System
	dayz_markGroup = 1; // Players can see their group members on the map 0=never, 1=always, 2=With GPS only
	dayz_markSelf = 0; // Players can see their own position on the map 0=never, 1=always, 2=With GPS only
	dayz_markBody = 0; // Players can see their corpse position on the map 0=never, 1=always, 2=With GPS only
	dayz_requireRadio = false; // Require players to have a radio on their toolbelt to create a group, be in a group and receive invites.

	// Humanity System
	DZE_Hero = 5000; // Defines the value at how much humanity the player is classed as a hero.
	DZE_Bandit = -5000; // Defines the value at how much humanity the player is classed as a bandit.

	// ZSC
	Z_showCurrencyUI = true; // Show the currency icon on the screen when Z_SingleCurrency is enabled.
	Z_showBankUI = true; // Show the banking icon on the screen when Z_globalBanking is enabled.
	ZSC_bankTraders = ["Functionary1_EP1"]; // Array of trader classnames that are available for banking (i.e Functionary1_EP1), do not use _DZ classes - they are used as player skins
	ZSC_limitOnBank = true; // Have a limit on the bank? (i.e true or false) limits the global banking to the number below.
	ZSC_bankObjects = [""]; // Array of objects that are available for banking i.e: ["Suitcase","Info_Board_EP1","Laptop_EP1","SatPhone"]
	ZSC_maxBankMoney = 500000; // Default limit for bank objects.
	ZSC_defaultStorageMultiplier = 200; // Default magazine count for bank objects that don't have storage slots i.e: ["Suitcase","Info_Board_EP1","Laptop_EP1","SatPhone"]
	ZSC_MaxMoneyInStorageMultiplier = 5000; // Multiplier for how much money a bank object can hold, example: 200 magazine slots in the object (or the default value above ^^) multiplied by the 5000 multiplier is 1 million coin storage. (200 * 5000 = 1,000,000 coins)
	ZSC_ZombieCoins = [false,[0,1000]]; // First value activate coins on zombies, second value from 0 - 1000 coins on each zombie. Coin for zombies are handled directly in check wallet.

	// Loot system
	dayz_toolBreaking = false; //Sledgehammer, crowbar and pickaxe have a chance to break when used.
	dayz_knifeDulling = false; // Enable knife dulling. Knives need to be sharpened after so many uses.
	dayz_matchboxCount = false; // Enable match stick count. After five uses matches run out and must be replaced.
	dayz_waterBottleBreaking = false; // Water bottles have a chance to break when boiling and require duct tape to fix

	// DZE_CLICK_ACTIONS
	//     This is where you register your right-click actions
	// FORMAT -- (no comma after last array entry)
	//     [_classname,_text,_execute,_condition],
	// PARAMETERS
	// _classname  : the name of the class to click on 
	//                 (example = "ItemBloodbag")
	// _text       : the text for the option that is displayed when right clicking on the item 
	//                 (example = "Self Transfuse")
	// _execute    : compiled code to execute when the option is selected 
	//                 (example = "execVM 'my\scripts\self_transfuse.sqf';")
	// _condition  : compiled code evaluated to determine whether or not the option is displayed
	//                 (example = "true")
	// EXAMPLE -- see below for some simple examples
	DZE_CLICK_ACTIONS = [
		["ItemTrashPaperMusic","Dance","systemChat('Press V to cancel movement');player playMoveNow (['ActsPercMstpSnonWnonDnon_DancingDuoIvan','ActsPercMstpSnonWnonDnon_DancingDuoStefan','ActsPercMstpSnonWnonDnon_DancingStefan'] call BIS_fnc_selectRandom);","true"]
	];

};

// Both
dayz_townGenerator = false; // Spawn vanilla map junk instead of Epoch DynamicDebris. Currently only compatible with Chernarus. Also enables comfrey plant spawner which negatively impacts performance.
dayz_townGeneratorBlackList = []; // If townGenerator is enabled it will not spawn junk within 150m of these positions. Example for Chernarus traders: [[4053,11668,0],[11463,11349,0],[6344,7806,0],[1606,7803,0],[12944,12766,0],[5075,9733,0],[12060,12638,0]]
DZE_HeliLift = true; // Enable Epoch heli lift system
DZE_GodModeBaseExclude = []; //Array of object class names excluded from the god mode bases feature
DZE_NoVehicleExplosions = false; //Disable vehicle explosions to prevent damage to objects by ramming. Doesn't work with amphibious pook which should not be used due to FPS issues.
DZE_SafeZoneZombieLoot = false;  // Enable spawning of Zombies and loot in positions listed in DZE_SafeZonePosArray?
dayz_ForcefullmoonNights = false; // Forces night time to be full moon.
infectedWaterHoles = []; //Needed for non-cherno maps.
DZE_GodModeBase = false; // Disables damage handler from base objects so they can't be destroyed.
dayz_spawnselection = 0; //(Chernarus only) Turn on spawn selection 0 = random only spawns, 1 = spawn choice based on limits
dayz_classicBloodBagSystem = false; // disable blood types system and use the single classic ItemBloodbag
dayz_enableFlies = true; // Enable flies on dead bodies (negatively impacts FPS).

// Death Messages
DZE_DeathMsgChat = "none"; //"none","global","side","system" Display death messages in selected chat channel.
DZE_DeathMsgDynamicText = false; // Display death messages as dynamicText in the top left with weapon icons.
DZE_DeathMsgRolling = false; // Display death messages as rolling messages in bottom center of screen.

// ZSC
Z_SingleCurrency = false; // Enable single currency system.
Z_globalBanking = false; // Enable global banking system.
Z_persistentMoney = false; // Enabling this stores currency to player_data instead of character_data. Currency transfers to a new character after death. For PVE servers only. Formerly called "GlobalMoney".
Z_VehicleDistance = 40; // Max distance a vehicle can be sold or accessed from at a trader.
CurrencyName = "Coins"; // If using single currency this is the currency display name.
DZE_MoneyStorageClasses = ["VaultStorage","VaultStorage2","VaultStorageLocked","VaultStorage2Locked","LockboxStorageLocked","LockboxStorage2Locked","LockboxStorage","LockboxStorage2","LockboxStorageWinterLocked","LockboxStorageWinter2Locked","LockboxStorageWinter","LockboxStorageWinter2","TallSafe","TallSafeLocked"]; // If using single currency this is an array of object classes players can store coins in. E.g.: ["GunRack_DZ","WoodCrate_DZ"]
ZSC_VehicleMoneyStorage = true; // Allow players to store money in vehicles. If vehicles are destroyed the money is also destroyed.

// Plot Management and Plot for Life
DZE_permanentPlot = true; // Plot ownership saves after death. Enables Plot for Life by @RimBlock and Plot Management by @DevZupa.
DZE_isRemovable = ["Plastic_Pole_EP1_DZ"]; //Items that can be removed with a crowbar with no ownership or access required. To forbid base take overs remove plot pole from this list and add it to DZE_restrictRemoval. It is not necessary to add wrecks or items that inherit from 'BuiltItems' to this list.

// Door Management
DZE_doorManagement = true; // Enable Door Management by @DevZupa.

// Group System
dayz_groupSystem = false; // Enable group system

// Weather
DZE_Weather = 2; // Options: 1 - Summer Static, 2 - Summer Dynamic, 3 - Winter Static, 4 - Winter Dynamic. If static is selected, the weather settings will be set at server startup and not change. Weather settings can be adjusted with array DZE_WeatherVariables.

// The settings in the array below may be adjusted as desired. The default settings are designed to maximize client and server performance.
// Having several features enabled at once might have adverse effects on client performance. For instance, you could have snowfall, ground fog, and breath fog threads all running at once.
DZE_WeatherVariables = [
	15, // Minimum time in minutes for the weather to change. (default value: 15).
	30, // Maximum time in minutes for the weather to change. (default value: 30).
	0, // Minimum fog intensity (0 = no fog, 1 = maximum fog). (default value: 0).
	.2, // Maximum fog intensity (0 = no fog, 1 = maximum fog). (default value: 0.8).
	0, // Minimum overcast intensity (0 = clear sky, 1 = completely overcast). (default value: 0). Note: Rain and snow will not occur when overcast is less than 0.70.
	.6, // Maximum overcast intensity (0 = clear sky, 1 = completely overcast). (default value: 1).
	0, // Minimum rain intensity (0 = no rain, 1 = maximum rain). Overcast needs to be at least 70% for it to rain.
	.6, // Maximum rain intensity (0 = no rain, 1 = maximum rain). Overcast needs to be at least 70% for it to rain.
	0, // Minimum wind strength (default value: 0).
	3, // Maximum wind strength (default value: 5).
	.25, // Probability for wind to change when weather changes. (default value: .25).
	1, // Minimum snow intensity (0 = no snow, 1 = maximum snow). Overcast needs to be at least 75% for it to snow.
	1, // Maximum snow intensity (0 = no snow, 1 = maximum snow). Overcast needs to be at least 75% for it to snow.
	.2,// Probability for a blizzard to occur when it is snowing. (0 = no blizzards, 1 = blizzard all the time). (default value: .2).
	10, // Blizzard interval in minutes. Set to zero to have the blizzard run for the whole interval, otherwise you can set a custom time interval for the blizzard.
	0, // Ground Fog Effects. Options: 0 - no ground fog, 1 - only at evening, night, and early morning, 2 - anytime, 3 - near cities and towns, at late evening, night, and early morning, 4 - near cities and towns, anytime.
	400, // Distance in meters from player to scan for buildings to spawn ground fog. By default, only the 15 nearest buildings will spawn ground fog.
	false, // Allow ground fog when it's snowing or raining?
	2 // Winter Breath Fog Effects. Options: 0 - no breath fog, 1 - anytime, 2 - only when snowing or blizzard. Note: breath fog is only available with winter weather enabled.
];

/*
	Developers:

	This file's purpose is to slim down init.sqf to only the map specific and most frequently changed variables.
	It cuts down on the amount of if(isNil)then{}; statements in variables.sqf and makes the mission smaller.

	Variables that are map specific or frequently changed should be included in init.sqf by default
	with a corresponding if(isNil)then{}; in variables.sqf.
*/
