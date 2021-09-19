///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	_obj spawn player_packVault;
//
//	Updated by:	Victor the Cleaner
//	Date:		September 2021
//
//	- Now includes helper spheres for improved player experience
//
///////////////////////////////////////////////////////////////////////////////////////////////////

if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};	// Wait for the previous action to complete to perform another!
dayz_actionInProgress = true;

local _obj	= _this;
local _typeOf	= typeOf _obj;
local _text	= getText (configFile >> "CfgVehicles" >> _typeOf >> "displayName");
local _packedClass = getText (configFile >> "CfgVehicles" >> _typeOf >> "packedClass");

if (isNull _obj || !(alive _obj)) exitWith {dayz_actionInProgress = false;};

local _playerNear = {isPlayer _x} count (([_obj] call FNC_GetPos) nearEntities ["CAManBase", 10]) > 1;
if (_playerNear) exitWith {
	dayz_actionInProgress = false;
	localize "str_pickup_limit_5" call dayz_rollingMessages;			// Another player is nearby. Only one player can be near to perform this action.
};

local _ownerID		= _obj getVariable["CharacterID","0"];
local _objectID		= _obj getVariable["ObjectID","0"];
local _objectUID	= _obj getVariable["ObjectUID","0"];
local _ComboMatch	= (_ownerID == dayz_combination);

if (DZE_permanentPlot) then {_ownerID = _obj getVariable["ownerPUID","0"];};

if (_objectID == "0" && _objectUID == "0") exitWith {
	dayz_actionInProgress = false;
//	s_player_packvault = -1;
	format[localize "str_epoch_player_118", _text] call dayz_rollingMessages;	// %1 not setup yet.
};

if (!_ComboMatch && (_ownerID != dayz_playerUID)) exitWith {
	dayz_actionInProgress = false;
//	s_player_packvault = -1;
	format[localize "str_epoch_player_119", _text] call dayz_rollingMessages;	// You cannot pack this %1, you do not know the combination.
};

if (isNull _obj && {!alive _obj}) exitWith {						// object has been destroyed or deleted
//	s_player_packvault = -1;
	dayz_actionInProgress = false;
};

player removeAction s_player_packvault;
s_player_packvault = 1;

format[localize "str_epoch_player_121", _text] call dayz_rollingMessages;		// Packing %1, move from this position to cancel within 5 seconds.

[_obj, DZE_NoRefundTexture] call fn_displayHelpers;			// create helpers (red)

[player,(getPosATL player),20,"tentpack"] spawn fnc_alertZombies;	// make noise

local _finished = ["Medic",1] call fn_loopAction;			// animation

[] call fn_displayHelpers;						// delete helpers

if (isNull _obj || !_finished) exitWith {
	s_player_packvault = -1;
	dayz_actionInProgress = false;
};

(findDisplay 106) closeDisplay 0; // Close gear

_playerNear = {isPlayer _x} count (([_obj] call FNC_GetPos) nearEntities ["CAManBase", 10]) > 1;	// if another player has approached during the packing animation
if (_playerNear) exitWith {
	dayz_actionInProgress = false;
	localize "str_pickup_limit_5" call dayz_rollingMessages;					// Another player is nearby. Only one player can be near to perform this action.
};

["Working",0,[3,2,4,0]] call dayz_NutritionSystem;

dze_waiting = nil;

[_packedClass, objNull] call fn_waitForObject;

local _code = [_obj getVariable["CharacterID","0"],dayz_combination] select (_ComboMatch);

PVDZE_handleSafeGear = [player,_obj,2,_code,dayz_authKey];
publicVariableServer "PVDZE_handleSafeGear";

waitUntil {!isNil "dze_waiting"}; // wait for response from server to verify pack was logged and gear added before proceeding

format[localize "str_epoch_player_123", _text] call dayz_rollingMessages;	// Your %1 has been packed

s_player_packvault = -1;
dayz_actionInProgress = false;
