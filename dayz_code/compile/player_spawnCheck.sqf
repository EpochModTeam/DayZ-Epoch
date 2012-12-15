_isAir = vehicle player iskindof "Air";
_inVehicle = (vehicle player != player);
_dateNow = (DateToNumber date);
_maxZombies = dayz_maxLocalZombies;

_age = -1;
// If they just got out of a vehicle, boost their per-player zombie limit by 5 in hopes of allowing insta-spawn zombies

if (dayz_inVehicle and !_inVehicle) then {
    dayz_spawnWait = -300;
    //_maxZombies = _maxZombies + 2;
};
dayz_inVehicle = _inVehicle;

//if (((time - dayz_spawnWait) < dayz_spawnDelay) or ((time - dayz_lootWait) < dayz_lootDelay)) exitWith {diag_log("Skipping Check since neither loot or zombies are ready");};
//if (((time - dayz_spawnWait) < dayz_spawnDelay) and ((time - dayz_lootWait) < dayz_lootDelay)) exitWith {};

//diag_log("SPAWN CHECKING: Starting");
	_radius = 300; 
	_locationstypes = ["NameCityCapital","NameCity","NameVillage","NameLocal"];
	_nearestCity = nearestLocations [getPos player, _locationstypes, _radius];
	
	//_nearestCity = [_locationstypes,[position player,600],false] call bis_fnc_locations;
	//diag_log ("0: " +str(_nearestCity));
	
	_position = getPosATL player;
	if ((count _nearestCity) > 0) then {
		_position = position (_nearestCity select 0);  	
	};
	
	_nearbytype = type (_nearestCity select 0);
	_nearby = _position nearObjects ["Building",_radius];
	
switch (_nearbytype) do {
	default {
		_maxZombies = 20;
	};
	case "NameLocal": {
		_maxZombies = 40;
	};
	case "NameVillage": {
		_maxZombies = 60;
	};
	case "NameCity": {
		_maxZombies = 80;
	};
	case "NameCityCapital": {
		_maxZombies = 100;
	};
};

//diag_log ("nearbytype: " +str(_nearbytype));

if (_inVehicle) then {
	_maxZombies = _maxZombies / 2;
};

	_age = 0;
	_tooManyZs = count (_position nearEntities ["zZombie_Base",200]) > _maxZombies;
	//diag_log("Too Many Zeds: " +str(_tooManyZs));
    //diag_log(format["SPAWN CHECK: Building count is %1", count _nearby]);
	_count = ({alive _x} count allMissionObjects "zZombie_Base");
	//hint "Total Zeds: " +str(_count));
	hint format["Total Zeds %1",_count];
	diag_log ("Total Zeds: " +str(_count));
    {
		//diag_log("SPAWN CHECK: Start of Loop");
        _type = typeOf _x;
        _config =       configFile >> "CfgBuildingLoot" >> _type;
        _canZombie = isClass (_config);
        _canLoot = ((count (getArray (_config >> "lootPos"))) > 0);
        _dis = _x distance player;
		//diag_log ("Type: " +str(sizeOf _type));


		if ((!_inVehicle) and (_canLoot)) then {    
			_keepAwayDist = ((sizeOf _type)+5);
			_isNoone =  {isPlayer _x} count (_x nearEntities ["CAManBase",_keepAwayDist]) == 0;
			if (_isNoone) then {
				_looted = (_x getVariable ["looted",0.0]);
				_cleared = (_x getVariable ["cleared",true]);
				_dateNow = (DateToNumber date);
				_age = (_dateNow - _looted) * 525948;
				if (_age > 8) then {
					_x setVariable ["looted",_dateNow,true];
					[_x] call building_spawnLoot;
				};
			};
		};
		
		if (_canZombie) then {
			if (dayz_spawnZombies < _maxZombies) then {
				if (!_tooManyZs) then {
					private["_zombied"];
					_zombied = (_x getVariable ["zombieSpawn",-0.1]);
					_dateNow = (DateToNumber date);
					_age = (_dateNow - _zombied) * 525948;
					diag_log(format["Date: %1 | ZombieSpawn: %2 | age: %3 | building: %4 (%5)", _dateNow, _zombied, _age, str(_x), _dis]);
					if (_age > 1) then {
						_bPos = getPosATL _x;
						_zombiesNum = count (_bPos nearEntities ["zZombie_Base",(((sizeOf _type) * 2) + 10)]);	
						diag_log ("ZombiesNum: " +str(_zombiesNum));
						if (_zombiesNum == 0) then {
							//Randomize Zombies
							_x setVariable ["zombieSpawn",_dateNow,true];
							[_x] call building_spawnZombies;
						};
					};
				};
			//} else {
				//dayz_spawnWait = time;
				//dayz_spawnZombies = 0;
			};
		};
	} forEach _nearby;