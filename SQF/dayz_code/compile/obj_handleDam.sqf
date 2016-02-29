/***********************************************************
ASSIGN DAMAGE TO A UNIT.
Called by "HandleDamage" vehicle Event Handler

- Function fnc_obj_handleDam
- [unit, damage] call fnc_obj_handleDam;
- return : updated damage
************************************************************/
private["_obj","_total","_currentDamage"];

_obj = _this select 0;
_damage = _this select 2;
_total = (damage _obj);

if (_damage > 0) then {
	_total = (damage _obj) + _damage;

	if (!isServer) then {
		PVDZ_obj_Save = [_obj,"objWallDamage",_total];
		publicVariableServer "PVDZ_obj_Save";
	} else {
		[_obj,"objWallDamage",_total] call server_updateObject;
	};
};


// all "HandleDamage event" functions should return the effective damage that the engine will record for that part
_total
