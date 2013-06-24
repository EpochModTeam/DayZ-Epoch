for "_i" from 0 to ((count _this) - 1) do 
{
	private ["_config","_type","_position","_dir","_onFire","_object"];
	_config = 	(_this select _i);
	if (isClass(_config)) then {
		_type = 	getText		(_config >> "type");
		_position = [] + getArray	(_config >> "position");
		_dir = 		getNumber	(_config >> "direction");
		_onFire = 	getNumber	(_config >> "onFire");
		
		_object =  _type createVehicleLocal _position;
		_object setPos _position;
		_object setDir _dir;
		_object allowDamage false;
		
		//diag_log format["CreateObj: %1 / %2",_type,_position];
		/*
		if (_onFire > 0) then {
			nul=[_object,_onFire,time,false,false] spawn BIS_Effects_Burn;
		};
		*/
	};
};
//diag_log ("FILL: " + str(_this));