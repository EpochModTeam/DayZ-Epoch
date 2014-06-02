private ["_markerstr","_class","_name","_type","_position","_radiusA","_radiusB","_maptype","_config"];

if ("ItemMap_Debug" in items player) then {
	// _world = toUpper(worldName);
	_maptype = ["NameCityCapital","NameCity","NameVillage","NameLocal"];		_config = configFile >> "CfgWorlds" >> worldName >> "Names"; 
	for "_i" from 0 to (count _config -1) do {
		_class = _config select _i; //Returns a conif		_name = 		getText (_class >> "name");		_type = 		getText (_class >> "type");		_position = 	getArray (_class >> "position");		_radiusA = 		getNumber (_class >> "radiusA");		_radiusB = 		getNumber (_class >> "radiusB");
		if (_type in _maptype) then {
		//diag_log(format["Config Type, Name: %1 / Type: %2 / Position: %3, Passed",_name,_type,_position]);
	//		_rnd = random 1;
	//		_chance = 0.6;
	//		if (_rnd < _chance) then {
				_markerstr = createMarkerLocal ["markername_" +str (_name), _position];
				_markerstr setMarkerTextLocal _name;
				_markerstr setMarkerColorLocal "ColorGreen";
				_markerstr setMarkerShapeLocal "ELLIPSE";
				_markerstr setMarkerBrushLocal "Grid";
				_markerstr setMarkerSizeLocal [_radiusA, _radiusB];	
	//		};
		};	
	};
};