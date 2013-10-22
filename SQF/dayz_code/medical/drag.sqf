/*

 DRAG BODY SCRIPT

 Allows players to drag unconscious bodies 

 JULY 2010 - norrin
*****************************************************************************************************************************
Start drag.sqf
*/

private ["_unit","_dragee","_unconscious"];
_dragee				= _this select 3;
_unit  				= player;
_unconscious = 		_dragee getVariable ["NORRN_unconscious", false];

if (isNull _dragee) exitWith {}; 
if (!_unconscious) exitWith {}; 

//player assumes dragging posture
_dragee setVariable ["NORRN_unit_dragged", true, true]; 
_unit playActionNow "grabDrag";
sleep 2;

//unconscious unit assumes dragging posture
//public EH 
//["norrnRaDrag",_dragee] call broadcastRpcCallAll;
	norrnRaDrag = [_dragee];
	publicVariable "norrnRaDrag";
_dragee attachto [_unit,[0.1, 1.01, 0]];
sleep 0.02;

//rotate wounded units so that it is facing the correct direction
norrnR180 = _dragee;
publicVariable "norrnR180";
_dragee  setDir 180;
r_drag_sqf 	= true;

//Uneccesary actions removed & drop body added 
call fnc_usec_medic_removeActions;

NORRN_dropAction = player addAction ["Drop body", "\z\addons\dayz_code\medical\drop_body.sqf",_dragee, 0, false, true];
//NORRN_carryAction = player addAction ["Carry body", "\z\addons\dayz_code\medical\carry.sqf",_dragee, 0, false, true];
sleep 1;

if (true) exitWith {};
