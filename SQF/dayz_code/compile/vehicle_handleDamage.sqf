/***********************************************************
ASSIGN DAMAGE TO A UNIT
- Function Vehicle_HandleDamage
- [unit, selectionName, damage, source, projectile] call Vehicle_HandleDamage;
************************************************************/
private["_unit","_selection","_strH","_total","_damage","_needUpdate"];

_unit = _this select 0;
_selection = _this select 1;
_total = _this select 2;

if (_selection != "") then {
	_strH = "hit_" + _selection;
} else {
	_strH = "totalDmg";
};

if (_total >= 0.98) then {
        _total = 1.0;
};

if (local _unit) then {
	if (_total > 0) then {
	
		_unit setVariable [_strH, _total, true];
		_unit setHit [_selection, _total];

		if (isServer) then {
			[_unit, "damage"] call server_updateObject;
		} else {
			PVDZE_veh_Update = [_unit,"damage"];
			publicVariableServer "PVDZE_veh_Update";
		};
	};
} else {
	// vehicle is not local to this client, ask the client which vehicle is local to set damage
	/* PVS/PVC - Skaronator */
	PVDZE_send = [_unit,"VehHandleDam",_this];
	publicVariableServer "PVDZE_send";
};

// all "HandleDamage event" functions should return the effective damage that the engine will record for that part
_total