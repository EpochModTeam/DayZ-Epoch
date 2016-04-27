/**
*	call Z_calcPrice
*
*	Calculate the total price for single currency.
**/
private ["_sellPrice","_ctrltext"];
#include "defines.sqf";

_sellPrice = 0;

if(Z_SingleCurrency) then {
	_ctrltext = '';
	if(Z_Selling)then{
		{
				_sellPrice = _sellPrice +  (_x select 2);
		}count Z_SellArray;
		_ctrltext = format["%1 %2", _sellPrice , CurrencyName];
	} else {
		{
				_sellPrice = _sellPrice +  ((_x select 2) * (_x select 9));
		}count Z_BuyingArray;
		_ctrltext = format["%1 %2", _sellPrice , CurrencyName];
	};
	ctrlSetText [Z_AT_PRICEDISPLAY, _ctrltext];
	(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_PRICEINFO) ctrlSetStructuredText parseText '';
} else {
	if(Z_Selling)then {
			_ctrltext = "";
			{
					_sellPrice = _sellPrice +  ((_x select 2) * (_x select 11));
			}count Z_SellArray;
			_ctrltext = _sellPrice call Z_calcDefaultCurrency;
		} else {
			{
					_sellPrice = _sellPrice +  ((_x select 2) * (_x select 11) * (_x select 9));
			}count Z_BuyingArray;
				_ctrltext = _sellPrice call Z_calcDefaultCurrency;
		};
		ctrlSetText [Z_AT_PRICEDISPLAY, ''];
		(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_PRICEINFO) ctrlSetStructuredText parseText _ctrltext;
};
