private["_type","_isAir","_inVehicle","_dateNow","_maxZombies","_maxWildZombies","_age","_nearbyBuildings","_radius","_locationstypes","_nearestCity","_position","_nearbytype"];
_type = _this select 0;
_isAir = vehicle player iskindof "Air";
_inVehicle = (vehicle player != player);
_dateNow = (DateToNumber date);
_maxZombies = dayz_maxLocalZombies;
_maxWildZombies = 3;
_age = -1;
_nearbyBuildings = [];
	
diag_log ("Type: " +str(_type));


//diag_log("SPAWN CHECKING: Starting");
	_radius = 300; 
	_locationstypes = ["NameCityCapital","NameCity","NameVillage","NameLocal"];
	_nearestCity = nearestLocations [getPos player, _locationstypes, _radius];
	_townname = text (_nearestCity select 0);
	
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
		_radius = 200; 
		_maxZombies = 20;
	};	
};

/*
if ((count _nearestCity) > 0) then {
	_markerstr = createMarker["markername_" +str (_townname), _position];
	_markerstr setMarkerText _townname;
	_markerstr setMarkerColor "ColorGreen";
	_markerstr setMarkerShape "ELLIPSE";
	_markerstr setMarkerBrush "Grid";
	_markerstr setMarkerSize [_radius, _radius];
};

	deleteMarker "Player_Marker_Radius";
	_markerstr = createMarker["Player_Marker_Radius", getPosATL player];
	_markerstr setMarkerColor "ColorRed";
	_markerstr setMarkerShape "ELLIPSE";
	_markerstr setMarkerBrush "Border";
	_markerstr setMarkerSize [_radius, _radius];
*/


switch (_type) do {
	case "Zeds": {
		_spawnZombies = count (getPosATL player nearEntities ["zZombie_Base",_radius]) < _maxZombies;
		if (_spawnZombies) then {
			_nearbyBuildings = _position nearObjects ["building",_radius];
			//_nearbyBuildings = nearestObjects [getPosATL player, dayz_ZombieBuildings, _radius]; //Cant be used Not all zones are covered yet (wrecks, Buildings outside towns)
			[_radius, _position, _inVehicle, _dateNow, _age, _locationstypes, _nearestCity, _maxZombies, _nearbyBuildings] call player_spawnzedCheck;
		};	
	};
	case "Loot": {
		_nearbyBuildings = _position nearObjects ["building",_radius];
		//_nearbyBuildings = nearestObjects [_position, dayz_LootBuildings, _radius]; //Cant be used Not all zones are covered yet (wrecks, Buildings outside towns)
		[_radius, _position, _inVehicle, _dateNow, _age, _locationstypes, _nearestCity, _nearbyBuildings] call player_spawnlootCheck;
	};
};