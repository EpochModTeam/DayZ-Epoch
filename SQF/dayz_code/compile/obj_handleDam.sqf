/***********************************************************
ASSIGN DAMAGE TO A UNIT.
Called by "HandleDamage" vehicle Event Handler

- Function fnc_obj_handleDam
- [unit, damage] call fnc_obj_handleDam;
- return : updated damage
************************************************************/
private["_obj","_total","_damage"];

_obj = _this select 0;
_damage = _this select 1;
_total = (damage _obj);

if (_damage > 0) then {
	if (!isServer) then {
		PVDZ_veh_Save = [_obj,"objWallDamage",(_total + _damage)];
		publicVariableServer "PVDZ_veh_Save";
	} else {
		[_obj,"objWallDamage",(_total + _damage)] call server_updateObject;
	};
};

//diag_log format["INFO - %1(%3) - %2(%4)",_obj,_damage,(typeof _obj),(_total + _damage)];


// all "HandleDamage event" functions should return the effective damage that the engine will record for that part
0
