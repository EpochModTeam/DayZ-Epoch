// animDrag.sqf
private "_dragee";

_dragee = _this;

// Check to see that the passed object matches local player object
if (player != _dragee) exitWith {};
if !(r_player_unconscious) exitWith {};

// Have to wait until attached to set direction and position
_dragee setDir -180;
_dragee setPos (getPos _dragee);

_dragee setVariable ["NORRN_unit_dragged", true, true];

uiSleep 1.5;

// First animation
[nil, _dragee, rSWITCHMOVE, "ainjpfalmstpsnonwrfldnon_carried_up"] call RE;
_dragee switchmove "ainjpfalmstpsnonwrfldnon_carried_up";

uiSleep 10;

// Second animation
[nil, _dragee, rSWITCHMOVE, "ainjpfalmstpsnonwrfldnon_carried_still"] call RE;
_dragee switchmove "ainjpfalmstpsnonwrfldnon_carried_still";