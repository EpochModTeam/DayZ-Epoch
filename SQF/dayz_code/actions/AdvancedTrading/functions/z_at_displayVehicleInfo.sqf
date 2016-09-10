private ['_item', '_type','_picture',"_class","_display","_transportMaxWeapons","_transportMaxMagazines","_transportmaxBackpacks"
,"_buyPrice","_sellPrice","_buyCurrency","_sellCurrency","_formattedText","_fuelCapacity","_maxSpeed","_armor","_seats","_weapons",
"_weapons2","_config","_wepText","_turret","_text"];

#include "defines.hpp"

_item = _this select 0;

_picture = _item select 4;
_class = _item select 0;
_display = _item select 3;

_fuelCapacity = 0;
_maxSpeed = 0;
_armor = 0;
_seats = 0;
_weapons = [];

_transportMaxWeapons = 0;
_transportMaxMagazines = 0;
_transportmaxBackpacks = 0;

_buyPrice = 0;
_sellPrice = 0;

if (Z_Selling) then {
	_buyPrice = _item select 6;
	_buyCurrency = _item select 8;
	_sellPrice = _item select 2;
	_sellCurrency = _item select 7;
} else {
	_buyPrice = _item select 2;
	_buyCurrency = _item select 7;
	_sellPrice = _item select 6;
	_sellCurrency = _item select 8;
};

_config = configFile >> 'CfgVehicles' >> _class;

if (isNumber (_config >> 'transportMaxWeapons')) then {
	_transportMaxWeapons = getNumber (_config >> 'transportMaxWeapons');
};

if (isNumber (_config >> 'transportMaxMagazines')) then {
	_transportMaxMagazines = getNumber (_config >> 'transportMaxMagazines');
};

if (isNumber (_config >> 'transportMaxBackpacks')) then {
	_transportmaxBackpacks = getNumber (_config >> 'transportMaxBackpacks');
};

if (isNumber (_config >> 'fuelCapacity')) then {
	_fuelCapacity = if (_class isKindOf "Bicycle") then {0} else {getNumber (_config >> 'fuelCapacity')};
};

if (isNumber (_config >> 'maxSpeed')) then {
	_maxSpeed = getNumber (_config >> 'maxSpeed');
};

if (isNumber (_config >> 'armor')) then {
	_armor = getNumber (_config >> 'armor');
};

if (isNumber (_config >> 'transportSoldier')) then {
	_seats = getNumber (_config >> 'transportSoldier');
};

{
	if ((isNumber (_config >> _x)) && {getNumber (_config >> _x) > 0}) then {
		_seats = _seats + 1;
	};
} forEach ["hasDriver","hasGunner","hasCommander"];

if (isArray (_config >> 'weapons')) then {
	_weapons = getArray (_config >> 'weapons');
};

{
	_turret = _x;
	if (isArray (_config >> 'Turrets' >> _turret >> 'weapons')) then {
		{
			_weapons set [count _weapons,_x];
		} forEach (getArray (_config >> 'Turrets' >> _turret >> 'weapons'));
	};
	{
		if ((isNumber (_config >> 'Turrets' >> _turret >> _x)) && {getNumber (_config >> 'Turrets' >> _turret >> _x) > 0}) then {
			_seats = _seats + 1;
		};
	} forEach ["hasDriver","hasGunner","hasCommander"];
} forEach ["MainTurret","BackTurret","SideTurret","RightDoorGun","BackDoorGun","LeftDoorGun","AGS30_Turret","PK_Turret"];

// Get weapon display names
_weapons2 = [];
{
	if !(["horn",_x] call fnc_inString) then {
		_text = getText (configFile >> 'CfgWeapons' >> _x >> 'displayName');
		if (_text in _weapons2) then {
			_index = _weapons2 find _text;
			_weapons2 set [_index,_text + "x2"];
		} else {
			_weapons2 set [count _weapons2,_text];
		};
	};
} forEach _weapons;

_wepText = "";
{
	if (_forEachIndex > 0) then {
		_wepText = _wepText + ', ' + _x;
	} else {
		_wepText = _wepText + _x;
	};
} forEach _weapons2;

