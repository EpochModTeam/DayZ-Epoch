private ["_item","_picture","_class","_display","_transportMaxWeapons","_transportMaxMagazines","_transportmaxBackpacks","_buyPrice","_sellPrice"
,"_buyCurrency","_sellCurrency","_formattedText","_picBuy","_picSell"
];

#include "defines.sqf";

_item = _this select 0;

_picture = _item select 4;
_class = _item select 0;
_display = _item select 3;

_transportMaxWeapons = 0;
_transportMaxMagazines = 0;

_buyPrice = 0;
_sellPrice = 0;
if(Z_Selling)then{
	_buyPrice = _item select 6;
	_buyCurrency = _item select 8;
	_sellPrice = _item select 2;
	_sellCurrency = _item select 7;
}else{
	_buyPrice = _item select 2;
	_buyCurrency = _item select 7;
	_sellPrice = _item select 6;
	_sellCurrency = _item select 8;
};

if ( isNumber (configFile >> 'CfgVehicles' >> _class >> 'transportMaxWeapons')) then {
	_transportMaxWeapons = getNumber (configFile >> 'CfgVehicles' >> _class >> 'transportMaxWeapons');
};

if ( isNumber (configFile >> 'CfgVehicles' >> _class >> 'transportMaxMagazines')) then {
	_transportMaxMagazines  = getNumber (configFile >> 'CfgVehicles' >> _class >> 'transportMaxMagazines');
};

if ( Z_SingleCurrency ) then {
	_buyCurrency = CurrencyName;
	_sellCurrency = CurrencyName;
	_formattedText = format [
		"<img image='%1'  size='3'  align='center'/><br />" +
		"<t color='#33BFFF'>%10: </t><t color='#ffffff'>%2</t><br />" +
		"<t color='#33BFFF'>%11: </t><t color='#ffffff'>%3</t><br />" +
		"<t color='#33BFFF'>%12: </t><t color='#ffffff'>%5 %7</t><br />" +
		"<t color='#33BFFF'>%13: </t><t color='#ffffff'>%6 %4</t><br />" +
		"<t color='#33BFFF'>%14: </t><t color='#ffffff'>%8</t><br />" +
		"<t color='#33BFFF'>%15: </t><t color='#ffffff'>%9</t><br />"
		, _picture, _display, _class, _buyCurrency , _sellPrice, _buyPrice, _sellCurrency, _transportMaxWeapons,_transportMaxMagazines, localize "STR_EPOCH_NAME", localize "STR_EPOCH_CLASS", localize "STR_EPOCH_PLAYER_292", localize "STR_EPOCH_PLAYER_291", localize "STR_EPOCH_WEPS", localize "STR_EPOCH_MAGS"
	];
} else {
	_picSell = getText (configFile >> 'CfgMagazines' >> _sellCurrency >> 'picture');
	_sellCurrency = getText (configFile >> 'CfgMagazines' >> _sellCurrency >> 'displayName');
	_picBuy = getText (configFile >> 'CfgMagazines' >> _buyCurrency >> 'picture');
	_buyCurrency = getText (configFile >> 'CfgMagazines' >> _buyCurrency >> 'displayName');
	
	_formattedText = format [
		"<img image='%1'  size='3'  align='center'/><br />" +
		"<t color='#33BFFF'>%10: </t><t color='#ffffff'>%2</t><br />" +
		"<t color='#33BFFF'>%11: </t><t color='#ffffff'>%3</t><br />" +
		"<t color='#33BFFF'>%12: </t><t color='#ffffff'>%5 <img image='%16' /> %7</t><br />" +
		"<t color='#33BFFF'>%13: </t><t color='#ffffff'>%6 <img image='%17' /> %4</t><br />" +
		"<t color='#33BFFF'>%14: </t><t color='#ffffff'>%8</t><br />" +
		"<t color='#33BFFF'>%15: </t><t color='#ffffff'>%9</t><br />"
		, _picture, _display, _class, _buyCurrency , _sellPrice, _buyPrice, _sellCurrency, _transportMaxWeapons,_transportMaxMagazines, localize "STR_EPOCH_NAME", localize "STR_EPOCH_CLASS", localize "STR_EPOCH_PLAYER_292", localize "STR_EPOCH_PLAYER_291", localize "STR_EPOCH_WEPS", localize "STR_EPOCH_MAGS", _picSell, _picBuy
	];
};



(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_ITEMINFO) ctrlSetStructuredText parseText _formattedText;
