private ['_item','_picture','_class','_display','_buyPrice','_sellPrice','_formattedText','_buyCurrency','_sellCurrency'];
#include "defines.sqf";
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

if (Z_SingleCurrency) then {
	_formattedText = format [
		"<img image='%1'  size='3' align='center'/><br />" +
		"<t color='#33BFFF'>Name: </t><t color='#ffffff'>%2</t><br />" +
		"<t color='#33BFFF'>Class: </t><t color='#ffffff'>%3</t><br />" +
		"<t color='#33BFFF'>Sell: </t><t color='#ffffff'>%5 %7</t><br />" +
		"<t color='#33BFFF'>Buy: </t><t color='#ffffff'>%6 %7</t><br />"
		, _picture, _display, _class, 'lazy', _sellPrice, _buyPrice, CurrencyName
	];
} else {
	_picSell = getText (configFile >> 'CfgMagazines' >> _sellCurrency >> 'picture');
	_sellCurrency = getText (configFile >> 'CfgMagazines' >> _sellCurrency >> 'displayName');
	_picBuy = getText (configFile >> 'CfgMagazines' >> _buyCurrency >> 'picture');
	_buyCurrency = getText (configFile >> 'CfgMagazines' >> _buyCurrency >> 'displayName');
	_formattedText = format [
		"<img image='%1'  size='3' align='center'/><br />" +
		"<t color='#33BFFF'>Name: </t><t color='#ffffff'>%2</t><br />" +
		"<t color='#33BFFF'>Class: </t><t color='#ffffff'>%3</t><br />" +
		"<t color='#33BFFF'>Sell: </t><t color='#ffffff'>%5 <img image='%8' /> %7</t><br />" +
		"<t color='#33BFFF'>Buy: </t><t color='#ffffff'>%6 <img image='%10' /> %9</t><br />"
		, _picture, _display, _class, 'lazy', _sellPrice, _buyPrice, _sellCurrency , _picSell , _buyCurrency, _picBuy
	];
};
(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_ITEMINFO) ctrlSetStructuredText parseText _formattedText;
