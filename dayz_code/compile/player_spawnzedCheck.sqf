private["_radius","_position","_inVehicle","_dateNow","_age","_locationstypes","_nearestCity","_maxZombies","_nearby","_maxWildZombies","_tooManyZs","_tooManyWildZs","_type","_config","_canZombie","_dis","_zombied","_bPos","_zombiesNum","_withinRange","_spawnWildZs"];
_radius = _this select 0;
_position = _this select 1;
_inVehicle = _this select 2;
_dateNow = _this select 3;
_age = _this select 4;
_locationstypes = _this select 5;
_nearestCity = _this select 6;
_maxZombies = _this select 7;
_nearby = _this select 8;

diag_log ("Zed Started");
_maxWildZombies = 3;

// If they just got out of a vehicle, boost their per-player zombie limit by 5 in hopes of allowing insta-spawn zombies
if (dayz_inVehicle and !_inVehicle) then {
    dayz_spawnWait = -300;
    //_maxZombies = _maxZombies + 2;
};
dayz_inVehicle = _inVehicle;


if (_inVehicle) then {
	_maxZombies = _maxZombies / 2;
	_maxWildZombies = 0;
};
	_spawnZombies = count (_position nearEntities ["zZombie_Base",_radius]) < _maxZombies;
//	_tooManyZs = count (_position nearEntities ["zZombie_Base",_radius]) > _maxZombies;
//	_tooManyWildZs = count (_position nearEntities ["zZombie_Base",_radius]) > _maxWildZombies;
	{
		if (dayz_spawnZombies > _maxZombies) exitwith {};
		_zombied = (_x getVariable ["zombieSpawn",-0.1]);
		_dateNow = (DateToNumber date);
		_age = (_dateNow - _zombied) * 525948;
			//diag_log(format["Date: %1 | ZombieSpawn: %2 | age: %3 | building: %4 (%5)", _dateNow, _zombied, _age, str(_x), _dis]);
		if (_age > 1) then {
			//_withinRange = _x distance player < 200;
			//if (_withinRange) then {
				_x setVariable ["zombieSpawn",_dateNow,true];
				[_x] call building_spawnZombies;
			//};
		};	
	} forEach _nearby;
/*	
	if ((count _nearby) < 1) then {
	diag_log ("1");
		_spawnWildZs = count (_position nearEntities ["zZombie_Base",_radius]);
		if (_spawnWildZs < _maxWildZombies) then {
		diag_log ("2");
			if (!_tooManyWildZs) then {
			diag_log ("3");
				_zombiesNum = count (_position nearEntities ["zZombie_Base",(((sizeOf _type) * 2) + 10)]);
					//diag_log ("ZombiesNum: " +str(_zombiesNum));
				if (_zombiesNum == 0) then {
				diag_log ("4");
					[_position] call wild_spawnZombies;
				};
			};
		};	
	};
*/	