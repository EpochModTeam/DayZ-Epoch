// unload_wounded.sqf
// December 2019 - JasonTM

private "_wounded";

_wounded = _this;

// Check to see that the passed object matches local player object
if (player != _wounded) exitWith {};

// Check if the player is still unconscious
if (r_player_unconscious) then {
	// Reestablish the "lie on back" animation
	[nil, _wounded, rSWITCHMOVE, "ainjppnemstpsnonwrfldnon"] call RE;
	_wounded switchmove "ainjppnemstpsnonwrfldnon";
};

r_drag_sqf = false;