private["_type","_location","_dir","_character","_tent","_class","_id"];
//[dayz_characterID,_tent,[_dir,_location],"TentStorage"]
_class = 		_this select 3;
_location =		getPosATL player;
_dir =			getDir player;
player allowdamage false;
diag_log ("PUBLISH: Attempt " + _class);
_worldspace = [_dir,_location];

_object = createVehicle [_class, _location, [], 0, "CAN_COLLIDE"];
_object setdir _dir;
_object setpos _location;
_object setVariable ["CharacterID", "0", true];
sleep 1;
_dam = 1;
_hitpoints = _object call vehicle_getHitpoints;
_object setFuel 0;
{
	_selection = getText(configFile >> "cfgVehicles" >> _class >> "HitPoints" >> _x >> "name");
	if (_x != "HitEngine" and _x != "HitFuel") then {
		_dam = 1;
	} else {
		_dam = 0.85;
	};
	[_object,_selection,_dam] call object_setFixServer;
	//_object setHit[_selection,1];
} forEach _hitpoints;	
_object setvelocity [1,0,0];
player reveal _object;

//Send request

_array = [];
_dam = 1;
{
	_hit = [_object,_x] call object_getHit;
	_selection = getText (configFile >> "CfgVehicles" >> _class >> "HitPoints" >> _x >> "name");
	if (_hit > 0) then {_array set [count _array,[_selection,_hit]]};
} forEach _hitpoints;

//add to database
dayz_serverObjectMonitor set [count dayz_serverObjectMonitor,_object];

//Send request
//61 to 120
//207 to 208
for "_x" from 61 to 120 do {
_key = format["CHILD:301:%1:%2:%3:%4:%5:%6:%7:%8:",_x, _class, 0 , 0, _worldspace, [], _array, 0];
	diag_log ("HIVE: WRITE: "+ str(_key));
	_key call server_hiveWrite;
	//sleep 0.5;
/*
	waitUntil{!hiveInUse};
	hiveInUse = true;
	//Send request	
	_primary = [_key,false,dayZ_hivePipeAuth] call server_hiveReadWrite;
	hiveInUse = false;
*/
};
	
diag_log ("PUBLISH: Result " + str(_result));
if (count _result > 1) then {
	_id = _result select 1;
	_object setVariable ["ObjectID", _id, true];
	diag_log ("PUBLISH: Created " + (_class) + " with ID " + str(_id));
};
