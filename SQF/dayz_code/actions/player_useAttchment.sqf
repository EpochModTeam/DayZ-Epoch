private ["_item","_onLadder","_hasmeditem","_config","_text","_removeWeapon","_addWeapon","_hasitem","_display"];

//Old System

_item = _this;

//Other initail info
call gear_ui_init;
_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;

//Get config info
_config = configFile >> "CfgMagazines" >> _item;
_removeWeapon = getText (_config >> "oringal");
_addWeapon = getText (_config >> "weapon");
_text = getText (_config >> "displayName");

//item checks
_hasitem = _item in magazines player;

//fail saves
if (!_hasitem) exitWith { localize "str_missingAttachment" call dayz_rollingMessages;};
if (_onLadder) exitWith { localize "str_player_21" call dayz_rollingMessages; };

if (_removeWeapon in (weapons player)) then { 
		player removeMagazine _item;
		player removeWeapon _removeWeapon;
		player addWeapon _addWeapon; 

	if (vehicle player != player) then {
		_display = findDisplay 106;
		_display closeDisplay 0;
	};
} else {
	closedialog 0;
	uiSleep 0.2;
	format[ localize "str_missingweapon", _text, _removeWeapon] call dayz_rollingMessages;
};	