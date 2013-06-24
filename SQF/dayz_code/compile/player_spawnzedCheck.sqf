private ["_dateNow","_age","_zombied","_x"];

//_radius = _this select 0;
//_position = _this select 1;
//_inVehicle = _this select 2;
_dateNow = _this select 3;
_age = _this select 4;
//_locationstypes = _this select 5;
//_nearestCity = _this select 6;
//_maxZombies = _this select 7;


_zombied = (_x getVariable ["zombieSpawn",-0.1]);
_dateNow = (DateToNumber date);
_age = (_dateNow - _zombied) * 525948;
if (_age > 1) then {
	_x setVariable ["zombieSpawn",_dateNow,true];
	[_x] call building_spawnZombies;
};		