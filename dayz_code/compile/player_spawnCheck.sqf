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
_radius = 300; 
_position = getPosATL player;
//_maxZombies = 10;
	
//diag_log ("Type: " +str(_type));


//diag_log("SPAWN CHECKING: Starting");
	//_locationstypes = ["NameCityCapital","NameCity","NameVillage"];
	//_nearestCity = nearestLocations [getPos player, _locationstypes, _radius/2];
	//_townname = text (_nearestCity select 0);	
	//_nearbytype = type (_nearestCity select 0);
/*	
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
*/

_spawnZombies = count (_position nearEntities ["zZombie_Base",_radius+100]) < _maxZombies;

if ("ItemMap_Debug" in items player) then {
	deleteMarkerLocal "MaxZeds";
	deleteMarkerLocal "Counter";
	deleteMarkerLocal "Loot30";
	deleteMarkerLocal "Loot120";
	_markerstr = createMarkerLocal ["MaxZeds", _position];
	_markerstr setMarkerColorLocal "ColorYellow";
	_markerstr setMarkerShapeLocal "ELLIPSE";
	_markerstr setMarkerBrushLocal "Border";
	_markerstr setMarkerSizeLocal [_radius, _radius];

	_markerstr1 = createMarkerLocal ["Counter", _position];
	_markerstr1 setMarkerColorLocal "ColorRed";
	_markerstr1 setMarkerShapeLocal "ELLIPSE";
	_markerstr1 setMarkerBrushLocal "Border";
	_markerstr1 setMarkerSizeLocal [_radius+100, _radius+100];			
	
	_markerstr2 = createMarkerLocal ["Loot30", _position];
	_markerstr2 setMarkerColorLocal "ColorRed";
	_markerstr2 setMarkerShapeLocal "ELLIPSE";
	_markerstr2 setMarkerBrushLocal "Border";
	_markerstr2 setMarkerSizeLocal [30, 30];

	_markerstr3 = createMarkerLocal ["Loot120", _position];
	_markerstr3 setMarkerColorLocal "ColorBlue";
	_markerstr3 setMarkerShapeLocal "ELLIPSE";
	_markerstr3 setMarkerBrushLocal "Border";
	_markerstr3 setMarkerSizeLocal [120, 120];	
};
	
/*
switch (_type) do {
	case "Zeds": {
		_nearby = nearestObjects [_position, dayz_ZombieBuildings, _radius];
	};
	case "both": {
		_nearby = nearestObjects [_position, ["building"], _radius];
	};
	case "Loot": {
		_nearby = nearestObjects [_position, dayz_LootBuildings, _radius];
		};
	};
*/

_nearby = nearestObjects [_position, ["building"], _radius];
_nearbyCount = count _nearby;
if (_nearbyCount < 1) exitwith {};

{
	_type = typeOf _x;
	_config = 		configFile >> "CfgBuildingLoot" >> _type;
	_canLoot = 		isClass (_config);
	_dis = _x distance player;
	if ((_dis < 120) and (_dis > 30) and _canLoot and !_inVehicle) then {
		[_radius, _position, _inVehicle, _dateNow, _age, _locationstypes, _nearestCity] call player_spawnlootCheck;
	};
	if ((time - dayz_spawnWait) > dayz_spawnDelay) then {
		if (dayz_spawnZombies < dayz_maxLocalZombies) then {
	if (_spawnZombies) then {
		[_radius, _position, _inVehicle, _dateNow, _age, _locationstypes, _nearestCity, _maxZombies] call player_spawnzedCheck;
};
		} else {
			dayz_spawnWait = time;
			dayz_spawnZombies = 0;
		};
	};
} forEach _nearby;