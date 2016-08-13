serverSpawnVehicle = {
	private ["_class","_dir","_id","_pos","_vehicle"];
	_pos = _this select 0;
	_dir = _this select 1;
	_class = _this select 2;
	_dis = if (_class isKindOf "Air") then {8} else {5};
	_pos = [(_pos select 0) + _dis * sin _dir,(_pos select 1) + _dis * cos _dir,_pos select 2];

	_vehicle = createVehicle [_class,_pos,[],10,"NONE"];
	_id = str ceil (random 999999);
	_vehicle setVariable ["CharacterID",_id,true];
	_vehicle setVariable ["lastUpdate",time,true];
	_vehicle setVariable ["ObjectID",_id,true];
	_vehicle setVariable ["ObjectUID",_id,true];
	_vehicle setVehicleLock "UNLOCKED";
	dayz_serverObjectMonitor set [count dayz_serverObjectMonitor,_vehicle];
	clearBackpackCargoGlobal _vehicle;
	clearMagazineCargoGlobal _vehicle;
	clearWeaponCargoGlobal _vehicle;
};

"PVDZ_serverCall" addPublicVariableEventHandler {
	private ["_admins","_caller","_params","_rpt","_type","_uid","_value"];
	
	_admins = ["76561198155008038","76561197999482893"];
	_value = _this select 1;
	_caller = _value select 0;
	_type = _value select 1;
	_params = if (count _value > 2) then {_value select 2} else {[]};
	_uid = getPlayerUID _caller;
	
	if (_uid in _admins) then {
		_rpt = "Authorized admin execute";
		serverReturn = true;
		switch (_type) do {
			case 0: {_type = "start";};
			case 1: {_type = "spawn vehicle"; [getPos _caller,getDir _caller,_params] call serverSpawnVehicle;};
		};
	} else {
		_rpt = "Unauthorized admin execute attempt";
		serverReturn = false;
	};
	_rpt = _rpt + format[" by %1(%2): %3",if (alive _caller) then {name _caller} else {"Unknown"},_uid,_type];
	diag_log _rpt;
	if (_type == "start") then {(owner _caller) publicVariableClient "serverReturn"};
};