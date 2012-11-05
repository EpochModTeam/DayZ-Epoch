for "_i" from 0 to ((count _this) - 1) do 
{
	private ["_config","_type","_position","_dir","_onFire","_object"];
	_config = 	(_this select _i);
	if (isClass(_config)) then {
		_type = 	getText		(_config >> "ctype");
		_position = getArray	(_config >> "position");
		_object = nearestObject [_position,_type];
		deleteVehicle _object;
	};
};
//diag_log ("CLEAR: " + str(_this));