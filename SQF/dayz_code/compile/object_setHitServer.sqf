private["_unit","_selection","_damage","_strH","_dam","_total"];
_unit =			_this select 0;
_selection =	_this select 1;
_damage =		_this select 2;
if ((_selection != "") and local _unit) then {
	_strH = "hit_" + (_selection);
	_dam = _unit getVariable [_strH,0];
	_total = (_dam + _damage);
	if (_total > 1) then {
		_total = 1;
	};
	_unit setVariable [_strH,_total,true];
	
	if (_damage >= 1) then {
		//["PVDZE_veh_Update",[_unit,"damage"]] call callRpcProcedure;
		PVDZE_veh_Update = [_unit,"damage"];
		publicVariableServer "PVDZE_veh_Update";
	};
	
} else {
	_damage = 0;
};
_damage