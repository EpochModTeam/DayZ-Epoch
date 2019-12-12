/*
 DROP BODY SCRIPT

 Allows players to drop unconscious bodies

 JULY 2010 - norrin
*****************************************************************************************************************************
Start drop_body.sqf
*/
private ["_medic","_dragee"];

_medic = (_this select 3) select 0;
_dragee = (_this select 3) select 1;

player removeAction NORRN_dropAction;

force_dropBody = false;
r_drag_sqf = false;

//detach _medic;
_medic switchMove "";

if (alive _dragee) then {
	PVDZ_send = [_dragee, "DropPlayer",_dragee,[_dragee,dayz_authKey,_medic]];
	publicVariableServer "PVDZ_send";
};
