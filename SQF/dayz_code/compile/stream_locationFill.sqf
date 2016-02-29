//private ["_config","_type","_position","_dir","_object","_list","_w8","_dis"];
_list = _this select 0;
_w8 = _this select 1;
for "_i" from ((count _list) - 1) to 0 step -1 do
{
	_config = (_list select _i);
	if (isClass(_config)) then {
		_type = getText (_config >> "type");
		_position = [] + getArray (_config >> "position");
		_dir = getNumber (_config >> "direction");
		//_onFire = getNumber (_config >> "onFire");
		_dis = _position distance player;
		_inVehicle = (vehicle player != player);
		
		if (_dis > 2) then {
			_object = _type createVehicleLocal [_position select 0,_position select 1,-100];
			_object setDir _dir;
			_object setPos [_position select 0,_position select 1,0];
			_object setPosATL _position;
			_object allowDamage false;
			_object setVariable ["", true]; // SV used by player_spawnCheck
			//if (_w8 AND {((_i % 25) == 0)}) then { sleep 0.01; };
		
		} else {
			if (!_inVehicle) then {
				_object = _type createVehicleLocal [_position select 0,_position select 1,-100];
				_object setDir _dir;
				_object setPos [_position select 0,_position select 1,0];
				_object setPosATL _position;
				_object allowDamage false;
				_object setVariable ["", true]; // SV used by player_spawnCheck
				if (_w8 AND {((_i % 25) == 0)}) then { sleep 0.01; };
			};
		};
		
	};
//sleep 0.001;
};
//diag_log ("FILL: " + str(_list));
