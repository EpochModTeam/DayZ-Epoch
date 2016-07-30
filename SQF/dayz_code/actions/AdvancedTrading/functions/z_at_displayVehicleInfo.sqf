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
	_fuelCapacity = getNumber (_config >> 'fuelCapacity');
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

if (count _weapons2 < 1) then {_weapons2 = [localize "STR_EPOCH_NONE"];};

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
	"<t color='#33BFFF' size='0.8'>%10: </t><t color='#ffffff' size='0.7'>%2</t><br />" +
	"<t color='#33BFFF' size='0.8'>%11: </t><t color='#ffffff' size='0.7'>%3</t><br />" +
	"<t color='#33BFFF' size='0.8'>%13: </t><t color='#ffffff' size='0.8'>%6 %7</t><br />" +
	"<t color='#33BFFF' size='0.8'>%12: </t><t color='#ffffff' size='0.8'>%5 %7</t><br />" +
	"<t color='#33BFFF' size='0.8'>%14/%15/%16: </t><t color='#ffffff' size='0.8'>%9/%8/%4</t><br />" +
	"<t color='#33BFFF' size='0.8'>%17: </t><t color='#ffffff' size='0.8'>%18  </t><t color='#33BFFF' size='0.8'>%24: </t><t color='#ffffff' size='0.8'>%25</t><br />" + // Armor / Seats
	"<t color='#33BFFF' size='0.8'>%21%22: </t><t color='#ffffff' size='0.8'>%23  </t><t color='#33BFFF' size='0.8'>%19: </t><t color='#ffffff' size='0.8'>%20</t><br />" + // MaxSpeed / Fuel
	"<t color='#33BFFF' size='0.8'>%26: </t><t color='#ffffff' size='0.7'>%27</t>" // Weapons
	, _picture, _display, _class, _transportmaxBackpacks, _sellPrice, _buyPrice, CurrencyName, _transportMaxWeapons,_transportMaxMagazines, localize "STR_EPOCH_NAME", localize "STR_EPOCH_CLASS", localize "STR_EPOCH_PLAYER_292", localize "STR_EPOCH_PLAYER_291", localize "STR_EPOCH_MAGS", localize "STR_EPOCH_WEPS", localize "STR_EPOCH_BAGS",
	localize "STR_EPOCH_ARMOR",_armor,localize "STR_EPOCH_FUEL",_fuelCapacity,localize "STR_EPOCH_MAX",localize "STR_EPOCH_SPEED",_maxSpeed,localize "STR_EPOCH_SEATS",_seats,localize "STR_EPOCH_WEAPONS",_wepText
	];
} else {
	_picSell = getText (configFile >> 'CfgMagazines' >> _sellCurrency >> 'picture');
	_sellCurrency = getText (configFile >> 'CfgMagazines' >> _sellCurrency >> 'displayName');
	_picBuy = getText (configFile >> 'CfgMagazines' >> _buyCurrency >> 'picture');
	_buyCurrency = getText (configFile >> 'CfgMagazines' >> _buyCurrency >> 'displayName');

	_formattedText = format [
	"<img image='%1' size='3' /><br />" +
	"<t color='#33BFFF' size='0.8'>%13: </t><t color='#ffffff' size='0.7'>%2</t><br />" +
	"<t color='#33BFFF' size='0.8'>%14: </t><t color='#ffffff' size='0.7'>%3</t><br />" +
	"<t color='#33BFFF' size='0.8'>%16: </t><t color='#ffffff' size='0.8'>%6 <img image='%12' /> %7</t><br />" +
	"<t color='#33BFFF' size='0.8'>%15: </t><t color='#ffffff' size='0.8'>%5 <img image='%11' /> %10</t><br />" +
	"<t color='#33BFFF' size='0.8'>%17/%18/%19: </t><t color='#ffffff' size='0.8'>%8/%9/%4</t><br />" +
	"<t color='#33BFFF' size='0.8'>%20: </t><t color='#ffffff' size='0.8'>%21  </t><t color='#33BFFF' size='0.8'>%27: </t><t color='#ffffff' size='0.8'>%28</t><br />" + // Armor / Seats
	"<t color='#33BFFF' size='0.8'>%24%25: </t><t color='#ffffff' size='0.8'>%26  </t><t color='#33BFFF' size='0.8'>%22: </t><t color='#ffffff' size='0.8'>%23</t><br />" + // MaxSpeed  /  Fuel
	"<t color='#33BFFF' size='0.8'>%29: </t><t color='#ffffff' size='0.7'>%30</t>" // Weapons
	, _picture, _display, _class, _transportmaxBackpacks, _sellPrice, _buyPrice, _buyCurrency, _transportMaxWeapons,_transportMaxMagazines, _sellCurrency, _picSell,_picBuy, localize "STR_EPOCH_NAME", localize "STR_EPOCH_CLASS", localize "STR_EPOCH_PLAYER_292", localize "STR_EPOCH_PLAYER_291", localize "STR_EPOCH_WEPS", localize "STR_EPOCH_MAGS", localize "STR_EPOCH_BAGS",
	localize "STR_EPOCH_ARMOR",_armor,localize "STR_EPOCH_FUEL",_fuelCapacity,localize "STR_EPOCH_MAX",localize "STR_EPOCH_SPEED",_maxSpeed,localize "STR_EPOCH_SEATS",_seats,localize "STR_EPOCH_WEAPONS",_wepText
	];
};

(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_ITEMINFO) ctrlSetStructuredText parseText _formattedText;
