/*
[_obj] spawn player_packVault;
*/
private ["_obj","_ownerID","_objectID","_objectUID","_alreadyPacking","_location1","_location2","_packedClass","_text","_playerNear"];

if (dayz_actionInProgress) exitWith {localize "str_epoch_player_15" call dayz_rollingMessages;};
dayz_actionInProgress = true;

_obj = _this;
_packedClass = getText (configFile >> "CfgVehicles" >> (typeOf _obj) >> "packedClass");
_text = getText (configFile >> "CfgVehicles" >> (typeOf _obj) >> "displayName");

// Silently exit if object no longer exists
if (isNull _obj || !(alive _obj)) exitWith { dayz_actionInProgress = false; };

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

_alreadyPacking = _obj getVariable["packing",0];
if (_alreadyPacking == 1) exitWith {dayz_actionInProgress = false; s_player_packvault = -1; format[localize "str_epoch_player_120",_text] call dayz_rollingMessages;};
_obj setVariable["packing",1];

format[localize "str_epoch_player_121",_text] call dayz_rollingMessages;
uiSleep 1; 
_location1 = getPosATL player;
uiSleep 5;
_location2 = getPosATL player;
	
if(_location1 distance _location2 > 0.1) exitWith {
	format[localize "str_epoch_player_122",_text] call dayz_rollingMessages;
	_obj setVariable["packing",0];
	s_player_packvault = -1;
	dayz_actionInProgress = false;
};

if (!isNull _obj && alive _obj) then {
	["Working",0,[3,2,4,0]] call dayz_NutritionSystem;
	player playActionNow "Medic";
	[player,"tentpack",0,false] call dayz_zombieSpeak;
	uiSleep 3;
	
	disableUserInput true; // Make sure player can not modify gear while it is being added
	(findDisplay 106) closeDisplay 0; // Close gear
	dze_waiting = nil;
	
	[_packedClass,objNull] call fn_waitForObject;
	
	PVDZE_handleSafeGear = [player,_obj,2];
	publicVariableServer "PVDZE_handleSafeGear";	
	//wait for response from server to verify pack was logged and gear added before proceeding
	waitUntil {!isNil "dze_waiting"};
	disableUserInput false; // Gear is done being added now
	
	format[localize "str_epoch_player_123",_text] call dayz_rollingMessages;
};
s_player_packvault = -1;
dayz_actionInProgress = false;
