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
_maxZombies = 10;
	
diag_log ("Type: " +str(_type));


//diag_log("SPAWN CHECKING: Starting");
	_locationstypes = ["NameCityCapital","NameCity","NameVillage"];
	_nearestCity = nearestLocations [getPos player, _locationstypes, _radius];
	_townname = text (_nearestCity select 0);
	_position = getPosATL player;
	_nearbytype = type (_nearestCity select 0);
	
switch (_nearbytype) do {
	case "NameVillage": {
		//_radius = 250; 
		_maxZombies = 30;
	};
	case "NameCity": {
		//_radius = 300; 
		_maxZombies = 40;
	};
	case "NameCityCapital": {
		//_radius = 400; 
		_maxZombies = 50;
	};
};

_spawnZombies = count (_position nearEntities ["zZombie_Base",_radius+100]) < _maxZombies;

if ("ItemMap_Debug" in items player) then {
	deleteMarkerLocal "MaxZeds";
	deleteMarkerLocal "Counter";
	_markerstr = createMarkerLocal ["MaxZeds", _position];
	_markerstr setMarkerColorLocal "ColorRed";
	_markerstr setMarkerShapeLocal "ELLIPSE";
	_markerstr setMarkerBrushLocal "Border";
	_markerstr setMarkerSizeLocal [_radius, _radius];

	_markerstr1 = createMarkerLocal ["Counter", _position];
	_markerstr1 setMarkerColorLocal "ColorYellow";
	_markerstr1 setMarkerShapeLocal "ELLIPSE";
	_markerstr1 setMarkerBrushLocal "Border";
	_markerstr1 setMarkerSizeLocal [_radius+100, _radius+100];			
};
	

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
	case "both": {
		//[_position, _maxZombies] call wild_spawnZombies;
		_nearbyBuildings = nearestObjects [_position, dayz_ZombieBuildings, _radius];
		_nearbyCount = count _nearbyBuildings;
		if (_nearbyCount > 0) then {
			[_radius, _position, _inVehicle, _dateNow, _age, _locationstypes, _nearestCity, _nearbyBuildings] call player_spawnlootCheck;
			if (_spawnZombies) then {
				[_radius, _position, _inVehicle, _dateNow, _age, _locationstypes, _nearestCity, _maxZombies, _nearbyBuildings] call player_spawnzedCheck;
			};
		};
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