if (Z_SingleCurrency) then {
	_formattedText = format [
		"<img image='%1' size='3' /><br />" +
		"<t color='#33BFFF' size='0.7'>%10: </t><t color='#ffffff' size='0.7'>%2</t><br />" +
		"<t color='#33BFFF' size='0.7'>%11: </t><t color='#ffffff' size='0.7'>%3</t><br />" +
		"<t color='#33BFFF' size='0.7'>%13: </t><t color='#ffffff' size='0.7'>%6 %7</t><br />" +
		"<t color='#33BFFF' size='0.7'>%12: </t><t color='#ffffff' size='0.7'>%5 %7</t><br />" +
		"<t color='#33BFFF' size='0.7'>%14: </t><t color='#ffffff' size='0.7'><img image='%15'/> %8 <img image='%16'/> %9 <img image='%26'/> %4</t><br />" +
		"<t color='#33BFFF' size='0.7'>%17: </t><t color='#ffffff' size='0.7'>%18  </t><t color='#33BFFF' size='0.7'>%24: </t><t color='#ffffff' size='0.7'>%25</t><br />" + // Armor / Seats
		"<t color='#33BFFF' size='0.7'>%21 %22: </t><t color='#ffffff' size='0.7'>%23  </t><t color='#33BFFF' size='0.7'>%19: </t><t color='#ffffff' size='0.7'>%20</t><br />", // MaxSpeed / Fuel
		_picture,
		_display,
		_class,
		_transportmaxBackpacks,
		if (_sellPrice >= 0) then {[_sellPrice] call BIS_fnc_numberText;} else {"";},
		if (_buyPrice >= 0) then {[_buyPrice] call BIS_fnc_numberText;} else {"";},
		CurrencyName,
		_transportMaxWeapons,
		_transportMaxMagazines,
		localize "STR_EPOCH_NAME",
		localize "STR_EPOCH_CLASS",
		localize "STR_EPOCH_PLAYER_292",
		localize "STR_EPOCH_PLAYER_291",
		localize "STR_EPOCH_CARGO_SPACE",
		"\z\addons\dayz_code\gui\gear\gear_ui_slots_weapons_white.paa",
		"\z\addons\dayz_code\gui\gear\gear_ui_slots_items_white.paa",
		localize "STR_EPOCH_ARMOR",
		_armor,
		localize "STR_EPOCH_FUEL",
		_fuelCapacity,
		localize "STR_EPOCH_MAX",
		localize "STR_EPOCH_SPEED",
		_maxSpeed,
		localize "STR_EPOCH_SEATS",
		_seats,
		"\z\addons\dayz_code\gui\gear\gear_ui_slots_backpacks_white.paa"
	];
} else {
	_picSell = "";
	if (_sellPrice >= 0) then {
		_picSell = getText (configFile >> 'CfgMagazines' >> _sellCurrency >> 'picture');
		_sellCurrency = getText (configFile >> 'CfgMagazines' >> _sellCurrency >> 'displayName');
	};
	_picBuy = "";
	if (_buyPrice >= 0) then {
		_picBuy = getText (configFile >> 'CfgMagazines' >> _buyCurrency >> 'picture');
		_buyCurrency = getText (configFile >> 'CfgMagazines' >> _buyCurrency >> 'displayName');
	};

	_formattedText = format [
		"<img image='%1' size='3' /><br />" +
		"<t color='#33BFFF' size='0.7'>%13: </t><t color='#ffffff' size='0.7'>%2</t><br />" +
		"<t color='#33BFFF' size='0.7'>%14: </t><t color='#ffffff' size='0.7'>%3</t><br />" +
		"<t color='#33BFFF' size='0.7'>%16: </t><t color='#ffffff' size='0.7'>%6 <img image='%12' /> %7</t><br />" +
		"<t color='#33BFFF' size='0.7'>%15: </t><t color='#ffffff' size='0.7'>%5 <img image='%11' /> %10</t><br />" +
		"<t color='#33BFFF' size='0.7'>%17: </t><t color='#ffffff' size='0.7'><img image='%18'/> %8 <img image='%19'/> %9 <img image='%29'/> %4</t><br />" +
		"<t color='#33BFFF' size='0.7'>%20: </t><t color='#ffffff' size='0.7'>%21  </t><t color='#33BFFF' size='0.7'>%27: </t><t color='#ffffff' size='0.7'>%28</t><br />" + // Armor / Seats
		"<t color='#33BFFF' size='0.7'>%24 %25: </t><t color='#ffffff' size='0.7'>%26  </t><t color='#33BFFF' size='0.7'>%22: </t><t color='#ffffff' size='0.7'>%23</t><br />",  // MaxSpeed  /  Fuel
		_picture,
		_display,
		_class,
		_transportmaxBackpacks,
		if (_sellPrice >= 0) then {_sellPrice} else {"";},
		if (_buyPrice >= 0) then {_buyPrice} else {"";},
		_buyCurrency,
		_transportMaxWeapons,
		_transportMaxMagazines,
		_sellCurrency,
		_picSell,
		_picBuy,
		localize "STR_EPOCH_NAME",
		localize "STR_EPOCH_CLASS",
		localize "STR_EPOCH_PLAYER_292",
		localize "STR_EPOCH_PLAYER_291",
		localize "STR_EPOCH_CARGO_SPACE",
		"\z\addons\dayz_code\gui\gear\gear_ui_slots_weapons_white.paa",
		"\z\addons\dayz_code\gui\gear\gear_ui_slots_items_white.paa",
		localize "STR_EPOCH_ARMOR",
		_armor,
		localize "STR_EPOCH_FUEL",
		_fuelCapacity,
		localize "STR_EPOCH_MAX",
		localize "STR_EPOCH_SPEED",
		_maxSpeed,
		localize "STR_EPOCH_SEATS",
		_seats,
		"\z\addons\dayz_code\gui\gear\gear_ui_slots_backpacks_white.paa"
	];
};

if (count _weapons2 > 0) then {
	_formattedText = _formattedText + format [
		"<t color='#33BFFF' size='0.7'>%1: </t><t color='#ffffff' size='0.7'>%2</t><br />",
		localize "STR_EPOCH_WEAPONS",_wepText
	];
};
		
(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_ITEMINFO) ctrlSetStructuredText parseText _formattedText;
