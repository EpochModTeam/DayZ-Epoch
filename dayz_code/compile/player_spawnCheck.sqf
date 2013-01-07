private["_type","_isAir","_inVehicle","_dateNow","_maxZombies","_maxWildZombies","_age","_nearbyBuildings","_radius","_locationstypes","_nearestCity","_position","_nearbytype"];
_type = _this select 0;
_Keepspawning = _this select 1;
_isAir = vehicle player iskindof "Air";
_inVehicle = (vehicle player != player);
_dateNow = (DateToNumber date);
_maxZombies = dayz_maxLocalZombies;
_maxWildZombies = 3;
_age = -1;
_nearbyBuildings = [];
_radius = 200; 
_maxZombies = 20;
	
diag_log ("Type: " +str(_type));


//diag_log("SPAWN CHECKING: Starting");
	_radius = 200; 
	_locationstypes = ["NameCityCapital","NameCity","NameVillage"];
	_nearestCity = nearestLocations [getPos player, _locationstypes, _radius];
	_townname = text (_nearestCity select 0);
	_position = getPosATL player;
	_nearbytype = type (_nearestCity select 0);
	
switch (_nearbytype) do {
	case "NameVillage": {
		_radius = 250; 
		_maxZombies = 30;
	};
	case "NameCity": {
		_radius = 300; 
		_maxZombies = 40;
	};
	case "NameCityCapital": {
		_radius = 400; 
		_maxZombies = 50;
	};
};

	_spawnZombies = count (_position nearEntities ["zZombie_Base",_radius]) < _maxZombies;

switch (_type) do {
	case "Zeds": {
		if (_spawnZombies) then {
			//_nearbyBuildings = nearestObjects [_position, ["building"], _radius];
			_nearbyBuildings = nearestObjects [_position, dayz_LootBuildings, _radius];
			_nearbyCount = count _nearbyBuildings;
			if (_nearbyCount > 0) then {
			[_radius, _position, _inVehicle, _dateNow, _age, _locationstypes, _nearestCity, _maxZombies, _nearbyBuildings] call player_spawnzedCheck;
		};	
	};
	};
	case "Wild": {
		//[_position, _maxZombies] call wild_spawnZombies;
	};
	case "Loot": {
		//_nearbyBuildings = nearestObjects [_position, ["building"], _radius];
		_nearbyBuildings = nearestObjects [_position, dayz_ZombieBuildings, _radius];
		_nearbyCount = count _nearbyBuildings;
		if (_nearbyCount > 0) then {
		[_radius, _position, _inVehicle, _dateNow, _age, _locationstypes, _nearestCity, _nearbyBuildings] call player_spawnlootCheck;
		};
	};
};