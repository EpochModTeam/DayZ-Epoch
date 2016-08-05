private ['_item','_picture','_class','_display','_buyPrice','_sellPrice','_formattedText','_buyCurrency','_sellCurrency','_compatible','_weapon','_attach','_config','_compatibleText','_type','_text'];
#include "defines.hpp"

_item = _this select 0;
_picture = _item select 4;
_class = _item select 0;
_display = _item select 3;
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

_compatible = [];
if (["Attachment",_class] call fnc_inString) then {
	_config = configFile >> "CfgWeapons";

	for "_i" from 0 to (count _config)-1 do {
		_weapon = _config select _i;
		if (isClass _weapon && {isClass (_weapon >> "Attachments")}) then {
			for "_i" from 0 to (count (_weapon >> "Attachments"))-1 do {
				_attach = (_weapon >> "Attachments") select _i;
				_type = configName _attach;
				if (_class == _type) exitWith {
					_text = getText (_weapon >> "displayName");
					if (!(_text in _compatible) && (!(isClass (_weapon >> "ItemActions")) or {count (_weapon >> "ItemActions") < 1})) then {
						_compatible set [count _compatible,_text];
					};
				};
			};
		};
	};
};

_compatibleText = "";
{
	if (_forEachIndex > 0) then {
		_compatibleText = _compatibleText + ", " + _x;
	} else {
		_compatibleText = _compatibleText + _x;
	};
} forEach _compatible;

if (Z_SingleCurrency) then {
	_formattedText = format [
		"<img image='%1'  size='3' align='center'/><br />" +
		"<t color='#33BFFF' size='0.7'>%8: </t><t color='#ffffff' size='0.7'>%2</t><br />" +
		"<t color='#33BFFF' size='0.7'>%9: </t><t color='#ffffff' size='0.7'>%3</t><br />" +
		"<t color='#33BFFF' size='0.7'>%11: </t><t color='#ffffff' size='0.7'>%6 %7</t><br />" +
		"<t color='#33BFFF' size='0.7'>%10: </t><t color='#ffffff' size='0.7'>%5 %7</t><br />"
		, _picture, _display, _class, 'lazy', _sellPrice, _buyPrice, CurrencyName, localize "STR_EPOCH_NAME", localize "STR_EPOCH_CLASS", localize "STR_EPOCH_PLAYER_292", localize "STR_EPOCH_PLAYER_291"
	];
} else {
	_picSell = getText (configFile >> 'CfgMagazines' >> _sellCurrency >> 'picture');
	_sellCurrency = getText (configFile >> 'CfgMagazines' >> _sellCurrency >> 'displayName');
	_picBuy = getText (configFile >> 'CfgMagazines' >> _buyCurrency >> 'picture');
	_buyCurrency = getText (configFile >> 'CfgMagazines' >> _buyCurrency >> 'displayName');
	_formattedText = format [
		"<img image='%1'  size='3' align='center'/><br />" +
		"<t color='#33BFFF' size='0.7'>%11: </t><t color='#ffffff' size='0.7'>%2</t><br />" +
		"<t color='#33BFFF' size='0.7'>%12: </t><t color='#ffffff' size='0.7'>%3</t><br />" +
		"<t color='#33BFFF' size='0.7'>%14: </t><t color='#ffffff' size='0.7'>%6 <img image='%10' /> %9</t><br />" +
		"<t color='#33BFFF' size='0.7'>%13: </t><t color='#ffffff' size='0.7'>%5 <img image='%8' /> %7</t><br />" 
		, _picture, _display, _class, 'lazy', _sellPrice, _buyPrice, _sellCurrency , _picSell , _buyCurrency, _picBuy, localize "STR_EPOCH_NAME", localize "STR_EPOCH_CLASS", localize "STR_EPOCH_PLAYER_292", localize "STR_EPOCH_PLAYER_291"
	];
};

if (count _compatible > 0) then {
	_formattedText = _formattedText + format [
		"<t color='#33BFFF' size='0.7'>%1: </t><t color='#ffffff' size='0.7'>%2</t>"
		,localize "STR_EPOCH_COMPATIBLE",_compatibleText
	];
};

(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_ITEMINFO) ctrlSetStructuredText parseText _formattedText;
