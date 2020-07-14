private ["_exitReason","_vehicle","_clientKey","_activatingPlayer","_gear","_playerUID","_crate","_offset","_position","_parachute","_time","_smoke"];

#define DEPLOY_SMOKE true // If you don't want a smoke shell to pop at the crate's location, then change to false.
#define DELETION_TIMER 2 // This is the time (in minutes) it takes for the crate to be deleted by the server. Setting to 0 disables deletion. Default: 2 minutes.

//diag_log text "Begin Cargo Drop";

_exitReason = "";
_vehicle = _this select 0;
_clientKey = _this select 1;
_activatingPlayer = _this select 2;
_playerUID = getPlayerUID _activatingPlayer;
_exitReason = [_this,"CargoDrop",_vehicle,_clientKey,_playerUID,_activatingPlayer] call server_verifySender;
if (_exitReason != "") exitWith {diag_log _exitReason};

// Save the aircraft gear to variables and immediately remove the gear from the aircraft so the self-action cannot be executed multiple times.
_weapons = getWeaponCargo _vehicle;
_magazines = getMagazineCargo _vehicle;
_backpacks = getBackpackCargo _vehicle;
clearWeaponCargoGlobal _vehicle;
clearMagazineCargoGlobal _vehicle;
clearBackpackCargoGlobal _vehicle;

_offset = (sizeOf (typeOf _vehicle)) / 1.5;
_offsetPos = _vehicle modelToWorld [0,-_offset,0]; // We want to use an offset for the crate position so that it does not collide with the aircraft when spawned.
_crate = "DZ_AmmoBoxFlatUS" createVehicle _offsetPos;
_crate setPos _offsetPos;
_parachute = createVehicle ["ParachuteMediumEast", _offsetPos, [], 0, "FLY"];
_parachute setPos _offsetPos;
_crate attachTo [_parachute, [0, 0, .5]];

// Wait until crate is near the ground and detach.
// Use 90 second drop timer in case the crate gets stuck on top of another object.
_time = diag_tickTime;

waitUntil {uiSleep 0.1;((([_crate] call FNC_GetPos) select 2) < 3 || {diag_tickTime - _time > 90})};

detach _crate;
_position = [_crate] call FNC_GetPos;
deleteVehicle _crate;
deleteVehicle _parachute;

// If the crate is near another object (probably landed on top of a base or building), select a new location within 15 meters.
if (count (_position nearObjects 2) > 0) then {
	_position = [_position, 0, 15, 5] call fn_selectRandomLocation;
};

_position set [2, 0];
// recreate the crate object at new position. Note: for some reason I was having trouble with the original crate object glitching out. The player was unable to remove the gear. Not sure why.
_crate = "DZ_AmmoBoxFlatUS" createVehicle _position;
_crate setPosATL _position;
_crate setVariable ["permaLoot", true];
clearWeaponCargoGlobal _crate;
clearMagazineCargoGlobal _crate;

// Add the vehicle's gear to the crate. Warning: gear in backpacks will get wiped.
[_weapons,_magazines,_backpacks,_crate] call fn_addCargo;

if (DEPLOY_SMOKE) then {
	_smoke = "SmokeShellRed" createVehicle _position;
	_smoke setPosATL _position;
	_smoke attachTo [_crate,[0,0,-1]];
};

if (DELETION_TIMER > 0) then {
	uiSleep (DELETION_TIMER * 60);
	deleteVehicle _crate;
};