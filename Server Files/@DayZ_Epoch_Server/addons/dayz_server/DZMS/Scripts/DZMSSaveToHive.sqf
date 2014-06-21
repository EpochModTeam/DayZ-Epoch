/*
	Save To Hive by Vampire
	This function attempts to save vehicles to the database if enabled when a mission ends.
	Usage: [Vehicle]
*/
_object = _this select 0;
_class = typeOf _object;
_dir = getDir _object;
_pos = getPos _object;
_worldspace = [_dir,_pos];

//If they have vehicle saving off, then this script needs to do nothing.
if (!(DZMSSaveVehicles)) exitWith {};

//Check if vehicle is null or dead
if (isNull _object OR !alive _object OR (damage _object) > .97) exitWith {};

//Get a random fuel count to set
_ranFuel = random 1;
if (_ranFuel < .1) then {_ranFuel = .1;};

if (DZMSEpoch) then {

	//The server is running DayZ Epoch, so we use the Epoch method.
	_uid = _worldspace call dayz_objectUID3;

	_key = format["CHILD:308:%1:%2:%3:%4:%5:%6:%7:%8:%9:", dayZ_instance, _class, 0, 0, _worldspace, [], [], 1, _uid];
	_key call server_hiveWrite;
	
	//If the server is busy, it might not write on the first try
	//Because of this, we loop it until it works
	_done = false;
	_retry = 0;
	while {_retry < 10} do
	{
		sleep 0.3;
		_key = format["CHILD:388:%1:", _uid];
		_result = _key call server_hiveReadWrite;
		_outcome = _result select 0;
		if (_outcome == "PASS") then {
			_oid = _result select 1;
			_object setVariable ["ObjectID", _oid, true];
			_done = true;
			_retry = 11;
		} else {
			_done = false;
			_retry = _retry + 1;
		};
	};
	
	//Lets get it ready for the user
	_object setvelocity [0,0,1];
	_object setFuel _ranFuel;
	_object setVehicleLock "UNLOCKED";
	
	clearWeaponCargoGlobal  _object;
	clearMagazineCargoGlobal  _object;
	
	_object allowDamage false;
	_object setVariable ["lastUpdate", time];
	_object setVariable ["CharacterID", "0", true];
	PVDZE_serverObjectMonitor set [count PVDZE_serverObjectMonitor, _object];
	
	sleep 1;
	_object call fnc_veh_ResetEH;
	PVDZE_veh_Init = _object;
	publicVariable "PVDZE_veh_Init";
	[_object,"all"] spawn server_updateObject;
	_object allowDamage true;
	
} else {
	
	//They are running a different DayZ Varient
	clearWeaponCargoGlobal _object;
	clearMagazineCargoGlobal _object;
	
	sleep 3;
	
	//The Hive 999 call to publish the object
	_key = format["CHILD:999:select `id` from `vehicle` where `class_name` = '?' LIMIT 1:[""%1""]:", _class];
	_data = "HiveEXT" callExtension _key;             
	_result = call compile format ["%1", _data];
	_status = _result select 0;
	if (_status == "CustomStreamStart") then 
	{
		"HiveEXT" callExtension _key;
		_temp = _result select 1;
		if (_temp == 0) then
		{
			_data = "HiveEXT" callExtension format ["CHILD:999:Insert into vehicle 
			(class_name, damage_min, damage_max, fuel_min, fuel_max, limit_min, limit_max, parts, inventory)
			values
			('?',0,0,1.0,1.0,0,99,'',''):[""%1""]:", _class];
		};	
	};
	
	_data = "HiveEXT" callExtension format ["CHILD:999:Insert into world_vehicle
	(vehicle_id, world_id, worldspace, chance)
	values
	((SELECT `id` FROM `vehicle` where `class_name` = '?' LIMIT 1), 1, '%3',1):[""%1"", ""%2""]:", _class, worldName, [_dir, _pos]];
	
	_data = "HiveEXT" callExtension format["CHILD:999:Insert into instance_vehicle
	(world_vehicle_id, instance_id, worldspace, inventory, parts, fuel, damage)
	values
	((SELECT `id` FROM `world_vehicle` where `vehicle_id` = (SELECT `id` FROM `vehicle` where `class_name` = '%1' LIMIT 1) LIMIT 1), %3, '%2','[[[],[]],[[],[]],[[],[]]]','[]',1,0):[]:", _class, [_dir, _pos], dayZ_instance];
	
	_key = format["CHILD:999:SELECT `id` FROM `instance_vehicle` ORDER BY `id` DESC LIMIT 1:[]:"];
	_data = "HiveEXT" callExtension _key;

	_result = call compile format ["%1", _data];
	_status = _result select 0;
	if (_status == "CustomStreamStart") then 
	{
		_temp = _result select 1;
		if (_temp == 1) then
		{
			_data = "HiveEXT" callExtension _key;
			_result = call compile format ["%1", _data];
			_status = _result select 0;
		};	
	};
	
	//Lets finish it up for the player
	_object addMPEventHandler ["MPKilled",{_this call vehicle_handleServerKilled;}];
	_object setFuel _ranFuel;
	_object setVariable ["lastUpdate", time];
	_object setVariable ["ObjectID", str(_status), true];
	_object setVariable ["CharacterID", "7777", true];
	[_object,"all"] spawn server_updateObject;

};