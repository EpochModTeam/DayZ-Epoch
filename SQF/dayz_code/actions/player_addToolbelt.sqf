/*
	This script handles three different cases:
	1. Adding dayz_onBack to toolbelt
	2. Adding primary to toolbelt
	3. Removing tool from toolbelt and converting it to primary
*/

if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

private ["_item","_config","_onLadder","_text","_create","_config2","_primaryFull","_removed","_toolsFull"];

disableSerialization;
_item = _this;
_config = configFile >> "cfgWeapons" >> _item;
_create = getArray (_config >> "ItemActions" >> "Toolbelt" >> "output") select 0;
_config2 = configFile >> "cfgWeapons" >> _create;
_toolsFull = getNumber (_config2 >> "type") == 131072 && ({getNumber (configFile >> "CfgWeapons" >> _x >> "type") == 131072} count (weapons player)) >= 12;
_primaryFull = getNumber (_config2 >> "type") == 1 && (primaryWeapon player != "");
_removed = false;

if (player hasWeapon _create or _toolsFull or _primaryFull) exitWith {
	localize "str_player_24" call dayz_rollingMessages;
	dayz_actionInProgress = false;
};

_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {localize "str_player_21" call dayz_rollingMessages; dayz_actionInProgress = false;};

//Make sure the player still has the tool this script was spawned with
_text = getText (_config >> "displayName");
if ((dayz_onBack != _item && carryClick) or (!(player hasWeapon _item) && !carryClick)) exitWith {
	format[localize "str_player_30",_text] call dayz_rollingMessages;
	dayz_actionInProgress = false;
};

call gear_ui_init;

if (_item == dayz_onBack && carryClick) then {
	dayz_onBack = "";
	carryClick = false;
	((findDisplay 106) displayCtrl 1209) ctrlSetText "";
	_removed = true;
};

if (_removed or {([player,_config] call BIS_fnc_invRemove) == 1}) then {
	player addWeapon _create;
} else {
	closeDialog 0;
	format[localize "str_player_30",_text] call dayz_rollingMessages;
};

dayz_actionInProgress = false;