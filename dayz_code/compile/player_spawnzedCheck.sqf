private["_isAir","_inVehicle","_dateNow","_maxZombies","_spawnDelay","_age","_radius","_locationstypes","_nearestCity","_position","_nearbytype","_tooManyZs","_nearbyplayer","_type","_config","_canZombie","_dis","_zombied","_bPos","_zombiesNum","_withinRange"];

_isAir = vehicle player iskindof "Air";
_inVehicle = (vehicle player != player);
_dateNow = (DateToNumber date);
_maxZombies = dayz_maxLocalZombies;
_age = -1;

// If they just got out of a vehicle, boost their per-player zombie limit by 5 in hopes of allowing insta-spawn zombies
if (dayz_inVehicle and !_inVehicle) then {
    dayz_spawnWait = -300;
    //_maxZombies = _maxZombies + 2;
};
dayz_inVehicle = _inVehicle;


//diag_log("SPAWN CHECKING: Starting");
	_radius = 300; 
	_locationstypes = ["NameCityCapital","NameCity","NameVillage","NameLocal"];
	_nearestCity = nearestLocations [getPos player, _locationstypes, _radius];
	
	_position = getPosATL player;
	if ((count _nearestCity) > 0) then {
		_position = position (_nearestCity select 0);  	
	};
	
	
	_nearbytype = type (_nearestCity select 0);
	
switch (_nearbytype) do {
	case "NameLocal": {
		_radius = 200; 
		_maxZombies = 30;
	};
	case "NameVillage": {
		_radius = 250; 
		_maxZombies = 40;
	};
	case "NameCity": {
		_radius = 300; 
		_maxZombies = 45;
	};
	case "NameCityCapital": {
		_radius = 400; 
		_maxZombies = 50;
	};
	default {
		_radius = 180; 
		_maxZombies = 20;
	};	
};
if (_inVehicle) then {
	_maxZombies = _maxZombies / 2;
};
	
	_tooManyZs = count (_position nearEntities ["zZombie_Base",_radius]) > _maxZombies;
	_nearby = nearestObjects [player, ["Building"], _radius];
	//_nearby = _position nearObjects ["building",_radius]; 
	{
        _type = typeOf _x;
        _config =       configFile >> "CfgBuildingLoot" >> _type;
        _canZombie = isClass (_config);
        _dis = _x distance player;	
		
		if (_canZombie) then {
		//if ((time - dayz_spawnWait) > dayz_spawnDelay) then {
			if (dayz_spawnZombies < _maxZombies) then {
				if (!_tooManyZs) then {
					private["_zombied"];
					_zombied = (_x getVariable ["zombieSpawn",-0.1]);
					_dateNow = (DateToNumber date);
					_age = (_dateNow - _zombied) * 525948;
					//diag_log(format["Date: %1 | ZombieSpawn: %2 | age: %3 | building: %4 (%5)", _dateNow, _zombied, _age, str(_x), _dis]);
					if (_age > 1) then {
						_bPos = getPosATL _x;
						_zombiesNum = count (_bPos nearEntities ["zZombie_Base",(((sizeOf _type) * 2) + 10)]);
						_withinRange = _x distance player < _radius;
						//diag_log ("ZombiesNum: " +str(_zombiesNum));
						if ((_zombiesNum == 0) and _withinRange) then {
						//if (_zombiesNum == 0) then {
						//Randomize Zombies
							_x setVariable ["zombieSpawn",_dateNow,true];
							[_x] call building_spawnZombies;
						};
					};
				};
			} else {
				dayz_spawnWait = time;
				dayz_spawnZombies = count (_position nearEntities ["zZombie_Base",_radius]);
			};
		};
	} forEach _nearby;
	_running = 0