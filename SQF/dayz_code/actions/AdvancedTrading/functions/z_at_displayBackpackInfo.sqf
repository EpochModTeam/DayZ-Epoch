private ["_item","_picture","_class","_display","_transportMaxWeapons","_transportMaxMagazines","_transportmaxBackpacks","_buyPrice","_sellPrice","_buyCurrency","_sellCurrency","_formattedText","_picBuy","_picSell"];
#include "defines.hpp"

_item = _this select 0;

_picture = _item select 4;
_class = _item select 0;
_display = _item select 3;

_transportMaxWeapons = 0;
_transportMaxMagazines = 0;

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

if (isNumber (configFile >> 'CfgVehicles' >> _class >> 'transportMaxWeapons')) then {
	_transportMaxWeapons = getNumber (configFile >> 'CfgVehicles' >> _class >> 'transportMaxWeapons');
};

if (isNumber (configFile >> 'CfgVehicles' >> _class >> 'transportMaxMagazines')) then {
	_transportMaxMagazines  = getNumber (configFile >> 'CfgVehicles' >> _class >> 'transportMaxMagazines');
};

if (Z_SingleCurrency) then {
	_formattedText = format [
		"<img image='%1'  size='3'  align='center'/><br />" +
		"<t color='#33BFFF' size='0.7'>%10: </t><t color='#ffffff' size='0.7'>%2</t><br />" +
		"<t color='#33BFFF' size='0.7'>%11: </t><t color='#ffffff' size='0.7'>%3</t><br />" +
		"<t color='#33BFFF' size='0.7'>%13: </t><t color='#ffffff' size='0.7'>%6 %4</t><br />" +
		"<t color='#33BFFF' size='0.7'>%12: </t><t color='#ffffff' size='0.7'>%5 %7</t><br />" +
		"<t color='#33BFFF' size='0.7'>%16: </t><t color='#ffffff' size='0.7'><img image='%14'/> %8 <img image='%15'/> %9</t><br />",
		_picture,
		_display,
		_class,
		CurrencyName,
		if (_sellPrice >= 0) then {[_sellPrice] call BIS_fnc_numberText;} else {"";},
		if (_buyPrice >= 0) then {[_buyPrice] call BIS_fnc_numberText;} else {"";},
		CurrencyName,
		_transportMaxWeapons,
		_transportMaxMagazines,
		localize "STR_EPOCH_NAME",
		localize "STR_EPOCH_CLASS",
		localize "STR_EPOCH_PLAYER_292",
		localize "STR_EPOCH_PLAYER_291",
		"\z\addons\dayz_code\gui\gear\gear_ui_slots_weapons_white.paa",
		"\z\addons\dayz_code\gui\gear\gear_ui_slots_items_white.paa",
		localize "STR_EPOCH_CARGO_SPACE"
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
		"<img image='%1'  size='3'  align='center'/><br />" +
		"<t color='#33BFFF' size='0.7'>%10: </t><t color='#ffffff' size='0.7'>%2</t><br />" +
		"<t color='#33BFFF' size='0.7'>%11: </t><t color='#ffffff' size='0.7'>%3</t><br />" +
		"<t color='#33BFFF' size='0.7'>%13: </t><t color='#ffffff' size='0.7'>%6 <img image='%17' /> %4</t><br />" +
		"<t color='#33BFFF' size='0.7'>%12: </t><t color='#ffffff' size='0.7'>%5 <img image='%16' /> %7</t><br />" +
		"<t color='#33BFFF' size='0.7'>%18: </t><t color='#ffffff' size='0.7'><img image='%14'/> %8 <img image='%15'/> %9</t><br />",
		_picture,
		_display,
		_class,
		_buyCurrency,
		if (_sellPrice >= 0) then {_sellPrice} else {"";},
		if (_buyPrice >= 0) then {_buyPrice} else {"";},
		_sellCurrency,
		_transportMaxWeapons,
		_transportMaxMagazines,
		localize "STR_EPOCH_NAME",
		localize "STR_EPOCH_CLASS",
		localize "STR_EPOCH_PLAYER_292",
		localize "STR_EPOCH_PLAYER_291",
		"\z\addons\dayz_code\gui\gear\gear_ui_slots_weapons_white.paa",
		"\z\addons\dayz_code\gui\gear\gear_ui_slots_items_white.paa",
		_picSell,
		_picBuy,
		localize "STR_EPOCH_CARGO_SPACE"
	];
};

(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_ITEMINFO) ctrlSetStructuredText parseText _formattedText;
