#include "\z\addons\dayz_server\compile\server_toggle_debug.hpp"

local _character = _this select 0;
local _magazines = _this select 1;
local _dayz_onBack = _character getVariable ["dayz_onBack",""];
local _characterID = _character getVariable ["characterID","0"];
local _playerUID = getPlayerUID _character;
local _charPos = getPosATL _character;
local _isInVehicle = vehicle _character != _character;
local _timeSince = 0;
local _humanity = 0;
local _name = if (alive _character) then {name _character} else {"Dead Player"};
local _inDebug = (respawn_west_original distance _charPos) < 1500;

local _exitReason = call {
	if (isNil "_characterID") exitwith {("ERROR: Cannot Sync Character " + _name + " has nil characterID")}; //Unit is null
	if (_inDebug) exitwith {format["INFO: Cannot Sync Character %1 near respawn_west %2. This is normal when relogging or changing clothes.",_name,_charPos]};
	if (_characterID == "0") exitwith {("ERROR: Cannot Sync Character " + _name + " has no characterID")};
	if (_character isKindOf "Animal") exitwith {("ERROR: Cannot Sync Character " + _name + " is an Animal class")};
	"none";
};

if (_exitReason != "none") exitWith {
	diag_log _exitReason;
};

//Check for player initiated updates
local _playerPos = [];
local _playerGear =	[];
local _playerBackp = [];
local _medical = [];
local _distanceFoot = 0;

//all getVariable immediately
local _globalCoins = _character getVariable ["globalMoney", -1];
local _bankCoins = _character getVariable ["bankMoney", -1];
local _coins = _character getVariable ["cashMoney", -1]; //should getting coins fail set the variable to an invalid value to prevent overwritting the in the DB
local _lastPos = _character getVariable ["lastPos",_charPos];
local _usec_Dead = _character getVariable ["USEC_isDead",false];
local _lastTime = _character getVariable ["lastTime",-1];
local _modelChk = _character getVariable ["model_CHK",""];
local _temp = round (_character getVariable ["temperature",100]);
local _lastMagazines = _character getVariable ["ServerMagArray",[]];
//Get difference between current stats and stats at last sync
local _statsDiff = [_character,_playerUID] call server_getStatsDiff;
_humanity = _statsDiff select 0;
local _kills = _statsDiff select 1;
local _headShots = _statsDiff select 2;
local _killsH = _statsDiff select 3;
local _killsB = _statsDiff select 4;

local _charPosLen = count _charPos;
local _magTemp = [];

if (!isNil "_magazines") then {
	_playerGear = [weapons _character,_magazines,_dayz_onBack];
	_character setVariable["ServerMagArray",_magazines, false];
} else {
	//check Magazines everytime they aren't sent by player_forceSave
	_magTemp = _lastMagazines;

	if (count _magTemp > 0) then {
		_magazines = [(magazines _character),20] call array_reduceSize;
		{
			local _class = _x;
			if (typeName _x == "ARRAY") then {
				_class = _x select 0;
			};
			if (_class in _magazines) then {
				local _MatchedCount = {local _compare = if (typeName _x == "ARRAY") then {_x select 0;} else {_x}; _compare == _class} count _magTemp;
				local _CountedActual = {_x == _class} count _magazines;
				if (_MatchedCount > _CountedActual) then {
					_magTemp set [_forEachIndex, "0"];
				};
			} else {
				_magTemp set [_forEachIndex, "0"];
			};
		} forEach _lastMagazines;
		_magazines = _magTemp - ["0"];
		_character setVariable["ServerMagArray",_magazines, false];
		_playerGear = [weapons _character,_magazines,_dayz_onBack];
	} else {
		_magazines = _magTemp;
	};
	_character setVariable["ServerMagArray",_magazines, false];
	_playerGear = [weapons _character,_magazines,_dayz_onBack];
};

//Check if update is requested
if !((_charPos select 0 == 0) && (_charPos select 1 == 0)) then {
	//Position is not zero
	_playerPos = [round (direction _character),_charPos];
	if (count _lastPos > 2 && {_charPosLen > 2}) then {
		if (!_isInVehicle) then {_distanceFoot = round (_charPos distance _lastPos);};
		_character setVariable["lastPos",_charPos];
	};
	if (_charPosLen < 3) then {_playerPos = [];};
};

//Check player backpack each time sync runs
local _backpack = unitBackpack _character;
_playerBackp = [typeOf _backpack,getWeaponCargo _backpack,getMagazineCargo _backpack];

if (!_usec_Dead) then {
	_medical = _character call player_sumMedical;
};

