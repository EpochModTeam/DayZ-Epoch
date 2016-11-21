private ["_item","_use","_repair","_waterUsed","_displayName"];

//['ItemKnifeBlunt','ItemKnife']
_item = _this select 0; //Item to be sharpened
_repair = _this select 1; //Item to be given back.

_use = ["ItemWaterBottle","ItemWaterBottleInfected","ItemWaterBottleSafe","ItemWaterBottleBoiled","ItemWaterBottleHerbal","ItemCanteen","ItemCanteenInfected","ItemCanteenSafe","ItemCanteenBoiled","ItemCanteenHerbal"];
_waterUsed = nil;

call gear_ui_init;
closeDialog 1;

{
	if (_x IN magazines player) exitwith { _waterUsed = _x; };
} foreach _use;

// item is missing or tools are missing
if (isNil "_waterUsed") exitWith {
	//_displayName = getText (configFile >> "CfgMagazines" >> _use >> "displayName");
	localize "str_sharpen_missing_water" call dayz_rollingMessages;
};

// item is missing or tools are missing
if !("equip_brick" IN magazines player) exitWith {
	_displayName = getText (configFile >> "CfgMagazines" >> "equip_brick" >> "displayName");
	format [localize "str_missing_to_do_this",_displayName] call dayz_rollingMessages;
};

if (player hasWeapon _item) then {
	_displayName = getText (configFile >> "CfgWeapons" >> _item >> "displayName");
	
	player removeMagazine _waterUsed;
	Player removeWeapon _item;
	
	Player addWeapon _repair;
	
	if (_waterUsed in ["ItemWaterBottle","ItemWaterBottleInfected","ItemWaterBottleSafe","ItemWaterBottleBoiled","ItemWaterBottleHerbal"]) then {
		player addMagazine "ItemWaterBottleUnfilled";
	};
	if (_waterUsed in ["ItemCanteen","ItemCanteenInfected","ItemCanteenSafe","ItemCanteenBoiled","ItemCanteenHerbal"]) then {
		player addMagazine "ItemCanteenEmpty";
	};
	
	//Remove Later
	player removeMagazine "equip_brick";

	format [localize "str_sharpen_success",_displayName] call dayz_rollingMessages;
};