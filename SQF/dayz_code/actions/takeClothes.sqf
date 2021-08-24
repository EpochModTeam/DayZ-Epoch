/*
	Originally by Zabn
	Modified for DayZ Epoch 1.0.7+ by salival (https://github.com/oiad)
*/

if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

private ["_body","_clothesTaken","_finished","_itemNew","_itemNewName","_okSkin","_playerNear","_result","_skin"];

_body = _this select 3;

player removeAction s_player_clothes;
s_player_clothes = -1;

if (isNull _body) exitWith {dayz_actionInProgress = false; systemChat localize "str_cursorTargetNotFound";};

_playerNear = {isPlayer _x} count (([_body] call FNC_GetPos) nearEntities ["CAManBase", 10]) > 1;
if (_playerNear) exitWith {dayz_actionInProgress = false; localize "str_pickup_limit_5" call dayz_rollingMessages;};

_clothesTaken = _body getVariable["clothesTaken",false];
if (_clothesTaken) exitWith {dayz_actionInProgress = false; localize "STR_CL_TC_ALREADY_TAKEN" call dayz_rollingMessages;};

_skin = typeOf _body;
_itemNew = _skin;
_itemNew = "Skin_" + _itemNew;
_okSkin = isClass (configFile >> "CfgMagazines" >> _itemNew);

if (!_okSkin || _skin in DZE_Disable_Take_Clothes) exitWith {dayz_actionInProgress = false; format[localize "STR_CL_TC_NOT_SUPPORTED",_skin] call dayz_rollingMessages;};

_finished = ["Medic",1] call fn_loopAction;
if (_finished) then {
	_itemNewName = getText (configFile >> "CfgMagazines" >> _itemNew >> "displayName");
	_result = [player,_itemNew] call BIS_fnc_invAdd;
	if (_result) then {
		_body setVariable["clothesTaken",true,true];
		format[localize "STR_CL_TC_ADD_OK",_itemNewName] call dayz_rollingMessages;
	} else {
		format[localize "STR_CL_TC_ADD_FAIL",_itemNewName] call dayz_rollingMessages;
	};
} else {
	localize "str_epoch_player_26" call dayz_rollingMessages;
};

dayz_actionInProgress = false;