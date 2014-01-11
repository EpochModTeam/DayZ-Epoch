/***********************************************************
ASSIGN DAMAGE TO A UNIT
- Function Vehicle_HandleDamage
- [unit, selectionName, damage, source, projectile] call Vehicle_HandleDamage;
************************************************************/
private ["_unit","_selection","_strH","_dam","_total","_needUpdate"];
_unit = _this select 0;
_selection = _this select 1;
_total = _this select 2;
_dam = _unit getVariable["totalDmg",0];
_needUpdate = _unit getVariable["needUpdate",false];

if (_dam < 1 ) then {
	if ( (_selection != "") ) then {
        	_strH = "hit_" + (_selection);
	} else {
        	_strH = "totalDmg";
	};
	if (_total > 0.98) then {
        	_total = 1;
	};
	if ( _total>0 ) then {
        	_unit setVariable [_strH,_total,true];
		if ( !_needUpdate ) then {
			_unit setVariable ["needUpdate",true,true];
			//["PVDZE_veh_Update",[_unit,"damage"]] call callRpcProcedure;
			if (isServer) then {
				[_unit, "damage"] call server_updateObject;
			} else {
				PVDZE_veh_Update = [_unit,"damage"];
				publicVariableServer "PVDZE_veh_Update";
			};
		};
	};
};
_total

/* WIP - PVS/PVC - Skaronator - CP out of DayZ Mod 1.8
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
	//_this resize 5; // delete "broadcast" boolean
	PVDZE_send = [_unit,"VehHandleDam",_this];
	publicVariableServer "PVDZE_send";
};

// all "HandleDamage event" functions should return the effective damage that the engine will record for that part
_total
*/