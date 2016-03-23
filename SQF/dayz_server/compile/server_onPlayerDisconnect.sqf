private ["_playerObj","_myGroup","_playerUID","_playerPos","_playerName","_puid","_timeout","_message"];

_playerUID = _this select 0;
_playerName = _this select 1;
_playerObj = nil;
_playerPos = [];

//Search all players for the object that matches our playerUID
{
	_puid = [_x] call FNC_GetPlayerUID;
	if (_puid == _playerUID) exitWith {_playerObj = _x; _playerPos = getPosATL _playerObj;};
} count playableUnits;

//If for some reason the playerObj does not exist, exit the disconnect system.
if (isNil "_playerObj") exitWith {
	diag_log format["%1: nil player object, _this:%2", __FILE__, _this];
};

_puid = [_playerObj] call FNC_GetPlayerUID;
diag_log format["get: %1 (%2), sent: %3 (%4)",typeName _puid, _puid, typeName _playerUID, _playerUID];

//If the playerObj exists run all sync systems
_characterID = _playerObj getVariable ["characterID", "?"];
_lastDamage = _playerObj getVariable ["noatlf4",0];
_sepsis = _playerObj getVariable ["USEC_Sepsis",false];
_lastDamage = round(diag_ticktime - _lastDamage);

//Readded Logout debug info.
diag_log format["Player UID#%1 CID#%2 %3 as %4, logged off at %5%6", 
	getPlayerUID _playerObj, _characterID, _playerObj call fa_plr2str, typeOf _playerObj, 
	_playerPos call fa_coor2str,
	if ((_lastDamage > 5 && (_lastDamage < 30)) && {(alive _playerObj) && (_playerObj distance (getMarkerpos "respawn_west") >= 2000)}) then {" while in combat ("+str(_lastDamage)+" seconds left)"} else {""}
]; 

//Make sure we know the ID of the object before we try and sync any info to the DB
if (_characterID != "?") exitWith {
	//If the player has sepsis before logging off give them infected status.
	if (_sepsis) then {_playerObj setVariable ["USEC_infected",true,true];};
	
	//Record Player Login/LogOut
	[_playerUID,_characterID,2] call dayz_recordLogin;

	//If the player object is inside a vehicle eject the player.
	if (vehicle _playerObj != _playerObj) then {_playerObj action ["eject",vehicle _playerObj];};
	
	//Punish combat log
	_timeout = _playerObj getVariable["combattimeout",0];
	if ((_timeout - time) > 0) then {
		_playerObj setVariable ["NORRN_unconscious",true,true]; // Set status to unconscious
		_playerObj setVariable ["unconsciousTime",150,true]; // Set knock out timer to 150 seconds
		//_playerObj setVariable ["USEC_injured",true]; // Set status to bleeding
		//_playerObj setVariable ["USEC_BloodQty",3000]; // Set blood to 3000
		diag_log format["PLAYER COMBAT LOGGED: %1(%4) (timeout: %2) at location %3",_playerName,_timeout,_playerPos,_playerUID];
		_message = format["PLAYER COMBAT LOGGED: %1",_playerName];
		[nil, nil, rTitleText, _message, "PLAIN"] call RE; // Message whole server
	};

	//If player object is alive sync and remove the body. If ghosting is active add the player id to the array.
	if (alive _playerObj) then {
		[_playerObj,nil,true] call server_playerSync;
		
		if (dayz_enableGhosting) then {
			//diag_log format["GhostPlayers: %1, ActivePlayers: %2",dayz_ghostPlayers,dayz_activePlayers];
			if !(_playerUID in dayz_ghostPlayers) then { 
				dayz_ghostPlayers set [count dayz_ghostPlayers, _playerUID];
				dayz_activePlayers set [count dayz_activePlayers, [_playerUID,diag_ticktime]];
				//diag_log format["playerID %1 added to ghost list",_playerUID];
			};
		};
	};
	
	//Scan the area near the player logout position and save all objects.
	{[_x,"gear"] call server_updateObject} count (nearestObjects [_playerPos,DayZ_GearedObjects,10]);
};

if (isNull _playerObj) then {diag_log "server_onPlayerDisconnect called with Null player object";};

//Remove the object.
if (!isNull _playerObj) then {
	_myGroup = group _playerObj;
	deleteVehicle _playerObj;
	deleteGroup _myGroup;
};