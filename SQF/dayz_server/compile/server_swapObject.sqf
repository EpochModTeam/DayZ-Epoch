private ["_class","_uid","_charID","_object","_worldspace","_key","_allowed","_obj","_inv","_objectID","_objectUID","_proceed","_activatingplayer"];
//[dayz_characterID,_tent,[_dir,_location],"TentStorage"]
_charID =		_this select 0;
_object = 		_this select 1;
_worldspace = 	_this select 2;
_class = 		_this select 3;
_obj = 			_this select 4;
_activatingplayer = _this select 5;
_inv = if (count _this > 6) then {_this select 6} else {[]};
_proceed = false;

_objectID = "0";
_objectUID = "0";

if(!isNull(_obj)) then {
	// Find objectID
	_objectID 	= _obj getVariable ["ObjectID","0"];
	// Find objectUID
	_objectUID	= _obj getVariable ["ObjectUID","0"];
	if !(DZE_GodModeBase) then {
		_obj removeAllMPEventHandlers "MPKilled";
	};
	// Remove old object
	deleteVehicle _obj;
	
	_proceed = true;
};

if(isNull(_object)) then {
	_proceed = false;
};

if(_objectID == "0" && _objectUID == "0") then { 
	_proceed = false;
} else {
	[_objectID,_objectUID,_activatingplayer] call server_deleteObj;
};

_allowed = [_object, "Server"] call check_publishobject;
if (!_allowed || !_proceed) exitWith { 
	if(!isNull(_object)) then {
		deleteVehicle _object; 
	};
	diag_log ("Invalid object swap by playerUID:" + (getPlayerUID _activatingplayer));
};

// Publish variables
_object setVariable ["CharacterID",_charID,true];
	
//_object setVariable ["ObjectUID",_objectUID,true];
_object setVariable ["OEMPos",(_worldspace select 1),true];

//diag_log ("PUBLISH: Attempt " + str(_object));

//get UID
_uid = _worldspace call dayz_objectUID2;

//Send request
//_key = format["CHILD:308:%1:%2:%3:%4:%5:%6:%7:%8:%9:",dayZ_instance, _class, 0 , _charID, _worldspace, [], [], 0,_uid];
_key = format["CHILD:308:%1:%2:%3:%4:%5:%6:%7:%8:%9:",dayZ_instance, _class, 0 , _charID, _worldspace call AN_fnc_formatWorldspace, _inv, [], 0,_uid]; // Precise Base Building 1.0.5

//diag_log ("HIVE: WRITE: "+ str(_key));
_key call server_hiveWrite;

_object setVariable ["lastUpdate",time];
_object setVariable ["ObjectUID", _uid,true];
// _object setVariable ["CharacterID",_charID,true];
if (DZE_GodModeBase && {!(_class in DZE_GodModeBaseExclude)}) then {
	_object addEventHandler ["HandleDamage",{false}];
} else {
	_object addMPEventHandler ["MPKilled",{_this call vehicle_handleServerKilled;}];
};
// Test disabling simulation server side on buildables only.
_object enableSimulation false;

dayz_serverObjectMonitor set [count dayz_serverObjectMonitor,_object];

diag_log ("PUBLISH: " + str(_activatingPlayer) + " upgraded " + (_class) + " with ID " + str(_uid));
