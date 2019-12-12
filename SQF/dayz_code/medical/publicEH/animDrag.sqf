// animDrag.sqf
private "_dragee";

_dragee = _this;

// Check to see that the passed object matches local player object
if (player != _dragee) exitWith {};
if !(r_player_unconscious) exitWith {};

_dragee setVariable ["NORRN_unit_dragged", true, true];

// Animation needs to be synced on all clients.
[nil, _dragee, rSWITCHMOVE, "ainjppnemstpsnonwrfldb_still"] call RE;
_dragee playMoveNow "ainjppnemstpsnonwrfldb_still";
_dragee setDir -180;
_dragee setPos (getPos _dragee);
