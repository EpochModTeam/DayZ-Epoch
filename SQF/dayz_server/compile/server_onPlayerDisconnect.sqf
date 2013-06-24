/*

*/
private ["_object","_myGroup","_id","_playerID","_playerName","_characterID","_playerIDtoarray","_timeout"];
_playerID = _this select 0;
_playerName = _this select 1;
_object = call compile format["player%1",_playerID];
_characterID =	_object getVariable ["characterID","0"];
_timeout = _object getVariable["combattimeout",0];

_playerIDtoarray = [];
_playerIDtoarray = toArray _playerID;

if (vehicle _object != _object) then {
	_object action ["eject", vehicle _object];
};

if (59 in _playerIDtoarray) exitWith { };

if ((_timeout - time) > 0) then {
	
	diag_log format["COMBAT LOGGED: %1 (%2)", _playerName,_timeout];
    _object setVariable["NORRN_unconscious",true, true];
    _object setVariable["unconsciousTime",300,true];
    diag_log format["SET UNCONCIOUSNESS: %1", _playerName];

	//_message = format["PLAYER COMBAT LOGGED: %1 (%2)",_playerName, _killerName, _weapon];
	//[nil, nil, rspawn, [_object, _message], { (_this select 0) globalChat (_this select 1) }] call RE;

};

diag_log format["DISCONNECT: %1 (%2) Object: %3, _characterID: %4", _playerName,_playerID,_object,_characterID];
_id = [_playerID,_characterID,2] spawn dayz_recordLogin;
dayz_disco = dayz_disco - [_playerID];
if (!isNull _object) then {
//Update Vehicle
	{ [_x,"gear"] call server_updateObject } foreach 
		(nearestObjects [getPosATL _object, dayz_updateObjects, 10]);
	if (alive _object) then {
		[_object,(magazines _object),true,true] call server_playerSync;
		//[_object,[],true,false] call server_playerSync;
		_myGroup = group _object;
		deleteVehicle _object;
		deleteGroup _myGroup;
	};
};