_character addScore _kills;
/*
	Assess how much time has passed, for recording total time on server
	Note "lastTime" is -1 after clothes change
*/
local _timeLeft = 0;
if (_lastTime == -1) then {
	_character setVariable ["lastTime",diag_tickTime,false];
} else {
	local _timeGross = (diag_tickTime - _lastTime);
	_timeSince = floor (_timeGross / 60);
	_timeLeft = (_timeGross - (_timeSince * 60));
};
/*
	Get character state details
*/
local _currentWpn = currentMuzzle _character;
local _currentAnim = animationState _character;
local _config = configFile >> "CfgMovesMaleSdr" >> "States" >> _currentAnim;
local _onLadder = (getNumber (_config >> "onLadder")) == 1;
local _isTerminal = (getNumber (_config >> "terminal")) == 1;
//_wpnDisabled =	(getNumber (_config >> "disableWeapons")) == 1;
local _currentModel = typeOf _character;
if (_currentModel == _modelChk) then {
	_currentModel = "";
} else {
	_currentModel = str _currentModel;
	_character setVariable ["model_CHK",typeOf _character];
};

// If player is in a vehicle, keep its position updated
if (vehicle _character != _character) then {
	[vehicle _character, "position"] call server_updateObject;
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
		local _relocate = ((vehicle _character isKindOf "Air") && (_charPos select 2 > 1.5));
		_character action ["eject", vehicle _character];

		// Prevent relog in parachute, heli or plane above base exploit to get inside
		if (_relocate) then {
			local _count = 0;
			local _maxDist = 800;
			local _newPos = [_charPos, 80, _maxDist, 10, 1, 0, 0, [], [_charPos,_charPos]] call BIS_fnc_findSafePos;

			while {_newPos distance _charPos == 0} do {
				_count = _count + 1;
				if (_count > 4) exitWith {_newPos = _charPos;}; // Max 4km away fail safe (needs to finish fast so server_playerSync runs below)
				_newPos = [_charPos, 80, (_maxDist + 800), 10, 1, 0, 0, [], [_charPos,_charPos]] call BIS_fnc_findSafePos;
			};
			_newPos set [2,0]; //findSafePos only returns two elements
			_charPos = _newPos;
			diag_log format["%1(%2) logged out in air vehicle. Relocated to safePos %3 - %4.",_name,_playerUID,mapGridPosition _charPos,_charPos];
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
		local _muzzles = getArray (configFile >> "cfgWeapons" >> _currentWpn >> "muzzles");
		if (count _muzzles > 1) then {_currentWpn = currentMuzzle _character;};
	} else {
		//diag_log ("DW_DEBUG: _currentWpn: " + str(_currentWpn));
		_currentWpn = "";
	};
};
local _currentState = [[_currentWpn,_currentAnim,_temp],[]];

//Reset timer
if (_timeSince > 0) then {
	_character setVariable ["lastTime",(diag_ticktime - _timeLeft)];
};

/*
	Everything is ready, now publish to HIVE
	Low priority code below this point where _character object is no longer needed and may be Null.
*/
if (count _playerPos > 0) then {
	local _array = [];
	{
		if (_x > dayz_minpos && _x < dayz_maxpos) then {_array set [count _array,_x];};
	} forEach (_playerPos select 1);
	_playerPos set [1,_array];
};

//Wait for HIVE to be free and send request
local _key = if (Z_SingleCurrency) then {
	str formatText["CHILD:201:%1:%2:%3:%4:%5:%6:%7:%8:%9:%10:%11:%12:%13:%14:%15:%16:%17:",_characterID,_playerPos,_playerGear,_playerBackp,_medical,false,false,_kills,_headShots,_distanceFoot,_timeSince,_currentState,_killsH,_killsB,_currentModel,_humanity,_coins]
} else {
	str formatText["CHILD:201:%1:%2:%3:%4:%5:%6:%7:%8:%9:%10:%11:%12:%13:%14:%15:%16:",_characterID,_playerPos,_playerGear,_playerBackp,_medical,false,false,_kills,_headShots,_distanceFoot,_timeSince,_currentState,_killsH,_killsB,_currentModel,_humanity]
};

#ifdef PLAYER_DEBUG
	diag_log str formatText["INFO - %2(UID:%4,CID:%3) PlayerSync, %1",_key,_name,_characterID,_playerUID];
#endif
_key call server_hiveWrite;

if (Z_SingleCurrency) then { //update global coins
	_key = str formatText["CHILD:205:%1:%2:%3:%4:",_playerUID,dayZ_instance,_globalCoins,_bankCoins];
	_key call server_hiveWrite;
};

// Force gear updates for nearby vehicles/tents
{[_x,"gear"] call server_updateObject;} count nearestObjects [[_character] call FNC_GetPos,DayZ_GearedObjects,10];
