private ["_handle","_cursor","_delMe","_first","_town","_day","_world","_nearestCity"];
while {true} do {
	_handle = [] spawn player_animalCheck;
	waitUntil{scriptDone _handle};
	
	//check monitored buildings
	_cursor = 0;
	_delMe = false;
	{
		private["_bPos","_isNoone"];
		_bPos = getPosATL _x;
		_isNoone = {isPlayer _x} count (_bPos nearEntities ["Man",200]) == 0;
		if (_isNoone) then {
			_x setVariable ["zombied",objNull,true];
			dayz_buildingMonitor set [_cursor,"DEL"];
			_delMe = true;
		};
		_cursor = _cursor + 1;
	} forEach dayz_buildingMonitor;
	if (_delMe) then {
		dayz_buildingMonitor = dayz_buildingMonitor - ["DEL"];
	};
	
	//Check if new day
	_day = round(360 * (dateToNumber date));
	if(dayz_currentDay != _day) then {
		dayz_sunRise = call world_sunRise;
		dayz_currentDay = _day;
	};

	_world = toUpper(worldName); //toUpper(getText (configFile >> "CfgWorlds" >> (worldName) >> "description"));
	_nearestCity = nearestLocations [getPos player, ["NameCityCapital","NameCity","NameVillage","NameLocal"],300];
	
	if (count _nearestCity > 0) then {
		_town = text (_nearestCity select 0); 
		if(dayz_PreviousTown == "Wilderness") then {
			dayz_PreviousTown = _town;
		};
		if(_town != dayz_PreviousTown) then {
			_first = [_world,_town,""] spawn BIS_fnc_infoText;
		};
		dayz_PreviousTown = _town;
	};

	//wait
	sleep 5;
};