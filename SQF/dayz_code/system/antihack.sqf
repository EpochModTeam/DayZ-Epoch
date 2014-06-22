/*
	Anti-Teleport - Created By Razor / Refactored By Alby & CopyPasted to Epoch by Skaronator
*/

private ["_log","_playerName","_playerUID","_al1veOnce","_debug","_lastpos","_lastheight","_lasttime","_lastVehicle","_v","_h","_topv","_toph","_curpos","_distance","_acceptableDistance","_curtime","_difftime","_plant","_curheight","_speed","_topSpeed","_terrainHeight","_differenceCheck","_lastPosVar","_safetyVehicle","_curPos"];

waitUntil {vehicle player == player};

[] spawn {
	private ["_playerName","_playerUID"];
	_playerName = name player;
	_playerUID = getPlayerUID player;
	while {1 == 1} do {
		if (typeName player != "OBJECT") then {
			PVDZE_atp = format["WARNING typename error for player UID#%1", _playerUID];
			publicVariableServer "PVDZE_atp";
			//forceEnd;
			endMission "LOSER";
			sleep 10; //Bypass spam
		};
	};
	endMission "LOSER";
};

[] spawn {
	_playerName = name player;
	_playerUID = getPlayerUID player;
	while {true} do {
		sleep 5;
	};
	PVDZE_atp = format["WARNING PLAYER WITH NAME (%1) && UID# (%2) HAS CHANGED THE TRUE VALUE TO FALSE", _playerName, _playerUID];
	publicVariableServer "PVDZE_atp";
	endMission "LOSER";
	sleep 10;
};

[] spawn {
	_al1veOnce = false;
	if (!_al1veOnce) then {
		private [ "_loc", "_plant","_debug"];
		_debug = getMarkerpos "respawn_west";
		// check that plants libs are properly loaded
		// thanks to Tansien the great
		// run only once per character life
		{
			_plant = _x createVehicleLocal _debug;
			sleep 0.1;
			if (sizeOf _x == 0) exitWith { 
				PVDZE_atp = "Plants texture hack for type " + _x;
				publicVariableServer "PVDZE_atp";
				endMission "LOSER";
			};
			deleteVehicle _plant;
		} count ["grass", "prunus", "picea", "fallentree", "phragmites", "acer", "amygdalusn", "Brush", "fiberplant", "amygdalusc", "boulder"];
		diag_log format [ "%1: Plants libs tests done!", __FILE__];
	};
	_al1veOnce = true;
};

while {1 == 1} do {
	_debug = getMarkerpos "respawn_west";
	_lastpos = getPosATL (vehicle player);
	_lastheight = (ATLtoASL _lastpos) select 2;
	_lasttime = diag_ticktime;
	_lastVehicle = vehicle player;

	// freefall detection:
	_v = 0;
	_h = 0;
	_topv = 0;
	_toph = 0;

	while {((typeName player == "OBJECT") && {((player in playableUnits) || {(alive player)})})} do {
		_curpos = getPosATL (vehicle player);
		_distance = _lastpos distance _curpos;
		_curtime = diag_ticktime;
		_difftime = _curtime - _lasttime;
		_acceptableDistance = if (_lastVehicle isKindOf "Plane") then { 15; } else { 10; };

		if ((_distance > _acceptableDistance) || {(_difftime > 1)}) then {
			_curheight = (ATLtoASL _curpos) select 2;
			_speed = _distance / _difftime;
			_topSpeed = if (_acceptableDistance == 15) then { 20; } else { 10; };
			if (vehicle player != player) then {
				if (_acceptableDistance == 15) then {
					_topSpeed = (getNumber (configFile >> "CfgVehicles" >> typeOf (vehicle player) >> "maxSpeed")) max 500;
				} else {
					_topSpeed = (getNumber (configFile >> "CfgVehicles" >> typeOf (vehicle player) >> "maxSpeed")) min 500;
				};
			};
			_terrainHeight = getTerrainHeightASL [_curpos select 0, _curpos select 1];
			_safetyVehicle = vehicle player;
			if (_lastVehicle == vehicle player) then {
				if ((_speed > _topSpeed) && (alive player) && ((driver (vehicle player) == player) || (isNull (driver (vehicle player)))) && (_debug distance _lastpos > 3000) && !((vehicle player == player) && (_curheight < _lastheight) && ((_curheight - _terrainHeight) > 1))) then {
					(vehicle player) setposATL  _lastpos;
					PVDZE_atp = format["TELEPORT REVERT for player UID#%1 from %2 to %3, %4 meters, now at %5", getPlayerUID player, _lastpos, _curPos, round(_lastpos distance _curpos), getPosATL player];
					publicVariableServer "PVDZE_atp";
				} else {
					_lastpos = _curpos;
					_lastheight = _curheight;
				};
				_lasttime = _curtime;
			};
			if (_safetyVehicle == vehicle player) then {
				_lastVehicle = vehicle player;
			};

		};
		sleep 0.25;
	};
	sleep 0.1;
};
endMission "LOSER";
