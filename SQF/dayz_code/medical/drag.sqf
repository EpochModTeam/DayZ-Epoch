/*

 DRAG BODY SCRIPT

 Allows players to drag unconscious bodies

 JULY 2010 - norrin
*****************************************************************************************************************************

Updated December 2019 - JasonTM
*/

private ["_medic","_dragee","_dropObjects","_unconscious"];
_dragee = _this select 3;
_medic = player;
_unconscious = _dragee getVariable ["NORRN_unconscious", false];

if (isNull _dragee) exitWith {};
if (!_unconscious) exitWith {};

_dropObjects = nearestObjects [player, DayZ_DropDrageeObjects, 3];
if (count _dropObjects > 0) exitWith {};

// Animation needs to be synced on all clients.
[nil, _medic, rSWITCHMOVE, "AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_2"] call RE;
_medic switchmove "AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_2";

// Fix from fn_unconscious
disableUserInput false; disableUserInput false;
disableUserInput true; disableUserInput true;
disableUserInput false; disableUserInput false;
uiSleep .5;

// Attach before the other client sets direction and position
_dragee attachto [_medic,[0.1, 1.01, 0]];

// Send information to start the drag process
PVDZ_send = [_dragee,"DragPlayer",_dragee,[_dragee,dayz_authKey,_medic]];
publicVariableServer "PVDZ_send";

// Wait until the other client has performed its actions.
waitUntil {uiSleep 0.02; ((_dragee getVariable ["NORRN_unit_dragged",false]) || (!alive _dragee));};

//Unnecessary actions removed & drop body added
call fnc_usec_medic_removeActions;
r_action = false;
force_dropBody = false;

NORRN_dropAction = player addAction [localize "str_actions_medical_dropbody", "\z\addons\dayz_code\medical\drop_body.sqf",[_medic,_dragee], 0, false, true];
r_drag_sqf = true;

while {r_drag_sqf} do {
	
	_dropObjects = nearestObjects [player, DayZ_DropDrageeObjects, 3]; //Prevent exploit of glitching through doors
	if (force_dropBody || {count _dropObjects > 0} || {!(_dragee getVariable ["NORRN_unconscious", false])} || {!alive _dragee}) then {
		[0,0,0,[_medic,_dragee]] execVM "\z\addons\dayz_code\medical\drop_body.sqf";
	};

	if (vehicle player != player) then {
		player action ["eject", vehicle player];
		localize "str_actions_medical_dragbody_veh" call dayz_rollingMessages;
		[0,0,0,[_medic,_dragee]] execVM "\z\addons\dayz_code\medical\drop_body.sqf";
	};
	uiSleep 0.1;
};
