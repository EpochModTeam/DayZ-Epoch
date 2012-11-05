private["_type","_location","_dir","_character","_tent","_class","_id"];
//[dayz_characterID,_tent,[_dir,_location],"TentStorage"]
_charID =		_this select 0;
_object = 		_this select 1;
_worldspace = 	_this select 2;
_class = 		_this select 3;
_id =			0;

diag_log ("PUBLISH: Attempt " + str(_object));
_dir = 		_worldspace select 0;
_location = _worldspace select 1;

_object = createVehicle [_class, _location, [], 0, "CAN_COLLIDE"];
_object setdir _dir;
_object setpos _location;
_object setVariable ["OwnerID", _charID, true];

//add to database
dayz_serverObjectMonitor set [count dayz_serverObjectMonitor,_object];

//get UID
_uid = _object call dayz_objectUID;

//Send request
_key = format["CHILD:308:%1:%2:%3:%4:%5:%6:%7:%8:%9:",dayZ_instance, _class, 0 , _charID, _worldspace, [], [], 0,_uid];
diag_log ("HIVE: WRITE: "+ str(_key));
_key call server_hiveWrite;

_object setVariable ["ObjectUID", _uid, true];

diag_log ("PUBLISH: Created " + (_class) + " with ID " + _uid);
