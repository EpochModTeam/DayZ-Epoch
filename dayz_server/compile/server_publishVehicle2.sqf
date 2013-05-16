private["_object","_worldspace","_location","_dir","_playerUID","_tent","_class","_id","_uid","_dam","_hitpoints","_selection","_array","_damage","_randFuel","_fuel","_key","_result","_outcome","_totaldam","_parts","_retry","_done","_spawnDMG"];

_object = 		_this select 0;
_worldspace = 	_this select 1;
_class = 		_this select 2;
_spawnDMG =		_this select 3;
_playerUID =  _this select 4;

diag_log ("PUBLISH: Attempt " + str(_object));
_dir = 		_worldspace select 0;
_location = _worldspace select 1;

//Generate UID test using time
_uid = _worldspace call dayz_objectUID3;

// TODO: check if uid already exists and if so increment by 1 and check again as soon as we find nothing continue.

//Send request
_key = format["CHILD:308:%1:%2:%3:%4:%5:%6:%7:%8:%9:",dayZ_instance, _class, 0 , _playerUID, _worldspace, [], [], 1,_uid];
diag_log ("HIVE: WRITE: "+ str(_key)); 
_key call server_hiveWrite;

// Switched to spawn so we can wait a bit for the ID
[_object,_uid,_playerUID,_class,_dir,_location] spawn {
   private["_object","_uid","_playerUID","_done","_retry","_key","_result","_outcome","_oid","_selection","_dam","_class"];

   _object = _this select 0;
   _uid = _this select 1;
   _playerUID = _this select 2;
   _class = _this select 3;
   _dir = _this select 4;
   _location = _this select 5;

   _done = false;
	_retry = 0;
	// TODO: Needs major overhaul for 1.1
	while {_retry < 10} do {
		
		sleep 1;
		// GET DB ID
		_key = format["CHILD:388:%1:",_uid];
		diag_log ("HIVE: WRITE: "+ str(_key));
		_result = _key call server_hiveReadWrite;
		_outcome = _result select 0;
		if (_outcome == "PASS") then {
			_oid = _result select 1;
			//_object setVariable ["ObjectID", _oid, true];
			diag_log("CUSTOM: Selected " + str(_oid));
			_done = true;
			_retry = 100;

		} else {
			diag_log("CUSTOM: trying again to get id for: " + str(_uid));
			_done = false;
			_retry = _retry + 1;
		};
	};

	// Remove marker
	deleteVehicle _object;

	if(!_done) exitWith { diag_log("CUSTOM: failed to get id for : " + str(_uid)); };

	_object_para = "ParachuteMediumWest" createVehicle [0,0,0];

	_object_para setpos [_location select 0, _location select 1,(_location select 2) + 65];

	_object = createVehicle [_class, [0,0,0], [], 0, "CAN_COLLIDE"];

	_object setVariable ["ObjectID", _oid, true];
	
	_object setVariable ["lastUpdate",time];
	
	_object setVariable ["playerUID", _playerUID, true];

	_object attachTo [_object_para, [0,0,-1.6]];
	
	sleep 1.0;
	     
	WaitUntil{(getpos _object select 2) < 0.1};
     
	detach _object;

	deleteVehicle _object_para;

	// _object setDamage _damage;
	// _object setFuel _fuel;

	clearWeaponCargoGlobal  _object;
	clearMagazineCargoGlobal  _object;

	_veh setdir _dir;
	_veh setpos _location;
	
	//_object setvelocity [0,0,1];

	dayz_serverObjectMonitor set [count dayz_serverObjectMonitor,_object];

	_object call fnc_vehicleEventHandler;
	
	// for non JIP users this should make sure everyone has eventhandlers for vehicles.
	dayzVehicleInit = _object;
	publicVariable "dayzVehicleInit";
	


	diag_log ("PUBLISH: Created " + (_class) + " with ID " + str(_uid));
};
