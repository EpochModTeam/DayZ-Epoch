private ["_item","_picture","_class","_display","_transportMaxWeapons","_transportMaxMagazines","_transportmaxBackpacks","_buyPrice","_sellPrice"
,"_buyCurrency","_sellCurrency","_formattedText"
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
};

_formattedText = format [
"<img image='%1'  size='3'  align='center'/><br />" +
"<t color='#33BFFF'>Name: </t><t color='#ffffff'>%2</t><br />" +
"<t color='#33BFFF'>Class: </t><t color='#ffffff'>%3</t><br />" +
"<t color='#33BFFF'>Sell: </t><t color='#ffffff'>%5 %7</t><br />" +
"<t color='#33BFFF'>Buy: </t><t color='#ffffff'>%6 %4</t><br />" +
"<t color='#33BFFF'>Mags: </t><t color='#ffffff'>%8</t><br />" +
"<t color='#33BFFF'>Weaps:</t><t color='#ffffff'>%9</t><br />"
, _picture, _display, _class, _buyCurrency , _sellPrice, _buyPrice, _sellCurrency, _transportMaxWeapons,_transportMaxMagazines
];

(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_ITEMINFO) ctrlSetStructuredText parseText _formattedText;
