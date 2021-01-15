local _age = -1;
local _position = [player] call fnc_getPos;
local _radius = 200; // distance from player to perform checks.
local _spawnZedRadius = 20;

// Current zombies
local _zeds = entities "zZombie_Base";
dayz_currentGlobalZombies = count _zeds;
dayz_spawnZombies = 0;
dayz_CurrentNearByZombies = 0;
dayz_maxControlledZombies = dayz_maxLocalZombies;  // This variable is also used in building_spawnZombies
{
	if ((_x distance _position) < _radius && {alive _x}) then {
		if (local _x) then {
			dayz_spawnZombies = dayz_spawnZombies + 1;
		};
		dayz_CurrentNearByZombies = dayz_CurrentNearByZombies + 1;
	};
} count _zeds;

// Current loot spawns
dayz_currentWeaponHolders = count (_position nearObjects ["ReammoBox",_radius]);

// In vehicle check
local _vehicle = vehicle player;
local _inVehicle = (_vehicle != player);
local _doNothing = false;

if (_inVehicle) then {
    local _Controlledzeddivided = 0;
    //exit if too fast
    if ((speed _vehicle) > 25) exitwith {_doNothing = true;};

    //Crew can spawn zeds.
    if ((count (crew _vehicle)) > 1) then {
        _Controlledzeddivided = 2;

        //Dont allow driver to spawn if we have other crew members.
    	if (player == driver _vehicle) exitwith {_doNothing = true;};
    } else {
        _Controlledzeddivided = 4;
    };

    if (_Controlledzeddivided > 0) then {
        dayz_maxControlledZombies = round(dayz_maxControlledZombies / _Controlledzeddivided);
    };
};

if (_doNothing) exitWith {};

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
		dayz_spawnZombies, dayz_maxControlledZombies, _radius, round diag_fpsmin,dayz_currentGlobalZombies,
		dayz_maxGlobalZeds, dayz_CurrentNearByZombies, dayz_maxNearByZombies, dayz_currentWeaponHolders,dayz_maxMaxWeaponHolders]);
};*/

// nearObjects is faster than nearestObjects when sorting by distance isn't needed
// "Building" includes House and all of its child classes (Crashsite, IC_Fireplace1, IC_Tent, etc.)
local _nearby = _position nearObjects ["Building",_radius];
dayz_spawnZombies = dayz_spawnZombies max floor(dayz_maxControlledZombies*.8);
if (dayz_spawnZombies > 0) then { _spawnZedRadius = _spawnZedRadius * 3;};

//Spawn Zeds & loot in buildings
local _serverTime = serverTime; // Get the current time once per cycle.
{
    local _type = typeOf _x;
    local _config = missionConfigFile >> "CfgLoot" >> "Buildings" >> _type;
    local _canSpawn = isClass (_config);

    if (_canSpawn) then {
	    local _dis = _x distance player;
		local _islocal = _x getVariable ["", false]; // object created locally via TownGenerator.

		//Loot
		if (dayz_currentWeaponHolders < dayz_maxMaxWeaponHolders) then { // Check this first
			local _checkLoot = (count (getArray (_config >> "lootPos"))) > 0;
			if (!_inVehicle && {(_dis < 125) && (_dis > 15) && _checkLoot}) then {
				local _looted = (_x getVariable ["looted",_serverTime]);
				local _age = _serverTime - _looted; // if age is zero then the building hasn't been looted before.
				
				if ((_age == 0) || {_age > getNumber(_config >> "lootRefreshTimer")}) then {
					_x setVariable ["looted",_serverTime,!_islocal];
					[_x,_type,_config] call building_spawnLoot;
				};
			};
		};

    //Zeds
		if (getNumber(_config >> "zombieChance") > 0) then {
			if (_dis > _spawnZedRadius) then {
				local _zombied = (_x getVariable ["zombieSpawn",_serverTime]);
				local _age = _serverTime - _zombied;
				if ((_age == 0) || {_age > 300}) then {
					//Make sure crash sites always spawn Zeds
					local _isWreck = _x isKindOf "CrashSite";
					local _bPos = getPosATL _x;
					local _zombiesNum = 0;
					
					if (!_isWreck) then {
						if ((dayz_spawnZombies < dayz_maxControlledZombies) && {dayz_CurrentNearByZombies < dayz_maxNearByZombies} && {dayz_currentGlobalZombies < dayz_maxGlobalZeds}) then {
							_zombiesNum = count (_bPos nearEntities ["zZombie_Base",(((sizeOf _type) * 2) + 10)]);
							if (_zombiesNum == 0) then {
								_x setVariable ["zombieSpawn",_serverTime,!_islocal];
								[_x,_bPos,_config,false] call building_spawnZombies;
							};
						};
					} else {
						_zombiesNum = count (_bPos nearEntities ["zZombie_Base",(((sizeOf _type) * 2) + 30)]);
					   if (_zombiesNum == 0) then {[_x,_bPos,_config,_isWreck] call building_spawnZombies;};
					};
				};
			};
		};
    };
} count _nearby;
