// Load_wounded.sqf
// OCTOBER 2010 - norrin
// Updated December 2019 - JasonTM

private ["_wounded","_vehicle","_group","_medic"];

_wounded = _this select 0;
_medic = _this select 1;
_vehicle = _this select 2;

// Check to see that the first passed object matches local player object
if (player != _wounded) exitWith {};
if !(r_player_unconscious) exitWith {};

_wounded assignAsCargo _vehicle;
_wounded moveInCargo _vehicle;

// Animation needs to be synced on all clients.
[nil, _wounded, rSWITCHMOVE, "KIA_HMMWV_Cargo01"] call RE;
_wounded switchMove "KIA_HMMWV_Cargo01";

r_drag_sqf = true;

while {r_drag_sqf} do {
	
	// If the player wakes up, end the loop.
	if (!(_wounded getVariable ["NORRN_unconscious", false])) then {
		
		uiSleep 2; // Give fn_unconsious time to finish
		
		if (vehicle _wounded != _wounded) then {
			// fn_unconscious does not perform an animation if the player is in a vehicle.
			[nil, _wounded, rSWITCHMOVE, "HMMWV_Cargo01"] call RE;
			_wounded switchMove "HMMWV_Cargo01";
		};
		
		r_drag_sqf = false;
	};
	uiSleep 1;
};