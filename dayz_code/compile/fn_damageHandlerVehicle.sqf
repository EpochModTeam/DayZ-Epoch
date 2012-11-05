scriptName "Functions\misc\fn_damageHandler.sqf";
/***********************************************************
	PROCESS DAMAGE TO A UNIT
	- Function
	- [unit, selectionName, damage, source, projectile] call fnc_usec_damageHandler;
************************************************************/
private["_unit","_hit","_damage","_unconscious","_wound","_isHit","_isInjured","_type","_hitPain","_inPain","_isDead","_isCardiac","_killerID","_evType","_recordable","_inVehicle","_isHeadHit","_isMinor","_total"];
_unit = _this select 0;
_hit = _this select 1;
_damage = _this select 2;
_source = _this select 3;
_ammo = _this select 4;
_total = _damage;

//diag_log ("DAMAGE VEH: " + typeof(_unit) + " / " + str(_hit) + " / " + str(_damage) + " / " + str(getDammage _unit));

if (local _unit) then {
	if (_ammo == "zombie") then {
		//_unit setDamage (_damage / 2);
		_total = [_unit,_hit,_damage] call object_setFixServer;
	} else {
		_total = [_unit,_hit,_damage] call object_setHitServer;
	};
};
_total