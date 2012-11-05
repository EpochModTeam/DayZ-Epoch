_isAir = vehicle player iskindof "Air";
_inVehicle = (vehicle player != player);
_fastRun = _this select 0;
_dateNow = (DateToNumber date);
_age = -1;
if (!_inVehicle) then {
	_position = getPosATL player;
	//waitUntil{_position nearObjectsReady 200};
	_nearby = _position nearObjects ["building",200]; //nearestObjects [player, ["building"], 200];
	_tooManyZs = {alive _x} count (_position nearEntities ["zZombie_Base",400]) > dayz_maxLocalZombies;
	{
		_type = typeOf _x;
		_config = 		configFile >> "CfgBuildingLoot" >> _type;
		_canLoot = 		isClass (_config);		
		if (_canLoot) then {			
			_dis = _x distance player;
			if ((_dis < 120) and (_dis > 30)) then {
				_looted = (_x getVariable ["looted",-0.1]);
				_cleared = (_x getVariable ["cleared",true]);
				/*
				if(isServer) then {
					_dateNow = (DateToNumber date);
					_age = (_dateNow - _looted) * 525948;
				} else {
					_dateNow = serverTime;
					_age = (_dateNow * 60) - _looted;
				};
				*/
				_dateNow = (DateToNumber date);
				_age = (_dateNow - _looted) * 525948;
				//diag_log ("SPAWN LOOT: " + _type + " Building is " + str(_age) + " old" );
				if ((_age > 10) and (!_cleared) and !_inVehicle) then {
					_nearByObj = nearestObjects [(getPosATL _x), ["WeaponHolder","WeaponHolderBase"],((sizeOf _type)+5)];
					{deleteVehicle _x} forEach _nearByObj;
					_x setVariable ["cleared",true,true];
					_x setVariable ["looted",_dateNow,true];
				};
				if ((_age > 10) and (_cleared) and !_inVehicle) then {
					//Register
					_x setVariable ["looted",_dateNow,true];
					//cleanup
					_handle = [_x,_fastRun] spawn building_spawnLoot;
					waitUntil{scriptDone _handle};
				};
			};
			if ((time - dayz_spawnWait) > dayz_spawnDelay) then {
				if (dayz_spawnZombies < dayz_maxLocalZombies) then {
					if (!_tooManyZs) then {
						private["_zombied"];
						_zombied = (_x getVariable ["zombieSpawn",-0.1]);
						_dateNow = (DateToNumber date);
						_age = (_dateNow - _zombied) * 525948;
						if (_age > 5) then {
							_bPos = getPosATL _x;
							_zombiesNum = {alive _x} count (_bPos nearEntities ["zZombie_Base",(((sizeOf _type) * 2) + 10)]);
							if (_zombiesNum == 0) then {
								//Randomize Zombies
								_x setVariable ["zombieSpawn",_dateNow,true];
								_handle = [_x,_fastRun] spawn building_spawnZombies;
								waitUntil{scriptDone _handle};
							//} else {
								//_x setVariable ["zombieSpawn",_dateNow,true];
							};
						};
					};
				} else {
					dayz_spawnWait = time;
					dayz_spawnZombies = 0;
				};
			};
		};
		if (!_fastRun) then {
			sleep 0.1;
		};
	} forEach _nearby;
};