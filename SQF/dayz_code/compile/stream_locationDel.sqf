//private ["_config","_type","_position","_object","_list"];
_list = _this select 0;
//_w8 = _this select 1;
for "_i" from ((count _list) - 1) to 0 step -1 do
{
	_config = (_list select _i);
	if (isClass(_config)) then {
		_type = getText (_config >> "ctype");
		_position = getArray (_config >> "position");
		_object = nearestObject [_position,_type];
		deleteVehicle _object;
		if ((_i % 25) == 0) then { sleep 0.01; };
	};
	sleep 0.001;
};
//diag_log ("CLEAR: " + str(_this));
