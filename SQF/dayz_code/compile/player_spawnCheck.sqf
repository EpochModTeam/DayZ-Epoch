private ["_type","_inVehicle","_dateNow","_maxWildZombies","_age","_radius","_position","_markerstr","_markerstr1","_markerstr2","_markerstr3","_nearByObj","_handle","_looted","_cleared","_zombied","_config","_canLoot","_dis","_players","_nearby","_nearbyCount","_onTheMove","_soundLimit"];
//_t1 = diag_tickTime;

_type = _this select 0;
_inVehicle = (vehicle player != player);
_onTheMove = (speed (vehicle player) > 10);
_dateNow = (DateToNumber date);
_maxWildZombies = 3;
_age = -1;
_radius = 200; 
_position = getPosATL player;

dayz_spawnZombies = 0;
dayz_CurrentZombies = 0;

// experiment with adding fly sounds locally for both zombies and players.
_soundLimit = 3;
{
	if (!alive _x) then {
		[player,"flysound",1,true] call dayz_zombieSpeak;
		_soundLimit = _soundLimit - 1;
	};
	if (_soundLimit == 0) exitWith {};
} foreach (nearestObjects [player, ["CAManBase"], 8]);

_players = _position nearEntities ["CAManBase",_radius+200];
dayz_maxGlobalZombies = dayz_maxGlobalZombiesInit;
{
	if(isPlayer _x) then {
		dayz_maxGlobalZombies = dayz_maxGlobalZombies + dayz_maxGlobalZombiesIncrease;
	} else {
		if (local _x) then {
			dayz_spawnZombies = dayz_spawnZombies + 1;
		};
		dayz_CurrentZombies = dayz_CurrentZombies + 1;
	};
} foreach _players;

if ("ItemMap_Debug" in items player) then {
	deleteMarkerLocal "MaxZeds";
	deleteMarkerLocal "Counter";
	deleteMarkerLocal "Loot30";
	deleteMarkerLocal "Loot120";
	deleteMarkerLocal "Agro80";
	
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
	
	_markerstr2 = createMarkerLocal ["Agro80", _position];
	_markerstr2 setMarkerColorLocal "ColorRed";
	_markerstr2 setMarkerShapeLocal "ELLIPSE";
	_markerstr2 setMarkerBrushLocal "Border";
	_markerstr2 setMarkerSizeLocal [80, 80];

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

diag_log ("SpawnWait: " +str(time - dayz_spawnWait));
diag_log ("LocalZombies: " +str(dayz_spawnZombies) + "/" +str(dayz_maxLocalZombies));
diag_log ("GlobalZombies: " +str(dayz_CurrentZombies) + "/" +str(dayz_maxGlobalZombies));
diag_log ("dayz_maxCurrentZeds: " +str(dayz_maxCurrentZeds) + "/" +str(dayz_maxZeds));

};
	

_nearby = _position nearObjects ["building",_radius];
_nearbyCount = count _nearby;
if (_nearbyCount < 1) exitwith 
{
	if ((dayz_spawnZombies < _maxWildZombies) and !_inVehicle)  then {
		[_position] call wild_spawnZombies;
	};
};


{
	_type = typeOf _x;
	_config = 		configFile >> "CfgBuildingLoot" >> _type;
	_canLoot = 		isClass (_config);
	
	if(_canLoot) then {

		_dis = _x distance player;

		//Loot
		if ((_dis < 120) and (_dis > 30) and !_inVehicle) then {
			_looted = (_x getVariable ["looted",-0.1]);
			_cleared = (_x getVariable ["cleared",true]);
			_dateNow = (DateToNumber date);
			_age = (_dateNow - _looted) * 525948;
			//diag_log ("SPAWN LOOT: " + _type + " Building is " + str(_age) + " old" );
			if ((_age > 10) and (!_cleared)) then {
				_nearByObj = nearestObjects [(getPosATL _x), ["WeaponHolder","WeaponHolderBase"],((sizeOf _type)+5)];
				{deleteVehicle _x} forEach _nearByObj;
				_x setVariable ["cleared",true,true];
				_x setVariable ["looted",_dateNow,true];
			};
			if ((_age > 10) and (_cleared)) then {
				//Register
				_x setVariable ["looted",_dateNow,true];
				//cleanup
				_handle = [_x] spawn building_spawnLoot;
				waitUntil{scriptDone _handle};
			};
		};

		// do not spawn zeds if player is moving faster then 10kmh
		if (!_onTheMove) then {
			//Zeds
			if ((time - dayz_spawnWait) > dayz_spawnDelay) then {
				if (dayz_maxCurrentZeds < dayz_maxZeds) then {
					if (dayz_CurrentZombies < dayz_maxGlobalZombies) then {
						if (dayz_spawnZombies < dayz_maxLocalZombies) then {
								//[_radius, _position, _inVehicle, _dateNow, _age, _locationstypes, _nearestCity, _maxZombies] call player_spawnzedCheck;
								_zombied = (_x getVariable ["zombieSpawn",-0.1]);
								_dateNow = (DateToNumber date);
								_age = (_dateNow - _zombied) * 525948;
								if (_age > 3) then {
									_x setVariable ["zombieSpawn",_dateNow,true];
									[_x] call building_spawnZombies;
								};
						} else {
							dayz_spawnWait = time;
						};
					};
				};
			};
		};
	};
} forEach _nearby;
// ["player_spawnCheck.sqf",(diag_tickTime - _t1)] call fnc_dump;