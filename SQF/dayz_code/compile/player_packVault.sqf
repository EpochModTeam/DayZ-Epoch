if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

/*
[_obj] spawn player_packVault;
*/

private ["_obj","_ownerID","_objectID","_objectUID","_location1","_location2","_packedClass","_text","_playerNear","_finished","_ComboMatch"];

_obj = _this;
_packedClass = getText (configFile >> "CfgVehicles" >> (typeOf _obj) >> "packedClass");
_text = getText (configFile >> "CfgVehicles" >> (typeOf _obj) >> "displayName");

// Silently exit if object no longer exists
if (isNull _obj || !(alive _obj)) exitWith { dayz_actionInProgress = false; };

// Server_handleSafeGear is called unscheduled and exits if the object is null, so two players packing at the same time will not work
_playerNear = _obj call dze_isnearest_player;
if (_playerNear) exitWith {dayz_actionInProgress = false; localize "str_epoch_player_16" call dayz_rollingMessages;};

_ownerID = _obj getVariable["CharacterID","0"];
_objectID = _obj getVariable["ObjectID","0"];
_objectUID = _obj getVariable["ObjectUID","0"];
_ComboMatch = (_ownerID == dayz_combination);
if (DZE_permanentPlot) then {_ownerID = _obj getVariable["ownerPUID","0"];};

player removeAction s_player_packvault;
s_player_packvault = 1;

if (_objectID == "0" && _objectUID == "0") exitWith {dayz_actionInProgress = false; s_player_packvault = -1; format[localize "str_epoch_player_118",_text] call dayz_rollingMessages;};

if (!_ComboMatch && (_ownerID != dayz_playerUID)) exitWith { dayz_actionInProgress = false; s_player_packvault = -1; format[localize "str_epoch_player_119",_text] call dayz_rollingMessages;};

format[localize "str_epoch_player_121",_text] call dayz_rollingMessages;
uiSleep 1;
_location1 = getPosATL player;
uiSleep 5;
_location2 = getPosATL player;

if(_location1 distance _location2 > 0.1) exitWith {
	format[localize "str_epoch_player_122",_text] call dayz_rollingMessages;
	s_player_packvault = -1;
	dayz_actionInProgress = false;
};

if (!isNull _obj && alive _obj) then {
	[player,"tentpack",0,false] call dayz_zombieSpeak;

	_finished = ["Medic",1] call fn_loopAction;
	if (isNull _obj or !_finished) exitWith {};

	["Working",0,[3,2,4,0]] call dayz_NutritionSystem;

	(findDisplay 106) closeDisplay 0; // Close gear
	dze_waiting = nil;

	[_packedClass,objNull] call fn_waitForObject;

	PVDZE_handleSafeGear = [player,_obj,2];
	publicVariableServer "PVDZE_handleSafeGear";
	//wait for response from server to verify pack was logged and gear added before proceeding
	waitUntil {!isNil "dze_waiting"};

	format[localize "str_epoch_player_123",_text] call dayz_rollingMessages;
};
s_player_packvault = -1;
dayz_actionInProgress = false;
