/*
 DROP BODY SCRIPT

 Allows players to drop unconscious bodies

 JULY 2010 - norrin
*****************************************************************************************************************************
Start drop_body.sqf
*/

private ["_dragee","_unit"];
_dragee	= _this select 3; 

player removeAction NORRN_dropAction;
player removeAction NORRN_carryAction;
NORRN_remove_drag = true;  
r_drag_sqf = false;
r_carry_sqf = false;
r_action = false;
_unit = player;

detach _unit;
detach _dragee;
_unit switchMove "";
_dragee switchMove "";
NORRN_Dragged_body = objNull;
_dragee setVariable ["NORRN_unit_dragged", false, true]; 

//lie on back
_dragee playMoveNow "ainjppnemstpsnonwrfldnon";
norrnRalie = _dragee;
publicVariable "norrnRalie";

if (true) exitWith {};