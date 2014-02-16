// private["_radius","_position","_inVehicle","_dateNow","_age","_locationstypes","_nearestCity","_nearbyBuildings","_nearby","_type","_config","_canZombie","_canLoot","_dis","_keepAwayDist","_isNoone","_looted","_cleared"];//_radius, _position, _inVehicle, _dateNow, _age, _locationstypes, _nearestCity, _nearbyBuildings
//
// _radius = _this select 0;
// _position = _this select 1;
// _inVehicle = _this select 2;
// _dateNow = _this select 3;
// _age = _this select 4;
// _locationstypes = _this select 5;
// _nearestCity = _this select 6;
//
// _looted = (_x getVariable ["looted",-0.1]);
// _cleared = (_x getVariable ["cleared",true]);
// _dateNow = (DateToNumber date);
// _age = (_dateNow - _looted) * 525948;
// //diag_log ("SPAWN LOOT: " + _type + " Building is " + str(_age) + " old" );
// if ((_age > 10) and (!_cleared)) then {
// 	_nearByObj = nearestObjects [(getPosATL _x), ["WeaponHolder","WeaponHolderBase"],((sizeOf _type)+5)];
// 	{deleteVehicle _x} forEach _nearByObj;
// 	_x setVariable ["cleared",true];
// 	_x setVariable ["looted",_dateNow,true];
// };
// if ((_age > 10) and (_cleared)) then {
// 	//Register
// 	_x setVariable ["looted",_dateNow,true];
// 	//cleanup
// 	_handle = [_x] spawn building_spawnLoot;
// 	waitUntil{scriptDone _handle};
// };