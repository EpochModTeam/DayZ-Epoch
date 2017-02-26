private ["_distanceFoot","_playerPos","_lastPos","_playerGear","_medical","_currentModel","_currentAnim",
"_currentWpn","_muzzles","_array","_coins","_key","_globalCoins","_bankCoins","_playerBackp","_exitReason",
"_backpack","_kills","_killsB","_killsH","_headShots","_humanity","_lastTime","_timeGross","_timeSince",
"_timeLeft","_config","_onLadder","_isTerminal","_modelChk","_temp","_currentState","_character",
"_magazines","_characterID","_charPos","_isInVehicle","_name","_inDebug","_newPos","_count","_maxDist","_relocate","_playerUID"];
//[player,array]

_character = _this select 0;
_magazines = _this select 1;
_characterID = _character getVariable ["characterID","0"];
_playerUID = getPlayerUID _character;
_charPos = getPosATL _character;
_isInVehicle = vehicle _character != _character;
_timeSince = 0;
_humanity = 0;
_name = if (alive _character) then {name _character} else {"Dead Player"};
_inDebug = (respawn_west_original distance _charPos) < 1500;

_exitReason = switch true do {
	case (isNil "_characterID"): {("ERROR: Cannot Sync Character " + _name + " has nil characterID")}; //Unit is null
	case (_inDebug): {format["INFO: Cannot Sync Character %1 near respawn_west %2. This is normal when relogging or changing clothes.",_name,_charPos]};
	case (_characterID == "0"): {("ERROR: Cannot Sync Character " + _name + " has no characterID")};
	case (_character isKindOf "Animal"): {("ERROR: Cannot Sync Character " + _name + " is an Animal class")};
	default {"none"};
};

if (_exitReason != "none") exitWith {
	diag_log _exitReason;
};

//Check for player initiated updates
_playerPos =	[];
_playerGear =	[];
_playerBackp =	[];
_medical =		[];
_distanceFoot =	0;

//all getVariable immediately
_globalCoins = _character getVariable ["GlobalMoney", -1];
_bankCoins = _character getVariable ["MoneySpecial", -1];
_coins = _character getVariable [Z_MoneyVariable, -1]; //should getting coins fail set the variable to an invalid value to prevent overwritting the in the DB
_lastPos = _character getVariable ["lastPos",_charPos];
_usec_Dead = _character getVariable ["USEC_isDead",false];
_lastTime = 	_character getVariable ["lastTime",diag_ticktime];
_modelChk = 	_character getVariable ["model_CHK",""];
_temp = round (_character getVariable ["temperature",100]);
_lastMagazines = _character getVariable ["ServerMagArray",[[],""]];
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

_charPosLen = count _charPos;

if (!isNil "_magazines") then {
	if (typeName _magazines == "ARRAY") then {
		_playerGear = [weapons _character,_magazines select 0,_magazines select 1];
		_character setVariable["ServerMagArray",_magazines, false];
	};
} else {
	//check Magazines everytime they aren't sent by player_forceSave
	_magTemp = (_lastMagazines select 0);
	if (count _magTemp > 0) then {
		_magazines = [(magazines _character),20] call array_reduceSize;
		{
			_class = _x;
			if (typeName _x == "ARRAY") then {
				_class = _x select 0;
			};
			if (_class in _magazines) then {
				_MatchedCount = {_compare = if (typeName _x == "ARRAY") then {_x select 0;} else {_x}; _compare == _class} count _magTemp;
				_CountedActual = {_x == _class} count _magazines;
				if (_MatchedCount > _CountedActual) then {
					_magTemp set [_forEachIndex, "0"];
				};
			} else {
				_magTemp set [_forEachIndex, "0"];
			};
		} forEach (_lastMagazines select 0);
		_magazines = _magTemp - ["0"];
		_magazines = [_magazines, (_lastMagazines select 1)];
		_character setVariable["ServerMagArray",_magazines, false];
		_playerGear = [weapons _character,_magazines select 0,_magazines select 1];
	};
};

//Check if update is requested
if !((_charPos select 0 == 0) && (_charPos select 1 == 0)) then {
	//Position is not zero
	//diag_log ("getting position..."); sleep 0.05;
	_playerPos = [round (direction _character),_charPos];
	if (count _lastPos > 2 && {_charPosLen > 2}) then {
		if (!_isInVehicle) then {_distanceFoot = round (_charPos distance _lastPos);};
		_character setVariable["lastPos",_charPos];
	};
	if (_charPosLen < 3) then {_playerPos = [];};
	//diag_log ("position = " + str(_playerPos)); sleep 0.05;
};
_character setVariable ["posForceUpdate",false,true];

