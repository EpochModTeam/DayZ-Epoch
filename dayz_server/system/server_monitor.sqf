[]execVM "\z\addons\dayz_server\system\s_fps.sqf"; //server monitor FPS (writes each ~181s diag_fps+181s diag_fpsmin*)

dayz_versionNo = 		getText(configFile >> "CfgMods" >> "DayZ" >> "version");
dayz_hiveVersionNo = 	getNumber(configFile >> "CfgMods" >> "DayZ" >> "hiveVersion");

if ((count playableUnits == 0) and !isDedicated) then {
	isSinglePlayer = true;
};

waitUntil{initialized};

diag_log "HIVE: Starting";

//Stream in objects
	/* STREAM OBJECTS */
		//Send the key
		_key = format["CHILD:302:%1:",dayZ_instance];
		_data = "HiveEXT" callExtension _key;

		diag_log "HIVE: Request sent";
		
		//Process result
		_result = call compile format ["%1",_data];
		_status = _result select 0;
		
		_myArray = [];
		if (_status == "ObjectStreamStart") then {
			_val = _result select 1;
			//Stream Objects
			diag_log ("HIVE: Commence Object Streaming...");
			for "_i" from 1 to _val do {
				_data = "HiveEXT" callExtension _key;
				_result = call compile format ["%1",_data];

				_status = _result select 0;
				_myArray set [count _myArray,_result];
				//diag_log ("HIVE: Loop ");
			};
			//diag_log ("HIVE: Streamed " + str(_val) + " objects");
		};
	
		_countr = 0;	
		_totalvehicles = 0;
		{
				
			//Parse Array
			_countr = _countr + 1;
		
			_idKey = 	_x select 1;
			_type =		_x select 2;
			_ownerID = 	_x select 3;
			_dir =		(_x select 4) select 0;
			_pos =		(_x select 4) select 1;
			_intentory=	_x select 5;
			_hitPoints=	_x select 6;
			_fuel =		_x select 7;
			_damage = 	_x select 8;
			
			if (_damage < 1) then {
				diag_log ("OBJ: " + str(_idKey) + _type);
				
				//Create it
				_object = createVehicle [_type, _pos, [], 0, "CAN_COLLIDE"];
				_object setVariable ["lastUpdate",time];
				_object setVariable ["ObjectID", _idKey, true];
				_object setVariable ["CharacterID", _ownerID, true];
				
				clearWeaponCargoGlobal  _object;
				clearMagazineCargoGlobal  _object;
				
				if (_object isKindOf "TentStorage") then {
					_pos set [2,0];
					_object setpos _pos;
				};
				_object setdir _dir;
				_object setDamage _damage;
				
				if (count _intentory > 0) then {
					//Add weapons
					_objWpnTypes = (_intentory select 0) select 0;
					_objWpnQty = (_intentory select 0) select 1;
					_countr = 0;					
					{
						_isOK = 	isClass(configFile >> "CfgWeapons" >> _x);
						if (_isOK) then {
							_block = 	getNumber(configFile >> "CfgWeapons" >> _x >> "stopThis") == 1;
							if (!_block) then {
								_object addWeaponCargoGlobal [_x,(_objWpnQty select _countr)];
							};
						};
						_countr = _countr + 1;
					} forEach _objWpnTypes; 
					
					//Add Magazines
					_objWpnTypes = (_intentory select 1) select 0;
					_objWpnQty = (_intentory select 1) select 1;
					_countr = 0;
					{
						_isOK = 	isClass(configFile >> "CfgMagazines" >> _x);
						if (_isOK) then {
							_block = 	getNumber(configFile >> "CfgMagazines" >> _x >> "stopThis") == 1;
							if (!_block) then {
								_object addMagazineCargoGlobal [_x,(_objWpnQty select _countr)];
							};
						};
						_countr = _countr + 1;
					} forEach _objWpnTypes;

					//Add Backpacks
					_objWpnTypes = (_intentory select 2) select 0;
					_objWpnQty = (_intentory select 2) select 1;
					_countr = 0;
					{
						_isOK = 	isClass(configFile >> "CfgVehicles" >> _x);
						if (_isOK) then {
							_block = 	getNumber(configFile >> "CfgVehicles" >> _x >> "stopThis") == 1;
							if (!_block) then {
								_object addBackpackCargoGlobal [_x,(_objWpnQty select _countr)];
							};
						};
						_countr = _countr + 1;
					} forEach _objWpnTypes;
				};	
				
				if (_object isKindOf "AllVehicles") then {
					{
						_selection = _x select 0;
						_dam = _x select 1;
						if (_selection in dayZ_explosiveParts and _dam > 0.8) then {_dam = 0.8};
						[_object,_selection,_dam] call object_setFixServer;
					} forEach _hitpoints;
					_object setvelocity [0,0,1];
					_object setFuel _fuel;
					if (getDammage _object == 1) then {
						_position = ([(getPosATL _object),0,100,10,0,500,0] call BIS_fnc_findSafePos);
						_object setPosATL _position;
					};
					_id = _object spawn fnc_vehicleEventHandler;			
					_totalvehicles = _totalvehicles + 1;
				};

				//Monitor the object
				//_object enableSimulation false;
				dayz_serverObjectMonitor set [count dayz_serverObjectMonitor,_object];
			};
		} forEach _myArray;
		
	// # END OF STREAMING #

//Set the Time
	//Send request
	_key = "CHILD:307:";
	_result = [_key] call server_hiveReadWrite;
	_outcome = _result select 0;
	if(_outcome == "PASS") then {
		_date = _result select 1; 
		if(isDedicated) then {
			setDate _date;
			dayzSetDate = _date;
			publicVariable "dayzSetDate";
		};

		diag_log ("HIVE: Local Time set to " + str(_date));
	};
	
	createCenter civilian;
	if (isDedicated) then {
		endLoadingScreen;
	};	
	hiveInUse = false;

if (isDedicated) then {
	_id = [] execFSM "\z\addons\dayz_server\system\server_cleanup.fsm";
};


// Custom Configs
if(isnil "MaxVehicleLimit") then {
	MaxVehicleLimit = 50;
};
if(isnil "MaxHeliCrashes") then {
	MaxHeliCrashes = 5;
};
if(isnil "MaxDynamicDebris") then {
	MaxDynamicDebris = 100;
};

// Custon Configs End

//  spawn_vehicles
_vehLimit = MaxVehicleLimit - _totalvehicles;
diag_log ("HIVE: Spawning # of Vehicles: " + str(_vehLimit));
if(_vehLimit > 0) then {
	for "_x" from 1 to _vehLimit do {
		_id = [] spawn spawn_vehicles; // Needs setup
		waitUntil{scriptDone _id};
	};
};

//  spawn_roadblocks
for "_x" from 1 to MaxDynamicDebris do {
	_id = [] spawn spawn_roadblocks;
	//waitUntil{scriptDone _id};
};

//Spawn crashed helos
for "_x" from 1 to MaxHeliCrashes do {
	_id = [] spawn spawn_heliCrash;
	//waitUntil{scriptDone _id};
};

// Allow connection after road debris spawns
allowConnection = true;
