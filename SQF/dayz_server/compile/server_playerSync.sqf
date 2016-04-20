private ["_characterID","_temp","_currentWpn","_magazines","_force","_isNewPos","_humanity","_isNewGear","_currentModel","_modelChk","_playerPos","_playerGear","_playerBackp","_backpack","_killsB","_killsH","_medical","_isNewMed","_character","_timeSince","_charPos","_isInVehicle","_distanceFoot","_lastPos","_kills","_headShots","_timeGross","_timeLeft","_onLadder","_isTerminal","_currentAnim","_muzzles","_array","_key","_lastTime","_config","_currentState","_name"];
//[player,array]

_character = _this select 0;
_magazines = _this select 1;
_Achievements = _character getVariable "Achievements";
_characterID = _character getVariable ["characterID","0"];
_force = true;
_charPos = getPosATL _character;
_isInVehicle = vehicle _character != _character;
_timeSince = 0;
_humanity = 0;
_name = if (alive _character) then {name _character} else {"Dead Player"};

if (_character isKindOf "Animal") exitWith {
	diag_log ("ERROR: Cannot Sync Character " + _name + " is an Animal class");
};

if (isNil "_characterID") exitWith {
	diag_log ("ERROR: Cannot Sync Character " + _name + " has nil characterID");
};

if (_characterID == "0") exitWith {
	diag_log ("ERROR: Cannot Sync Character " + _name + " as no characterID");
};

if (isNil {_Achievements}) exitWith {
	diag_log ("ERROR: Cannot Sync Achievements " + _name + " has no default Achievements");
	_Achievements = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0];
};

/*
	//No longer used
	private["_debug","_distance"];
	_debug = getMarkerpos "respawn_west";
	_distance = _debug distance _charPos;
	if (_distance < 2000) exitWith { 
	//	diag_log format["ERROR: server_playerSync: Cannot Sync Player %1 [%2]. Position in debug! %3",name _character,_characterID,_charPos];
	};
*/

//Check for server initiated updates
_isNewMed = _character getVariable ["medForceUpdate",false]; //Med update is forced when a player receives some kind of med incident
_isNewPos = _character getVariable ["posForceUpdate",false]; //Med update is forced when a player receives some kind of med incident
_isNewGear = if (!isNil "_magazines") then { true } else { false };
//diag_log ("Starting Save... MED: " + str(_isNewMed) + " / POS: " + str(_isNewPos)); sleep 0.05;

