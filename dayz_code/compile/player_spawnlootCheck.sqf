_isAir = vehicle player iskindof "Air";
_inVehicle = (vehicle player != player);
_dateNow = (DateToNumber date);
_age = -1;

	_radius = 300; 
	_locationstypes = ["NameCityCapital","NameCity","NameVillage","NameLocal"];
	_nearestCity = nearestLocations [getPos player, _locationstypes, _radius];
	
	_position = getPosATL player;
	if ((count _nearestCity) > 0) then {
		_position = position (_nearestCity select 0);  	
	};

	//_nearby = _position nearObjects ["Building",_radius / 2];
	_nearby = nearestObjects [_position, ["Building"], _radius];
	
    {
		//diag_log("SPAWN CHECK: Start of Loop");
        _type = typeOf _x;
        _config =       configFile >> "CfgBuildingLoot" >> _type;
        _canZombie = isClass (_config);
        _canLoot = ((count (getArray (_config >> "lootPos"))) > 0);
        _dis = _x distance player;	

		if ((!_inVehicle) and (_canLoot)) then {    
			_keepAwayDist = ((sizeOf _type) + 5);
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
	} forEach _nearby;