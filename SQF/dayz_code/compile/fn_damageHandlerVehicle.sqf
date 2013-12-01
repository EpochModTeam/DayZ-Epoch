scriptName "Functions\misc\fn_damageHandler.sqf";
/***********************************************************
	PROCESS DAMAGE TO A UNIT
	- Function
	- [unit, selectionName, damage, source, projectile] call fnc_usec_damageHandler;
************************************************************/
private ["_unit","_hit","_damage","_total"];
_unit = _this select 0;
_hit = _this select 1;
_damage = _this select 2;
//_source = _this select 3;
//_ammo = _this select 4;

_total = _damage;

//diag_log ("DAMAGE VEH: " + typeof(_unit) + " / " + str(_hit) + " / " + str(_damage) + " / " + str(getDammage _unit));

if (local _unit) then {
	_total = [_unit,_hit,_damage] call object_setHitServer;
};
_total