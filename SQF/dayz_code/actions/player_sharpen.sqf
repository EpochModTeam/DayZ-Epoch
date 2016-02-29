private ["_item","_use","_repair","_waterUsed"];

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
	_msg = "Missing Water";
	_msg call dayz_rollingMessages;
};

// item is missing or tools are missing
if (!(_item IN items player)) exitWith {
	_displayName = getText (configFile >> "CfgWeapons" >> _item >> "displayName");
	//cutText [format["Missing Item",_displayName], "PLAIN DOWN"];
	_msg = format["Missing %1",_displayName];
	_msg call dayz_rollingMessages;
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

	
	//cutText [format ["%1 has been Sharpened",_displayName], "PLAIN DOWN"];
	_msg = format ["%1 has been Sharpened",_displayName];
	_msg call dayz_rollingMessages;
};