//Check for player initiated updates
if (_characterID != "0") then {
	_playerPos =	[];
	_playerGear =	[];
	_playerBackp =	[];
	_medical =		[];
	_distanceFoot =	0;
	
	//diag_log ("Found Character...");
	
	//Check if update is requested
	if (_isNewPos or _force) then {
		//diag_log ("position..." + str(_isNewPos) + " / " + str(_force)); sleep 0.05;
		if (((_charPos select 0) == 0) && ((_charPos select 1) == 0)) then {
			//Zero Position
		} else {
			//diag_log ("getting position..."); sleep 0.05;
			_playerPos = [round (direction _character),_charPos];
			_lastPos = _character getVariable ["lastPos",_charPos];
			if (count _lastPos > 2 && count _charPos > 2) then {
				if (!_isInVehicle) then {_distanceFoot = round (_charPos distance _lastPos);};
				_character setVariable["lastPos",_charPos];
			};
			if (count _charPos < 3) then {_playerPos = [];};
			//diag_log ("position = " + str(_playerPos)); sleep 0.05;
		};
		_character setVariable ["posForceUpdate",false,true];
	};
	
	if (_isNewGear) then {
		if ((typeName _magazines == "ARRAY") && !(_character isKindOf "PZombie_VB")) then {
			_playerGear = [weapons _character,_magazines select 0,_magazines select 1];
		};
	};
	
	//Check player backpack each time sync runs
	_backpack = unitBackpack _character;
	_playerBackp = [typeOf _backpack,getWeaponCargo _backpack,getMagazineCargo _backpack];
	
	if (_isNewMed or _force) then {
		//diag_log ("medical..."); sleep 0.05;
		if !(_character getVariable ["USEC_isDead",false]) then {
			//diag_log ("medical check..."); sleep 0.05;
			_medical = _character call player_sumMedical;
			//diag_log ("medical result..." + str(_medical)); sleep 0.05;
		};
		_character setVariable ["medForceUpdate",false,true];
	};
	
	//Process update
	if (_characterID != "0") then {		
		//Record stats while we're here		
		/*
			Check previous stats against what client had when they logged in
			this helps prevent JIP issues, where a new player wouldn't have received
			the old players updates. Only valid for stats where clients could have
			be recording results from their local objects (such as agent zombies)
		*/
		_kills = 		["zombieKills",_character] call server_getDiff;
		_killsB = 		["banditKills",_character] call server_getDiff;
		_killsH = 		["humanKills",_character] call server_getDiff;
		_headShots = 	["headShots",_character] call server_getDiff;
		_humanity = 	["humanity",_character] call server_getDiff2;
		//_humanity = 	_character getVariable ["humanity",0];
		_character addScore _kills;		
		/*
			Assess how much time has passed, for recording total time on server
		*/
		_lastTime = 	_character getVariable ["lastTime",diag_ticktime];
		_timeGross = 	(diag_ticktime - _lastTime);
		_timeSince = 	floor (_timeGross / 60);
		_timeLeft =		(_timeGross - (_timeSince * 60));
		/*
			Get character state details
		*/
		_currentWpn = 	currentMuzzle _character;
		_currentAnim =	animationState _character;
		_config = 		configFile >> "CfgMovesMaleSdr" >> "States" >> _currentAnim;
		_onLadder =		(getNumber (_config >> "onLadder")) == 1;
		_isTerminal = 	(getNumber (_config >> "terminal")) == 1;
		//_wpnDisabled =	(getNumber (_config >> "disableWeapons")) == 1;
		_currentModel = typeOf _character;
		_modelChk = 	_character getVariable ["model_CHK",""];
		if (_currentModel == _modelChk) then {
			_currentModel = "";
		} else {
			_currentModel = str _currentModel;
			_character setVariable ["model_CHK",typeOf _character];
		};
		
		if (_onLadder or _isInVehicle or _isTerminal) then {
			_currentAnim = "";
			//If position to be updated, make sure it is at ground level!
			if ((count _playerPos > 0) && !_isTerminal) then {
				_charPos set [2,0];
				_playerPos set [1,_charPos];					
			};
		};
		if (_isInVehicle) then {
			_currentWpn = "";
		} else {
			if (typeName _currentWpn == "STRING") then {
				_muzzles = getArray (configFile >> "cfgWeapons" >> _currentWpn >> "muzzles");
				if (count _muzzles > 1) then {_currentWpn = currentMuzzle _character;};	
			} else {
				//diag_log ("DW_DEBUG: _currentWpn: " + str(_currentWpn));
				_currentWpn = "";
			};
		};
		_temp = round (_character getVariable ["temperature",100]);
		_currentState = [[_currentWpn,_currentAnim,_temp],_Achievements];

		/*
			Everything is ready, now publish to HIVE
		*/
		if (count _playerPos > 0) then {
			_array = [];
			{
				if (_x > dayz_minpos && _x < dayz_maxpos) then {_array set [count _array,_x];};
			} forEach (_playerPos select 1);
			_playerPos set [1,_array];
		};
		
		if (!isNull _character) then {
			if (alive _character) then {
				//Wait for HIVE to be free and send request
				_key = format["CHILD:201:%1:%2:%3:%4:%5:%6:%7:%8:%9:%10:%11:%12:%13:%14:%15:%16:",_characterID,_playerPos,_playerGear,_playerBackp,_medical,false,false,_kills,_headShots,_distanceFoot,_timeSince,_currentState,_killsH,_killsB,_currentModel,_humanity];
				//diag_log ("HIVE: WRITE: "+ str(_key) + " / " + _characterID);
				//diag_log format["HIVE: SYNC: [%1,%2,%3,%4]",_characterID,_playerPos,_playerGear,_playerBackp];
				_key call server_hiveWrite;
			};
		};
		
		// If player is in a vehicle, keep its position updated
		if (vehicle _character != _character) then {
			[vehicle _character, "position"] call server_updateObject;
		};
		
		// Force gear updates for nearby vehicles/tents
		{[_x,"gear"] call server_updateObject;} count nearestObjects [_character,DayZ_GearedObjects,10];

		//Reset timer
		if (_timeSince > 0) then {
			_character setVariable ["lastTime",(diag_ticktime - _timeLeft)];
		};
	};
};