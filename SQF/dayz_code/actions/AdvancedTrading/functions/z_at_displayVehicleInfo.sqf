private ['_item', '_type','_picture',"_class","_display","_transportMaxWeapons","_transportMaxMagazines","_transportmaxBackpacks"
,"_buyPrice","_sellPrice","_buyCurrency","_sellCurrency","_formattedText"
];

#include "defines.sqf";

_item = _this select 0;

_picture = _item select 4;
_class = _item select 0;
_display = _item select 3;

_fuelCapacity = nil;
_maxSpeed = nil;
_armor = nil;
_seats = nil;
_weapons = nil;

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

if ( isNumber (configFile >> 'CfgVehicles' >> _class >> 'transportMaxWeapons')) then {
	_transportMaxWeapons = getNumber (configFile >> 'CfgVehicles' >> _class >> 'transportMaxWeapons');
};

if ( isNumber (configFile >> 'CfgVehicles' >> _class >> 'transportMaxMagazines')) then {
	_transportMaxMagazines  = getNumber (configFile >> 'CfgVehicles' >> _class >> 'transportMaxMagazines');
};

if ( isNumber (configFile >> 'CfgVehicles' >> _class >> 'transportMaxBackpacks')) then {
	_transportmaxBackpacks  = getNumber (configFile >> 'CfgVehicles' >> _class >> 'transportMaxBackpacks');
};

if (Z_SingleCurrency) then {
	_formattedText = format [
	"<img image='%1' size='3' /><br />" +
	"<t color='#33BFFF'>Name: </t><t color='#ffffff'>%2</t><br />" +
	"<t color='#33BFFF'>Class: </t><t color='#ffffff'>%3</t><br />" +
	"<t color='#33BFFF'>Sell: </t><t color='#ffffff'>%5 %7</t><br />" +
	"<t color='#33BFFF'>Buy: </t><t color='#ffffff'>%6 %7</t><br />" +
	"<t color='#33BFFF'>Mags: </t><t color='#ffffff'>%9</t><br />" +
	"<t color='#33BFFF'>Weaps: </t><t color='#ffffff'>%8</t><br />" +
	"<t color='#33BFFF'>Backs: </t><t color='#ffffff'>%4</t><br />"
	, _picture, _display, _class, _transportmaxBackpacks, _sellPrice, _buyPrice, CurrencyName, _transportMaxWeapons,_transportMaxMagazines
	];


}else {
	_picSell = getText (configFile >> 'CfgMagazines' >> _sellCurrency >> 'picture');
	_sellCurrency = getText (configFile >> 'CfgMagazines' >> _sellCurrency >> 'displayName');
	_picBuy = getText (configFile >> 'CfgMagazines' >> _buyCurrency >> 'picture');
	_buyCurrency = getText (configFile >> 'CfgMagazines' >> _buyCurrency >> 'displayName');

	_formattedText = format [
	"<img image='%1' size='3' /><br />" +
	"<t color='#33BFFF'>Name: </t><t color='#ffffff'>%2</t><br />" +
	"<t color='#33BFFF'>Class: </t><t color='#ffffff'>%3</t><br />" +
	"<t color='#33BFFF'>Sell: </t><t color='#ffffff'>%5 <img image='%11' /> %10</t><br />" +
	"<t color='#33BFFF'>Buy: </t><t color='#ffffff'>%6 <img image='%12' /> %7</t><br />" +
	"<t color='#33BFFF'>Mags: </t><t color='#ffffff'>%8</t><br />" +
	"<t color='#33BFFF'>Weaps: </t><t color='#ffffff'>%9</t><br />" +
	"<t color='#33BFFF'>Backs: </t><t color='#ffffff'>%4</t><br />"
	, _picture, _display, _class, _transportmaxBackpacks, _sellPrice, _buyPrice, _buyCurrency, _transportMaxWeapons,_transportMaxMagazines, _sellCurrency, _picSell,_picBuy
	];


};



(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_ITEMINFO) ctrlSetStructuredText parseText _formattedText;
