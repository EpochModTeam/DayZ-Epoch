private["_unit","_selection","_strH","_dam","_total"];
_unit =			_this select 0;
_selection =	_this select 1;
_damage =		_this select 2;

if (_selection != "" and local _unit) then {
	_strH = "hit_" + (_selection);
	_unit setHit[_selection,_damage];
	//player sidechat str _damage;
	_unit setVariable [_strH,_damage,true];
	if (_damage == 0) then {
		dayzUpdateVehicle = [_unit,"repair"];
	} else {
		dayzUpdateVehicle = [_unit,"damage"];
	};
	if (isServer) then {
		if (allowConnection) then {
			dayzUpdateVehicle call server_updateObject;
		};
	} else {
		publicVariable "dayzUpdateVehicle";
	};
};