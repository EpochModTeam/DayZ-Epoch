/*
	DayZ Lock Safe
	Usage: _obj spawn player_lockVault;
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

private ["_code","_lockedClass","_obj","_ownerID","_text","_ComboMatch","_objType"];

player removeAction s_player_lockvault;
s_player_lockvault = 1;

_obj = _this;
_objType = typeOf _obj;

_lockedClass = getText (configFile >> "CfgVehicles" >> _objType >> "lockedClass");
_text = getText (configFile >> "CfgVehicles" >> _objType >> "displayName");

if (isNull _obj) exitWith {dayz_actionInProgress = false;};

_ownerID = _obj getVariable["CharacterID","0"];
_ComboMatch = (_ownerID == dayz_combination);
if (DZE_permanentPlot) then {_ownerID = _obj getVariable["ownerPUID","0"];};

if (!_ComboMatch && (_ownerID != dayz_playerUID)) exitWith {dayz_actionInProgress = false; s_player_lockvault = -1; format[localize "str_epoch_player_115",_text] call dayz_rollingMessages;};

if (!isNull _obj) then {
	(findDisplay 106) closeDisplay 0; // Close gear
	dze_waiting = nil;

	[_lockedClass,objNull] call fn_waitForObject;

	if (_objType in DZE_LockboxesUnlocked) then {
		[player,(getPosATL player),20,"lockboxclose"] spawn fnc_alertZombies;
	} else {
		[player,(getPosATL player),20,"safeclose"] spawn fnc_alertZombies;
	};

	_code = [_obj getVariable["CharacterID","0"],dayz_combination] select (_ComboMatch);

	PVDZE_handleSafeGear = [player,_obj,1,_code,dayz_authKey];
	publicVariableServer "PVDZE_handleSafeGear";

	waitUntil {!isNil "dze_waiting"}; // wait for response from server to verify safe was logged and saved before proceeding

	format[localize "str_epoch_player_117",_text] call dayz_rollingMessages;
};

s_player_lockvault = -1;
dayz_actionInProgress = false;
