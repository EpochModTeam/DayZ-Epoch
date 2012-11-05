private["_type","_location","_dir","_character","_tent","_class","_id","_uid"];
//[dayz_characterID,_tent,[_dir,_location],"TentStorage"]
_charID =		_this select 0;
_object = 		_this select 1;
_worldspace = 	_this select 2;
_class = 		_this select 3;
_id =			0;

if (!(_object isKindOf "Building")) exitWith {
	deleteVehicle _object;
};

//diag_log ("PUBLISH: Attempt " + str(_object));
_dir = 		_worldspace select 0;
_location = _worldspace select 1;

//get UID
_uid = _worldspace call dayz_objectUID2;

//Send request
_key = format["CHILD:308:%1:%2:%3:%4:%5:%6:%7:%8:%9:",dayZ_instance, _class, 0 , _charID, _worldspace, [], [], 0,_uid];
//diag_log ("HIVE: WRITE: "+ str(_key));
_key call server_hiveWrite;

_object setVariable ["ObjectUID", _uid,true];

dayz_serverObjectMonitor set [count dayz_serverObjectMonitor,_object];

//diag_log ("PUBLISH: Created " + (_class) + " with ID " + _uid);
