/*
	DZMSInit.sqf by Vampire
	This is the file that every other file branches off from.
	It checks that it is safe to run, sets relations, and starts mission timers.
*/
private["_modVariant"];

waitUntil{initialized};

// Lets let the heavier scripts run first
sleep 60;

// Error Check
if (!isServer) exitWith { diag_log text format ["[DZMS]: <ERROR> DZMS is Installed Incorrectly! DZMS is not Running!"]; };
if (!isnil("DZMSInstalled")) exitWith { diag_log text format ["[DZMS]: <ERROR> DZMS is Installed Twice or Installed Incorrectly!"]; };

// Global for other scripts to check if DZMS is installed.
DZMSInstalled = true;

diag_log text format ["[DZMS]: Starting DayZ Mission System."];

// Let's see if we need to set relationships
// Checking for DayZAI, SargeAI, and WickedAI (Three AI Systems that already set relations)
// I would rather the user set their relations in the respective mod instead of overwrite them here.
if ( (isnil("DZAI_isActive")) && (isnil("SAR_version")) && (isnil("WAIconfigloaded")) ) then
{

	// They weren't found, so let's set relationships
	diag_log text format ["[DZMS]: Relations not found! Using DZMS Relations."];
	
	// Create the groups if they aren't created already
	createCenter east;
	// Make AI Hostile to Survivors
	WEST setFriend [EAST,0];
	EAST setFriend [WEST,0];
	// Make AI Hostile to Zeds
	EAST setFriend [CIVILIAN,0];
	CIVILIAN setFriend [EAST,0];
	
} else {

	// Let's inform the user which relations we are using
	// This could be made better in a future version
	DZMSRelations = 0; //Set our counter variable
	if (!isnil("DZAI_isActive")) then {
		diag_log text format ["[DZMS]: DZAI Found! Using DZAI's Relations!"];
		DZMSRelations = DZMSRelations + 1;
	};
	if (!isnil("SAR_version")) then {
		diag_log text format ["[DZMS]: SargeAI Found! Using SargeAI's Relations!"];
		DZMSRelations = DZMSRelations + 1;
	};
	if (!isnil("WAIconfigloaded")) then {
		diag_log text format ["[DZMS]: WickedAI Found! Using WickedAI's Relations!"];
		DZMSRelations = DZMSRelations + 1;
	};
	// If we have multiple relations running, lets warn the user
	if (DZMSRelations > 1) then {
		diag_log text format ["[DZMS]: Multiple Relations Detected! Unwanted AI Behaviour May Occur!"];
		diag_log text format ["[DZMS]: If Issues Arise, Decide on a Single AI System! (DayZAI, SargeAI, or WickedAI)"];
	};
	DZMSRelations = nil; //Destroy the Global Var
	
};

// Let's Load the Mission Configuration
call compile preprocessFileLineNumbers "\z\addons\dayz_server\DZMS\DZMSConfig.sqf";

// These are Extended configuration files the user can adjust if wanted
call compile preprocessFileLineNumbers "\z\addons\dayz_server\DZMS\ExtConfig\DZMSWeaponCrateList.sqf";
call compile preprocessFileLineNumbers "\z\addons\dayz_server\DZMS\ExtConfig\DZMSAIConfig.sqf";

// Report the version
diag_log text format ["[DZMS]: Currently Running Version: %1", DZMSVersion];

// Lets check for a copy-pasted config file
if (DZMSVersion != "1.1FIN") then {
	diag_log text format ["[DZMS]: Outdated Configuration Detected! Please Update DZMS!"];
	diag_log text format ["[DZMS]: Old Versions are not supported by the Mod Author!"];
};

diag_log text format ["[DZMS]: Mission and Extended Configuration Loaded!"];

// Lets get the map name for mission location purposes
DZMSWorldName = toLower format ["%1", worldName];
diag_log text format["[DZMS]: %1 Detected. Map Specific Settings Adjusted!", DZMSWorldName];

// We need to detect Epoch to change the hive call for vehicle saving
// Epoch doesn't have hive 999 calls and uses 308 publish instead
_modVariant = toLower( getText (configFile >> "CfgMods" >> "DayZ" >> "dir"));
if (_modVariant == "@dayz_epoch") then {DZMSEpoch = true;} else {DZMSEpoch = false;};
if ((!(DZMSEpoch)) AND (!(isNil "PVDZE_serverObjectMonitor"))) then {DZMSEpoch = true;};

if (DZMSEpoch) then {
	diag_log text format ["[DZMS]: DayZ Epoch Detected! Some Scripts Adjusted!"];
};

// Lets load our functions
call compile preprocessFileLineNumbers "\z\addons\dayz_server\DZMS\DZMSFunctions.sqf";

// these arrays are used to hold units for each mission type
DZMSUnitsMinor = [];
DZMSUnitsMajor = [];

// Let's get the clocks running!
[] ExecVM DZMSMajTimer;
[] ExecVM DZMSMinTimer;
DZMSMajDone = false;
DZMSMinDone = false;

// Let's get the Marker Re-setter running for JIPs to stay updated
[] ExecVM DZMSMarkerLoop;
