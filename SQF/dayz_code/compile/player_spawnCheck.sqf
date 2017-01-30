private ["_isWreck","_maxControlledZombies","_looted","_zombied","_doNothing","_spawnZedRadius","_serverTime","_age","_nearbyBuildings","_position","_speed","_radius","_maxlocalspawned","_maxWeaponHolders","_currentWeaponHolders","_maxtoCreate","_inVehicle","_isAir","_isLand","_isSea","_Controlledzeddivided","_totalcrew","_nearby","_type","_config","_canSpawn","_dis","_checkLoot","_islocal","_bPos","_zombiesNum"];
_age = -1;
//_nearbyBuildings = [];
_position = [player] call FNC_GetPos;
_speed = speed (vehicle player);
_radius = 200; //150*0.707; Pointless Processing (106.5)
_spawnZedRadius = 20;

/*
//Tick Time
PVDZ_getTickTime = player;
publicVariableServer "PVDZ_getTickTime";
*/

//Total Counts
_maxlocalspawned = round(dayz_spawnZombies);
_maxControlledZombies = round(dayz_maxLocalZombies);
_maxWeaponHolders = round(dayz_maxMaxWeaponHolders);
_currentWeaponHolders = round(dayz_currentWeaponHolders);

//Limits (Land,Sea,Air)
_inVehicle = (vehicle player != player);
/*
	_isAir = vehicle player iskindof "Air";
	_isLand =  vehicle player iskindof "Land";
	_isSea =  vehicle player iskindof "Sea";
	if (_isLand) then { } else {  };
	if (_isAir) then { } else {  };
	if (_isSea) then { } else {  };
*/

_doNothing = false;
if (_inVehicle) then {
    _Controlledzeddivided = 0;
    //exit if too fast
    if (_speed > 25) exitwith {_doNothing = true;};

    //Crew can spawn zeds.
    _totalcrew = count (crew (vehicle player));
    if (_totalcrew > 1) then {
        _Controlledzeddivided = 2;
        
        //Dont allow driver to spawn if we have other crew members.
        if (player == driver (vehicle player)) exitwith {_doNothing = true;};
    } else {
        _Controlledzeddivided = 4;
    };
    
    if (_Controlledzeddivided > 0) then {
        _maxControlledZombies = round(_maxControlledZombies / _Controlledzeddivided);
        r_player_divideinvehicle = _Controlledzeddivided;
    };
};

if (_doNothing) exitwith {};

/*if ("ItemMap_Debug" in items player) then {
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

	diag_log ("LocalZombies: " +str(dayz_spawnZombies) + "/" +str(dayz_maxLocalZombies));

	//Logging
	diag_log (format["%1 Local.Agents: %2/%3, NearBy.Agents: %8/%9, Global.Agents: %6/%7, W.holders: %10/%11, (radius:%4m %5fps).","SpawnCheck",
		_maxlocalspawned, _maxControlledZombies, _radius, round diag_fpsmin,dayz_currentGlobalZombies, 
		dayz_maxGlobalZeds, dayz_CurrentNearByZombies, dayz_maxNearByZombies, _currentWeaponHolders,_maxWeaponHolders]);
};*/

// nearObjects is faster than nearestObjects when sorting by distance isn't needed
// "Building" includes House and all of its child classes (Crashsite, IC_Fireplace1, IC_Tent, etc.)
_nearby = _position nearObjects ["Building",_radius];
_maxlocalspawned = _maxlocalspawned max floor(_maxControlledZombies*.8);
if (_maxlocalspawned > 0) then { _spawnZedRadius = _spawnZedRadius * 3; };

//Spawn Zeds & loot in buildings
{
    _type = typeOf _x;
    _config = missionConfigFile >> "CfgLoot" >> "Buildings" >> _type;
    _canSpawn = isClass (_config);

    if (_canSpawn) then {
	    _dis = _x distance player;
		_checkLoot = (count (getArray (_config >> "lootPos"))) > 0;
		_islocal = _x getVariable ["", false]; // object created locally via TownGenerator.

		//Make sure wrecks always spawn Zeds
		_isWreck = _x isKindOf "CrashSite";
		
	//Loot
		if (getNumber(_config >> "lootChance") > 0) then {
			if (_currentWeaponHolders < _maxWeaponHolders) then {
				//Baisc loot check
				if ((_dis < 125) and (_dis > 30) and !_inVehicle and _checkLoot) then {
					_serverTime = serverTime;
					_looted = (_x getVariable ["looted",_serverTime]);
					_age = _serverTime - _looted;
					if ((_age == 0) or (_age > 900)) then { 
						_x setVariable ["looted",_serverTime,!_islocal];
						_x call building_spawnLoot;
						if (!(_x in dayz_buildingBubbleMonitor)) then {
							dayz_buildingBubbleMonitor set [count dayz_buildingBubbleMonitor, _x];
						};
						//diag_log [ diag_tickTime, "new loot at",_x,"age:", _age, "serverTime:", _serverTime];
					}/*
					else {
						diag_log [ diag_tickTime, "won't spawn loot at",_x,"age:", _age, "serverTime:", _serverTime];
					}*/;
				};
			};
		};

    //Zeds
		if (getNumber(_config >> "zombieChance") > 0) then {
			if (_dis > _spawnZedRadius) then {
				_serverTime = serverTime;
				_zombied = (_x getVariable ["zombieSpawn",_serverTime]);
				_age = _serverTime - _zombied;
				if ((_age == 0) or (_age > 300)) then { 			
					if (!_isWreck) then {
						if ((dayz_spawnZombies < _maxControlledZombies) and (dayz_CurrentNearByZombies < dayz_maxNearByZombies) and (dayz_currentGlobalZombies < dayz_maxGlobalZeds)) then {
							_bPos = getPosATL _x;
							_zombiesNum = {alive _x} count (_bPos nearEntities ["zZombie_Base",(((sizeOf _type) * 2) + 10)]);
						
							if (_zombiesNum == 0) then {    
								_x setVariable ["zombieSpawn",_serverTime,!_islocal];
								
								if (!(_x in dayz_buildingBubbleMonitor)) then {
									//add active zed to var
									dayz_buildingBubbleMonitor set [count dayz_buildingBubbleMonitor, _x];
								};
								
								//start spawn
								[_x] call building_spawnZombies;
							};							
							//diag_log (format["%1 building. %2", __FILE__, _x]);
						};
					} else {
						_bPos = getPosATL _x;
						_zombiesNum = {alive _x} count (_bPos nearEntities ["zZombie_Base",(((sizeOf _type) * 2) + 30)]);
						//Should be a wreck
					   if (_zombiesNum == 0) then { [_x,_isWreck] call building_spawnZombies; };
					};
				};
			};
		};
    };
} forEach _nearby;