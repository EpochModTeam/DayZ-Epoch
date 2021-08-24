// Select random position between 50 and 100 meters away from the building.
local _pos = [_this, 50, 100, 1] call fn_selectRandomLocation;

if (surfaceIsWater _pos) exitWith { diag_log "Mutant_Generate: Location is in water...abort"; };
	
// Create mutant
_agent = createAgent ["z_bloodsucker", _pos, [], 0, "NONE"];
_agent setDir (random 360);
_agent setPosATL _pos;

// Add to counts
dayz_spawnBloodsuckers = dayz_spawnBloodsuckers + 1;
dayz_CurrentNearBloodsuckers = dayz_CurrentNearBloodsuckers + 1;
dayz_currentGlobalBloodsuckers = dayz_currentGlobalBloodsuckers + 1;

//diag_log format ["Bloodsucker Counts: Current local - %1, Current near - %2, Current global - %3",dayz_spawnBloodsuckers,dayz_CurrentNearBloodsuckers,dayz_currentGlobalBloodsuckers];
