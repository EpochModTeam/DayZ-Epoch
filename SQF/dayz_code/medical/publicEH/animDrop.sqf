// animDrop.sqf
private "_dragee";

_dragee = _this;

// Check to see that the passed object matches local player object
if (player != _dragee) exitWith {};

_dragee setVariable ["NORRN_unit_dragged", false, true];
detach _dragee;

// We don't want to override the animations from fn_unconscious or load_act.sqf
if (r_player_unconscious) then {
	
	// Animation needs to be synced on all clients.
	[nil, _dragee, rSWITCHMOVE, "ainjppnemstpsnonwrfldnon"] call RE;
	_dragee switchmove "ainjppnemstpsnonwrfldnon";
};