/*
	DayZ Lock Safe
	Usage: _obj spawn player_lockVault;
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_obj","_ownerID","_text","_playerNear","_ComboMatch","_objType"];

if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

player removeAction s_player_lockvault;
s_player_lockvault = 1;

_obj = _this;
_objType = typeOf _obj;

_lockedClass = getText (configFile >> "CfgVehicles" >> _objType >> "lockedClass");
_text = getText (configFile >> "CfgVehicles" >> _objType >> "displayName");

if (isNull _obj) exitWith {dayz_actionInProgress = false;};

_playerNear = {isPlayer _x} count (([_obj] call FNC_GetPos) nearEntities ["CAManBase", 12]) > 1;
if (_playerNear) exitWith {dayz_actionInProgress = false; localize "str_pickup_limit_5" call dayz_rollingMessages;};

_ownerID = _obj getVariable["CharacterID","0"];
_ComboMatch = (_ownerID == dayz_combination);
if (DZE_permanentPlot) then {_ownerID = _obj getVariable["ownerPUID","0"];};

if (!_ComboMatch && (_ownerID != dayz_playerUID)) exitWith {dayz_actionInProgress = false; s_player_lockvault = -1; format[localize "str_epoch_player_115",_text] call dayz_rollingMessages;};

if (!isNull _obj) then {
	(findDisplay 106) closeDisplay 0; // Close gear
	dze_waiting = nil;

	[_lockedClass,objNull] call fn_waitForObject;

	if (_lockedClass == "LockboxStorageLocked") then {
		[player,"lockboxclose",0,false] call dayz_zombieSpeak;
	} else {
		[player,"safeclose",0,false] call dayz_zombieSpeak;
	};

	PVDZE_handleSafeGear = [player,_obj,1];
	publicVariableServer "PVDZE_handleSafeGear";

	waitUntil {!isNil "dze_waiting"}; // wait for response from server to verify safe was logged and saved before proceeding

	format[localize "str_epoch_player_117",_text] call dayz_rollingMessages;
};

s_player_lockvault = -1;
dayz_actionInProgress = false;
