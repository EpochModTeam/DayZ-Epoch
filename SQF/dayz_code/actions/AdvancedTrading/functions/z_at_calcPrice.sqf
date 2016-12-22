/**
*	call Z_calcPrice
*
*	Calculate the total price for single currency.
**/
private ["_sellPrice","_ctrlText","_bTotal"];
#include "defines.hpp"

_bTotal = 0;
_sellPrice = 0;

if (Z_SingleCurrency) then {
	_ctrlText = "";
	if (Z_Selling) then {
		{
			_sellPrice = _sellPrice +  (_x select 2);
		} count Z_SellArray;
		_ctrlText = format["%1 %2",[_sellPrice] call BIS_fnc_numberText,CurrencyName];
		(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_RIGHTLISTTITLE) ctrlSetText format ["%1 (%2 items)", localize "STR_EPOCH_TRADE_SELLING", count Z_SellArray];
	} else {
		{
			_sellPrice = _sellPrice +  ((_x select 2) * (_x select 9));
			_bTotal = _bTotal + (_x select 9);
		} count Z_BuyingArray;
		_ctrlText = format["%1 %2",[_sellPrice] call BIS_fnc_numberText,CurrencyName];
		(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_RIGHTLISTTITLE) ctrlSetText format ["%1 (%2 items)", localize "STR_EPOCH_TRADE_BUYING", _bTotal];
	};
	ctrlSetText [Z_AT_PRICEDISPLAY, _ctrlText];
	(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_PRICEINFO) ctrlSetStructuredText parseText '';
} else {
	if (Z_Selling) then {
			_ctrlText = "";
			{
				_sellPrice = _sellPrice +  ((_x select 2) * (_x select 11));
			} count Z_SellArray;
			_ctrlText = [_sellPrice,false] call Z_calcCurrency;
			(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_RIGHTLISTTITLE) ctrlSetText format ["%1 (%2 items)", localize "STR_EPOCH_TRADE_SELLING", count Z_SellArray];
		} else {
			{
				_sellPrice = _sellPrice +  ((_x select 2) * (_x select 11) * (_x select 9));
				_bTotal = _bTotal + (_x select 9);
			} count Z_BuyingArray;
			_ctrlText = [_sellPrice,false] call Z_calcCurrency;
			(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_RIGHTLISTTITLE) ctrlSetText format ["%1 (%2 items)", localize "STR_EPOCH_TRADE_BUYING", _bTotal];
		};
	ctrlSetText [Z_AT_PRICEDISPLAY, ''];
	(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_PRICEINFO) ctrlSetStructuredText parseText _ctrlText;
};
