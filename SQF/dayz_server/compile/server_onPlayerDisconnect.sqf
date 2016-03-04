private ["_invehicle","_isplayernearby","_playerObj","_myGroup","_PUID","_id","_playerUID","_playerName","_characterID","_timeout","_message","_magazines","_playerPos"];
_playerUID = _this select 0;
_playerName = _this select 1;
_playerObj = nil;
_playerPos = [];

{
	_PUID = [_x] call FNC_GetPlayerUID;
	if (_PUID == _playerUID) exitWith { _playerObj = _x; _playerPos = getPosATL _playerObj;};
} count 	playableUnits;

if (isNil "_playerObj") then {
	diag_log format["nil player object attempting PV, :%1", _this];
	
	// fall back to using PV for now so we have a better chance at finding the player
	_playerObj = call compile format["PVDZE_player%1",_playerUID];
};

if (isNil "_playerObj") exitWith {
	diag_log format["%1: nil player object, _this:%2", __FILE__, _this];
};
_PUID = [_playerObj] call FNC_GetPlayerUID;
diag_log format["get: %1 (%2), sent: %3 (%4)",typeName _PUID, _PUID, typeName _playerUID, _playerUID];

_characterID = _playerObj getVariable["characterID", "?"];
_lastDamage = _playerObj getVariable["noatlf4",0];
_Sepsis = _playerObj getVariable["USEC_Sepsis",false];

if (_characterID != "?") exitwith {
	_playerPos = getPosATL _playerObj;
	//_characterID =	_playerObj getVariable ["CharacterID","0"];
	_timeout = _playerObj getVariable["combattimeout",0];

	//If the player has sepsis before logging off lets give them infected status.
	if (_Sepsis) then {
		_playerObj setVariable["USEC_infected",true,true];
	};

	//Record Player Login/LogOut
	[_playerUID,_characterID,2] call dayz_recordLogin;

	_invehicle = false;

	if (vehicle _playerObj != _playerObj) then {
		_playerObj action ["eject", vehicle _playerObj];
		_invehicle = true;
		diag_log format["LOGOUT IN VEHICLE: %1 at location %2", _playerName,(getPosATL _playerObj)];
	};

	if ((_timeout - time) > 0) then {

		_playerObj setVariable["NORRN_unconscious",true, true];
		_playerObj setVariable["unconsciousTime",150,true];
	
		diag_log format["COMBAT LOGGED: %1 (%2) at location %3", _playerName,_timeout,(getPosATL _playerObj)];
		//diag_log format["SET UNCONCIOUSNESS: %1", _playerName];
	
		// Message whole server when player combat logs
		_message = format["PLAYER COMBAT LOGGED: %1",_playerName];
		[nil, nil, rTitleText, _message, "PLAIN"] call RE;
	};

	diag_log format["DISCONNECT: %1 (%2) Object: %3, _characterID: %4 at loc %5", _playerName,_playerUID,_playerObj,_characterID, (getPosATL _playerObj)];

	_id = [_playerUID,_characterID,2] spawn dayz_recordLogin;

	if (alive _playerObj) then {
	
		//[_playerObj,nil,true] call server_playerSync;
	
		_isplayernearby = (DZE_BackpackGuard && !_invehicle && ({(isPlayer _x) && (alive _x)} count (_playerPos nearEntities ["AllVehicles", 5]) > 1));

		// prevent saving more than 20 magazine items
		_magazines = [(magazines _playerObj),20] call array_reduceSize;

		[_playerObj,_magazines,true,true,_isplayernearby] call server_playerSync;

		if (dayz_enableGhosting) then {
			//diag_log format["GhostPlayers: %1, ActivePlayers: %2",dayz_ghostPlayers,dayz_activePlayers];
			if (!(_playerUID in dayz_ghostPlayers)) then { 
				dayz_ghostPlayers set [count dayz_ghostPlayers, _playerUID];
				dayz_activePlayers set [count dayz_activePlayers, [_playerUID,diag_ticktime]];
				
				//diag_log format["playerID %1 added to ghost list",_playerUID];
			};
		};

		// remove player
		_playerObj call dayz_removePlayerOnDisconnect;
	};
	//Update Vehicle
	{
		[_x,"gear"] call server_updateObject;
	} count (nearestObjects [_playerPos, DayZ_GearedObjects, 10]);
};

if (isNull _playerObj) then { diag_log("Player Object does not esist"); };


//Lets remove the object.
if (!isNull _playerObj) then { 
	_myGroup = group _playerObj;
	deleteVehicle _playerObj;
	deleteGroup _myGroup;
};

