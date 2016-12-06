/*
	WARNING: The player object is deleted by Arma shortly after onPlayerDisconnected fires
	because DayZ uses disabledAI=true:
	https://community.bistudio.com/wiki/Description.ext#disabledAI
	
	References to the player object after that point will return objNull, so this function
	and server_playerSync must be fast or the player will not save.
*/
private ["_playerObj","_playerUID","_playerPos","_playerName","_characterID","_inCombat","_Sepsis","_myGroup"];

_playerUID = _this select 0;
_playerName = _this select 1;
_playerObj = nil;

//Lets search all playerable units looking for the objects that matches our playerUID
{
	if ((getPlayerUID _x) == _playerUID) exitWith { _playerObj = _x; _playerPos = getPosATL _playerObj;};
} count playableUnits;

//If for some reason the playerOBj does not exist lets exit the disconnect system.
if (isNil "_playerObj") exitWith {
	diag_log format["%1: nil player object, _this:%2", __FILE__, _this];
};

//diag_log format["get: %1 (%2), sent: %3 (%4)",typeName (getPlayerUID _playerObj), getPlayerUID _playerObj, typeName _playerUID, _playerUID];

//If the the playerObj exists lets run all sync systems

_characterID = _playerObj getVariable["characterID", "?"];
_inCombat = _playerObj getVariable ["inCombat",false];
_Sepsis = _playerObj getVariable["USEC_Sepsis",false];

//Login processing do not sync
if (_playerUID in dayz_ghostPlayers) exitwith { 
	diag_log format["ERROR: Cannot Sync Character [%1,%2] Still processing login",_playerName,_playerUID]; 

	//Lets remove the object.
	if (!isNull _playerObj) then { 
		_myGroup = group _playerObj;
		deleteVehicle _playerObj;
		deleteGroup _myGroup;
	};
};

//Make sure we know the ID of the object before we try and sync any info to the DB
if (_characterID != "?") then {
	//If the player has sepsis before logging off lets give them infected status.
	if (_Sepsis) then {
		_playerObj setVariable["USEC_infected",true,true];
	};
	
	//if player object is alive lets sync the player and remove the body and if ghosting is active add the player id to the array
	if (alive _playerObj) then {
		// High priority. Sync must finish fast before player object isNull
		[_playerObj,nil,true,[],_inCombat] call server_playerSync;
		
		/*
			Low priority code below this point where
			_playerObj is no longer needed and may be Null.
		*/
		
		//Punish combat log
		if (_inCombat && _playerPos distance (getMarkerPos "respawn_west") > 1500) then {
			// Moved setVariables to server_playerSync since they are high priority			
			// Messages are low priority. Player object not needed
			diag_log format["PLAYER COMBAT LOGGED: %1(%3) at location %2",_playerName,_playerPos,_playerUID];
			[nil, nil, rTitleText, format["PLAYER COMBAT LOGGED: %1",_playerName], "PLAIN"] call RE; // Message whole server
		};
		
		if (dayz_enableGhosting) then {
			//diag_log format["GhostPlayers: %1, ActivePlayers: %2",dayz_ghostPlayers,dayz_activePlayers];
			if (!(_playerUID in dayz_ghostPlayers)) then { 
				dayz_ghostPlayers set [count dayz_ghostPlayers, _playerUID];
				dayz_activePlayers set [count dayz_activePlayers, [_playerUID,diag_ticktime]];
				
				//diag_log format["playerID %1 added to ghost list",_playerUID];
			};
		};
	} else {
		//Done in server_playerSync above if player is alive
		{[_x,"gear"] call server_updateObject} count (nearestObjects [_playerPos,DayZ_GearedObjects,10]);
	};
	
	[_playerUID,_characterID,3,_playerName,((getPosATL _playerObj) call fa_coor2str)] call dayz_recordLogin;
};

if (alive _playerObj) then {
	_myGroup = group _playerObj;
	deleteVehicle _playerObj;
	deleteGroup _myGroup;
};