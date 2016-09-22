/*

 DRAG BODY SCRIPT

 Allows players to drag unconscious bodies

 JULY 2010 - norrin
*****************************************************************************************************************************
Start drag.sqf
*/

private ["_unit","_dragee","_pos","_dir","_addAction"];
_dragee = _this select 3;
_unit = player;
_unconscious = _dragee getVariable ["NORRN_unconscious", false];
_addAction = false;

if (isNull _dragee) exitWith {};
if (!_unconscious) exitWith {};

_dropObjects = nearestObjects [player, DayZ_DropDrageeObjects, 3];
if (count _dropObjects > 0) exitWith {};

//player assumes dragging posture
r_drag_sqf = true;

while {r_drag_sqf} do {
	if (!_addAction) then {
		_dragee setVariable ["NORRN_unit_dragged", true, true];

		_unit playActionNow "grabDrag";
		uiSleep 2;

		//unconscious unit assumes dragging posture
		//public EH
		//PVDZ_drg_RaDrag = _dragee;
		PVDZ_drg_RaDrag = [_dragee];
		publicVariable "PVDZ_drg_RaDrag";
		//_dragee switchmove "ainjppnemstpsnonwrfldb_still";
		_dragee attachto [_unit,[0.1, 1.01, 0]];
		uiSleep 0.02;

		//rotate wounded units so that it is facing the correct direction
		//PVDZ_drg_R180 = _dragee; // not used
		//publicVariable "PVDZ_drg_R180"; // not used
		_dragee setDir 180;

		//Uneccesary actions removed & drop body added
		call fnc_usec_medic_removeActions;

		NORRN_dropAction = player addAction [localize "str_actions_medical_dropbody", "\z\addons\dayz_code\medical\drop_body.sqf",_dragee, 0, false, true];
		//NORRN_carryAction = player addAction ["Carry body", "\z\addons\dayz_code\medical\carry.sqf",_dragee, 0, false, true];
		uiSleep 1;
		_addAction = true;
	};
	_dropObjects = nearestObjects [player, DayZ_DropDrageeObjects, 3]; //Prevent exploit of glitching through doors
	if (force_dropBody || (count _dropObjects > 0)) then {
		[cursorTarget, _unit, _unconscious, _dragee] execVM "\z\addons\dayz_code\medical\drop_body.sqf";
	};

	if (vehicle player != player) then {
		player action ["eject", vehicle player];
		localize "str_actions_medical_dragbody_veh" call dayz_rollingMessages;
		[cursorTarget, _unit, _unconscious, _dragee] execVM "\z\addons\dayz_code\medical\drop_body.sqf";
	};
	if (!r_drag_sqf) exitWith {};
	uiSleep 0.001;
};
