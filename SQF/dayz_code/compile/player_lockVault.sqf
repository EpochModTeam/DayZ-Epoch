/*
	DayZ Lock Safe
	Usage: [_obj] spawn player_unlockVault;
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_obj","_ownerID","_alreadyPacking","_text","_playerNear","_ComboMatch","_objType"];
if (dayz_actionInProgress) exitWith {localize "str_epoch_player_10" call dayz_rollingMessages;};
dayz_actionInProgress = true;

player removeAction s_player_lockvault;
s_player_lockvault = 1;

_obj = _this;
_objType = typeOf _obj;

_lockedClass = getText (configFile >> "CfgVehicles" >> _objType >> "lockedClass");
_text = getText (configFile >> "CfgVehicles" >> _objType >> "displayName");

// Silently exit if object no longer exists
if (isNull _obj) exitWith { dayz_actionInProgress = false; };
player playActionNow "Medic";
uiSleep 1;
[player,"tentpack",0,false] call dayz_zombieSpeak;
uiSleep 5;

_playerNear = _obj call dze_isnearest_player;
if (_playerNear) exitWith {dayz_actionInProgress = false; localize "str_epoch_player_11" call dayz_rollingMessages;};

_ownerID = _obj getVariable["CharacterID","0"];
_ComboMatch = (_ownerID == dayz_combination);
if (DZE_permanentPlot) then {_ownerID = _obj getVariable["ownerPUID","0"];};

if (!_ComboMatch && (_ownerID != dayz_playerUID)) exitWith {dayz_actionInProgress = false; s_player_lockvault = -1; format[localize "str_epoch_player_115",_text] call dayz_rollingMessages; };

_alreadyPacking = _obj getVariable["packing",0];
if (_alreadyPacking == 1) exitWith {dayz_actionInProgress = false; s_player_lockvault = -1; format[localize "str_epoch_player_116",_text] call dayz_rollingMessages;};
_obj setVariable["packing",1];

if (!isNull _obj) then {
	disableUserInput true; // Make sure player can not modify gear while it is being saved
	(findDisplay 106) closeDisplay 0; // Close gear
	dze_waiting = nil;
	
	[_lockedClass,objNull] call fn_waitForObject;
	
	PVDZE_handleSafeGear = [player,_obj,1];
	publicVariableServer "PVDZE_handleSafeGear";	
	//wait for response from server to verify safe was logged and saved before proceeding
	waitUntil {!isNil "dze_waiting"};
	disableUserInput false; // Safe is done saving now

	format[localize "str_epoch_player_117",_text] call dayz_rollingMessages;
};
s_player_lockvault = -1;
dayz_actionInProgress = false;