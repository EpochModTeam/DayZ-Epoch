/*
        Created exclusively for ArmA2:OA - DayZMod.
        Please request permission to use/alter/distribute from project leader (R4Z0R49) AND the author (facoptere@gmail.com)
*/

/***********************************************************
ASSIGN DAMAGE TO A UNIT.
Called by "HandleDamage" vehicle Event Handler
or by "PVCDZ_veh_SH" PV
or by zombie_attack

- Function fnc_veh_handleDam
- [unit, selectionName, damage, source, projectile, broadcast] call fnc_veh_handleDam;
- return : updated damage for that part
broadcast: boolean. if true, then the request will be sent to all players if the vehicle is not local.
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

		if (!isServer) then {
			PVDZ_veh_Save = [_unit,"damage"];
			publicVariableServer "PVDZ_veh_Save";
		} else {
			[_unit, "damage"] call server_updateObject;
		};
	};
} else {
	//if ( (count _this > 5) AND {(_this select 5)}) then {
		// vehicle is not local to this client, ask the client which vehicle is local to set damage
		//_this resize 5; // delete "broadcast" boolean
		PVDZ_send = [_unit,"VehHandleDam",_this];
		publicVariableServer "PVDZ_send";
	//};
};

// all "HandleDamage event" functions should return the effective damage that the engine will record for that part
_total
