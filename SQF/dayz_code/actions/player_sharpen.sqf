if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

private ["_item","_use","_repair","_waterUsed","_displayName","_finished"];

//['ItemKnifeBlunt','ItemKnife']
_item = _this select 0; //Item to be sharpened
_repair = _this select 1; //Item to be given back.

_use = ["ItemWaterBottle","ItemWaterBottleInfected","ItemWaterBottleSafe","ItemWaterBottleBoiled","ItemWaterBottleHerbal","ItemPlasticWaterBottle","ItemPlasticWaterBottleInfected","ItemPlasticWaterBottleSafe","ItemPlasticWaterBottleBoiled","ItemPlasticWaterBottleHerbal"];
_waterUsed = nil;

call gear_ui_init;
closeDialog 1;

{
	if (_x IN magazines player) exitwith { _waterUsed = _x; };
} foreach _use;

// item is missing or tools are missing
if (isNil "_waterUsed") exitWith {
	localize "str_sharpen_missing_water" call dayz_rollingMessages;
	dayz_actionInProgress = false;
};

// item is missing or tools are missing
if !("equip_brick" IN magazines player) exitWith {
	_displayName = getText (configFile >> "CfgMagazines" >> "equip_brick" >> "displayName");
	format [localize "str_missing_to_do_this",_displayName] call dayz_rollingMessages;
	dayz_actionInProgress = false;
};

[player,(getPosATL player),5,"repair"] spawn fnc_alertZombies;
_finished = ["Medic",1] call fn_loopAction;

if (!_finished) exitWith {
	localize "STR_EPOCH_PLAYER_26" call dayz_rollingMessages;
	dayz_actionInProgress = false;
};

if (player hasWeapon _item) then {
	_displayName = getText (configFile >> "CfgWeapons" >> _item >> "displayName");

	player removeMagazine _waterUsed;
	player removeWeapon _item;

	if !(player hasWeapon _repair) then {
		player addWeapon _repair;
	} else {
		//Drop sharpened knife if player already has one. Prevents duplicate tool.
		[_repair,2,1] call fn_dropItem;
		format[localize "str_actions_noroom",_repair] call dayz_rollingMessages;
	};

	player addMagazine (getText(configFile >> "CfgMagazines" >> _waterUsed >> "containerEmpty"));

	//Remove Later
	player removeMagazine "equip_brick";

	format [localize "str_sharpen_success",_displayName] call dayz_rollingMessages;
};

dayz_actionInProgress = false;