//Check player backpack each time sync runs
_backpack = unitBackpack _character;
_playerBackp = [typeOf _backpack,getWeaponCargo _backpack,getMagazineCargo _backpack];

if (!_usec_Dead) then {
	//diag_log ("medical check..."); sleep 0.05;
	_medical = _character call player_sumMedical;
	//diag_log ("medical result..." + str(_medical)); sleep 0.05;
};
_character setVariable ["medForceUpdate",false,true];

_character addScore _kills;		
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
if (_currentModel == _modelChk) then {
	_currentModel = "";
} else {
	_currentModel = str _currentModel;
	_character setVariable ["model_CHK",typeOf _character];
};
if (count _this > 4) then { //calling from player_onDisconnect
	if (_this select 4) then { //combat logged
		_medical set [1, true]; //set unconcious to true
		_medical set [10, 150]; //combat timeout
		//_character setVariable ["NORRN_unconscious",true,true]; // Set status to unconscious
		//_character setVariable ["unconsciousTime",150,true]; // Set knock out timer to 2 minutes 30 seconds
		//_character setVariable ["USEC_injured",true]; // Set status to bleeding
		//_character setVariable ["USEC_BloodQty",3000]; // Set blood to 3000
	};	
	if (_isInVehicle) then {
		//if the player object is inside a vehicle lets eject the player
		_relocate = ((vehicle _character isKindOf "Air") && (_charPos select 2 > 1.5));
		_character action ["eject", vehicle _character];
		
		// Prevent relog in parachute, heli or plane above base exploit to get inside
		if (_relocate) then {
			_count = 0;
			_maxDist = 800;
			_newPos = [_charPos, 80, _maxDist, 10, 1, 0, 0, [], [_charPos,_charPos]] call BIS_fnc_findSafePos;
			
			while {_newPos distance _charPos == 0} do {
				_count = _count + 1;
				if (_count > 4) exitWith {_newPos = _charPos;}; // Max 4km away fail safe (needs to finish fast so server_playerSync runs below)
				_newPos = [_charPos, 80, (_maxDist + 800), 10, 1, 0, 0, [], [_charPos,_charPos]] call BIS_fnc_findSafePos;
			};
			_newPos set [2,0]; //findSafePos only returns two elements
			_charPos = _newPos;
			diag_log format["%1(%2) logged out in air vehicle. Relocated to safePos.",_name,_playerUID];
		};
	};
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
_currentState = [[_currentWpn,_currentAnim,_temp],[]];

// If player is in a vehicle, keep its position updated
if (vehicle _character != _character) then {
	[vehicle _character, "position"] call server_updateObject;
};

//Reset timer
if (_timeSince > 0) then {
	_character setVariable ["lastTime",(diag_ticktime - _timeLeft)];
};

/*
	Everything is ready, now publish to HIVE
	Low priority code below this point where _character object is no longer needed and may be Null.
*/
if (count _playerPos > 0) then {
	_array = [];
	{
		if (_x > dayz_minpos && _x < dayz_maxpos) then {_array set [count _array,_x];};
	} forEach (_playerPos select 1);
	_playerPos set [1,_array];
};

//Wait for HIVE to be free and send request
_key = if (Z_SingleCurrency) then {
	format["CHILD:201:%1:%2:%3:%4:%5:%6:%7:%8:%9:%10:%11:%12:%13:%14:%15:%16:%17:",_characterID,_playerPos,_playerGear,_playerBackp,_medical,false,false,_kills,_headShots,_distanceFoot,_timeSince,_currentState,_killsH,_killsB,_currentModel,_humanity,_coins]
} else {
	format["CHILD:201:%1:%2:%3:%4:%5:%6:%7:%8:%9:%10:%11:%12:%13:%14:%15:%16:",_characterID,_playerPos,_playerGear,_playerBackp,_medical,false,false,_kills,_headShots,_distanceFoot,_timeSince,_currentState,_killsH,_killsB,_currentModel,_humanity]
};

//diag_log str formatText["INFO - %2(UID:%3) PlayerSync, %1",_key,_name,_playerUID];

_key call server_hiveWrite;

if (Z_SingleCurrency) then { //update global coins
	_key = format["CHILD:205:%1:%2:%3:%4:",_playerUID,dayZ_instance,_globalCoins,_bankCoins];
	_key call server_hiveWrite;
};

// Force gear updates for nearby vehicles/tents
{[_x,"gear"] call server_updateObject;} count nearestObjects [_charPos,DayZ_GearedObjects,10];