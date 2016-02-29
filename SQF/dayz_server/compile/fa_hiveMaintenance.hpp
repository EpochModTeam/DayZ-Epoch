/*
        Created exclusively for ArmA2:OA - DayZMod.
        Please request permission to use/alter/distribute from project leader (R4Z0R49) AND the author (facoptere@gmail.com)
*/

//// TENTS CHECK ////

// Proceed to empty tents check: extra empty tents will be ignored (tents won't be created on map)
// comment this out if you don't want any check
//#define EMPTY_TENTS_CHECK

// Max number of empty tents
#define EMPTY_TENTS_GLOBAL_LIMIT 100

// Keep a least this number of empty tents per user
#define EMPTY_TENTS_USER_LIMIT 3



//// OUT-OF-MAP CHECK ////

// Move out-of-map tents and other crafted/installed objects next to map boundary.
//#define OBJECTS_FIX_OUTOFMAP

// Move out-of-map vehicle next to map boundary.
//#define VEH_MAINTENANCE_FIX_OUTOFMAP

// Move out-of-map player next to map boundary during playerSetup
//#define PLAYERS_FIX_OUTOFMAP



//// VEHICLE MAINTENANCE /////

// Ignore (don't create on map) vehicles not decribed in Cfg file, or outnumbered ones
//#define VEH_MAINTENANCE_IGNORE_UNKNOWN

// Add missing vehicles, as described in Cfg file. Respawn damaged vehicles.
//#define VEH_MAINTENANCE_ADD_MISSING

// Don't look for a suitable place anywhere on map if current place is not safe
#define VEH_MAINTENANCE_DONT_BE_SMART

// Damage the vehicle for 1 startup over 5
// don't define if you don't want any damage
//#define VEH_MAINTENANCE_ROTTEN_AT_STARTUP 5

// How the  damage is computed. Here, a 0% damaged vehicle would be respawned after 100 restarts
#define VEH_MAINTENANCE_ROTTEN_LOGIC (_damage * 1.04 + 0.03)

// How initial fuel level is set when a vehicle is created/spawned
#define VEH_MAINTENANCE_SPAWN_FUEL_LOGIC (0.1 + floor(random 3) / 10)




// where the config is described
#define CONFIGBASE_VEHMAINTENANCE configFile >> "CfgPatches" >> "vehMaint"
