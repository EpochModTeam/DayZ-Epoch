private ["_playerObj","_myGroup","_playerUID","_playerPos","_playerName","_puid","_timeout","_message"];

_playerUID = _this select 0;
_playerName = _this select 1;
_playerObj = nil;
_playerPos = [];

//Lets search all playerable units looking for the objects that matches our playerUID
{
	_puid = [_x] call FNC_GetPlayerUID;
	if (_puid == _playerUID) exitWith { _playerObj = _x; _playerPos = getPosATL _playerObj;};
} forEach 	playableUnits;

//If for some reason the playerOBj does not exist lets exit the disconnect system.
if (isNil "_playerObj") exitWith {
	diag_log format["%1: nil player object, _this:%2", __FILE__, _this];
};

_puid = [_playerObj] call FNC_GetPlayerUID;
//diag_log format["get: %1 (%2), sent: %3 (%4)",typeName _puid, _puid, typeName _playerUID, _playerUID];

//If the the playerObj exists lets run all sync systems

_characterID = _playerObj getVariable["characterID", "?"];
_lastDamage = _playerObj getVariable["noatlf4",0];
_Sepsis = _playerObj getVariable["USEC_Sepsis",false];
_lastDamage = round(diag_ticktime - _lastDamage);
_inCombat = _playerObj getVariable ["inCombat", 0];

//Readded Logout debug info.
diag_log format["INFO - Player: %3(UID:%1/CID:%2) as (%4), logged off at %5%6", 
	getPlayerUID _playerObj,
	_characterID,
	_playerObj call fa_plr2str,
	typeOf _playerObj,
	(getPosATL _playerObj) call fa_coor2str,
	if ((_lastDamage > 5 AND (_lastDamage < 30)) AND ((alive _playerObj) AND (_playerObj distance (getMarkerpos "respawn_west") >= 2000))) then {" while in combat ("+str(_lastDamage)+" seconds left)"} else {""}
]; 

//Login processing do not sync
if (_playerUID in dayz_ghostPlayers) exitwith { 
	diag_log format["ERROR: Cannot Sync Character [%1,%2] Still processing login",_name,_playerUID]; 

	//Lets remove the object.
	if (!isNull _playerObj) then { 
		_myGroup = group _playerObj;
		deleteGroup _myGroup;
	};
};

//Make sure we know the ID of the object before we try and sync any info to the DB
if (_characterID != "?") exitwith {

	//If the player has sepsis before logging off lets give them infected status.
	if (_Sepsis) then {
		_playerObj setVariable["USEC_infected",true,true];
	};
	
	//Record Player Login/LogOut
	[_playerUID,_characterID,2,_playerName] call dayz_recordLogin;

	//if the player object is inside a vehicle lets eject the player
	if (vehicle _playerObj != _playerObj) then {
		_playerObj action ["eject", vehicle _playerObj];
	};
	
	//Punish combat log
	if ((_inCombat > 0) && {alive _playerObj && (_playerObj distance (getMarkerpos "respawn_west") >= 2000)}) then {
		_playerObj setVariable ["NORRN_unconscious",true,true]; // Set status to unconscious
		_playerObj setVariable ["unconsciousTime",150,true]; // Set knock out timer to 150 seconds
		//_playerObj setVariable ["USEC_injured",true]; // Set status to bleeding
		//_playerObj setVariable ["USEC_BloodQty",3000]; // Set blood to 3000
		diag_log format["PLAYER COMBAT LOGGED: %1(%3) at location %2",_playerName,_playerPos,_playerUID];
		_message = format["PLAYER COMBAT LOGGED: %1",_playerName];
		[nil, nil, rTitleText, _message, "PLAIN"] call RE; // Message whole server
	};

	//if player object is alive lets sync the player and remove the body and if ghosting is active add the player id to the array
	if (alive _playerObj) then {
		[_playerObj,nil,true] call server_playerSync;
		
		if (dayz_enableGhosting) then {
			//diag_log format["GhostPlayers: %1, ActivePlayers: %2",dayz_ghostPlayers,dayz_activePlayers];
			if (!(_playerUID in dayz_ghostPlayers)) then { 
				dayz_ghostPlayers set [count dayz_ghostPlayers, _playerUID];
				dayz_activePlayers set [count dayz_activePlayers, [_playerUID,diag_ticktime]];
				
				//diag_log format["playerID %1 added to ghost list",_playerUID];
			};
		};
	};
	
	//Lets scan the area near the player logout position and save all objects.
	{ [_x,"gear"] call server_updateObject } foreach (nearestObjects [_playerPos, DayZ_GearedObjects, 10]);
};

if (isNull _playerObj) then { diag_log("Player Object does not esist"); };


//Lets remove the object.
if (!isNull _playerObj) then { 
	_myGroup = group _playerObj;
	deleteGroup _myGroup;
};

