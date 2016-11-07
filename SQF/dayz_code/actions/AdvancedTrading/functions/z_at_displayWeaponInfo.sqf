private ["_item","_picture","_class","_display","_buyPrice","_sellPrice","_magazines","_magText","_formattedText","_buyCurrency","_sellCurrency","_attachments","_attachText","_config","_text","_attach","_type"];
#include "defines.hpp"

_item = _this select 0;
_picture = _item select 4;
_class = _item select 0;
_display = _item select 3;
_buyPrice = 0;
_sellPrice = 0;
_buyCurrency = "";
_sellCurrency = "";

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

_attachments = [];
_config = configFile >> "CfgWeapons" >> _class >> "Attachments";
if (isClass _config) then {
	for "_i" from 0 to (count _config)-1 do {
		_attach = _config select _i;
		_type = configName _attach;
		_text = getText (configFile >> "CfgMagazines" >> _type >> "displayName");
		_attachments set [count _attachments,_text];
	};
};

if (count _attachments < 1) then {_attachments = [localize "STR_SPECIAL_NONE"];};

_attachText = "";
{
	if (_forEachIndex > 0) then {
		_attachText = _attachText + ", " + _x;
	} else {
		_attachText = _attachText + _x;
	};
} forEach _attachments;

_magazines = [];
if (isArray (configFile >> 'CfgWeapons' >> _class >> 'magazines')) then {
	{
		_magazines set [count _magazines, getText (configFile >> "CfgMagazines" >> _x >> "displayName")];
	} forEach (getArray (configFile >> 'CfgWeapons' >> _class >> 'magazines'));
};
_magText = "";

{
	if (_forEachIndex > 0) then {
		_magText = _magText + ', ' + _x;
	} else {
		_magText = _magText + _x;
	};

} foreach _magazines;

if (Z_SingleCurrency) then {
	_formattedText = format [
		"<img image='%1' size='3'  align='center' /><br />" +
		"<t color='#33BFFF' size='0.7'>%8: </t><t color='#ffffff' size='0.7'>%2</t><br />" +
		"<t color='#33BFFF' size='0.7'>%9: </t><t color='#ffffff' size='0.7'>%3</t><br />" +
		"<t color='#33BFFF' size='0.7'>%11: </t><t color='#ffffff' size='0.7'>%6 %7</t><br />" +
		"<t color='#33BFFF' size='0.7'>%10: </t><t color='#ffffff' size='0.7'>%5 %7</t><br />",
		_picture,
		_display,
		_class,
		_magText,
		if (_sellPrice >= 0) then {[_sellPrice] call BIS_fnc_numberText;} else {"";},
		if (_buyPrice >= 0) then {[_buyPrice] call BIS_fnc_numberText;} else {"";},
		CurrencyName,
		localize "STR_EPOCH_NAME",
		localize "STR_EPOCH_CLASS",
		localize "STR_EPOCH_PLAYER_292",
		localize "STR_EPOCH_PLAYER_291"
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
		"<img image='%1' size='3'  align='center' /><br />" +
		"<t color='#33BFFF' size='0.7'>%11: </t><t color='#ffffff' size='0.7'>%2</t><br />" +
		"<t color='#33BFFF' size='0.7'>%12: </t><t color='#ffffff' size='0.7'>%3</t><br />" +
		"<t color='#33BFFF' size='0.7'>%14: </t><t color='#ffffff' size='0.7'>%6 <img image='%10' /> %8</t><br />" +
		"<t color='#33BFFF' size='0.7'>%13: </t><t color='#ffffff' size='0.7'>%5 <img image='%9' /> %7</t><br />",
		_picture,
		_display,
		_class,
		_magText,
		if (_sellPrice >= 0) then {_sellPrice} else {"";},
		if (_buyPrice >= 0) then {_buyPrice} else {"";},
		_sellCurrency,
		_buyCurrency,
		_picSell,
		_picBuy,
		localize "STR_EPOCH_NAME",
		localize "STR_EPOCH_CLASS",
		localize "STR_EPOCH_PLAYER_292",
		localize "STR_EPOCH_PLAYER_291"
	];
};

_parentClasses = [(configFile >> "CfgWeapons" >> _class),true] call BIS_fnc_returnParents;

if !("ItemCore" in _parentClasses or "Binocular" in _parentClasses) then {
	_formattedText = _formattedText + format [
		"<t color='#33BFFF' size='0.7'>%1: </t><t color='#ffffff' size='0.7'>%2</t><br />" +
		"<t color='#33BFFF' size='0.7'>%3: </t><t color='#ffffff' size='0.7'>%4</t><br />"
		,localize "STR_EPOCH_ATTACHMENTS",_attachText,localize "STR_EPOCH_MAGS",_magText
	];
};

(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_ITEMINFO) ctrlSetStructuredText parseText _formattedText;
