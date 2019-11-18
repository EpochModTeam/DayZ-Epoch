/*
	DayZ Lock Safe
	Usage: _obj spawn player_unlockVault;
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_obj","_ownerID","_playerNear","_text","_objType","_ComboMatch"];

if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

{player removeAction _x} count s_player_combi;
s_player_combi = [];
s_player_unlockvault = 1;

_obj = _this;
_objType = typeOf _obj;

if !(_objType in DZE_LockedStorage) exitWith {
	s_player_unlockvault = -1;
	dayz_actionInProgress = false;
};

// Server_handleSafeGear is called unscheduled and exits if the object is null, so two players unlocking at the same time will not work
_playerNear = _obj call dze_isnearest_player;
if (_playerNear) exitWith {dayz_actionInProgress = false; localize "str_epoch_player_20" call dayz_rollingMessages;};

if (isNull _obj || !(alive _obj)) exitWith { dayz_actionInProgress = false; };

_unlockedClass = getText (configFile >> "CfgVehicles" >> _objType >> "unlockedClass");
_text = getText (configFile >> "CfgVehicles" >> _objType >> "displayName");

_ownerID = _obj getVariable["CharacterID","0"];
_ComboMatch = (_ownerID == dayz_combination);
if (DZE_permanentPlot) then {_ownerID = _obj getVariable["ownerPUID","0"];};

if (isNil "dayz_UnlockTime") then {dayz_UnlockTime = 5;};
if (DZE_lockablesHarderPenalty && {((diag_tickTime - dayz_lastCodeFail) + dayz_unlockTime / 2) > 120}) then {dayz_UnlockTime = 5;};

if (_ComboMatch || (_ownerID == dayz_playerUID)) then {
	(findDisplay 106) closeDisplay 0;
	dze_waiting = nil;
	dayz_UnlockTime = 5;
	dayz_lastCodeFail = 0;

	[_unlockedClass,objNull] call fn_waitForObject;
	
	if (_unlockedClass == "LockboxStorage") then {
		[player,"lockboxopen",0,false] call dayz_zombieSpeak;
	} else {
		[player,"safeopen",0,false] call dayz_zombieSpeak;
	};

	PVDZE_handleSafeGear = [player,_obj,0];
	publicVariableServer "PVDZE_handleSafeGear";
	//wait for response from server to verify safe was logged before proceeding
	waitUntil {!isNil "dze_waiting"};

	format[localize "STR_BLD_UNLOCKED",_text] call dayz_rollingMessages;
} else {
	PVDZE_handleSafeGear = [player,_obj,3,dayz_combination];
	publicVariableServer "PVDZE_handleSafeGear";

	[player,"repair",0,false] call dayz_zombieSpeak;
	[player,25,true,(getPosATL player)] spawn player_alertZombies;
	if (DZE_lockablesHarderPenalty) then {
		dayz_lastCodeFail = (diag_tickTime + dayz_UnlockTime);
		dayz_UnlockTime = dayz_UnlockTime * 2;
	} else {
		dayz_lastCodeFail = (diag_tickTime + dayz_UnlockTime);
	};

	format [localize "str_epoch_player_19",round(dayz_lastCodeFail - diag_tickTime)] call dayz_rollingMessages;
};
s_player_unlockvault = -1;
dayz_actionInProgress = false;
