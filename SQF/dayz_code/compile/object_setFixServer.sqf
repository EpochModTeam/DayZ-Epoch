private ["_unit","_selection","_strH","_damage"];
_unit =			_this select 0;
_selection =	_this select 1;
_damage =		_this select 2;

if (_selection != "" and local _unit) then {
	_strH = "hit_" + (_selection);
	_unit setHit[_selection,_damage];
	//player sidechat str _damage;
	_unit setVariable [_strH,_damage,true];
	if (_damage == 0) then {
		if (isServer) then { 
			[_unit,"repair"] call server_updateObject 
		} else { 
			PVDZE_veh_Update = [_unit,"repair"]; 
			publicVariableServer "PVDZE_veh_Update"; 
		};
	} else {
		if (isServer) then { 
			[_unit,"damage"] call server_updateObject 
		} else { 
			PVDZE_veh_Update = [_unit,"damage"]; 
			publicVariableServer "PVDZE_veh_Update"; 
		};
	};
};