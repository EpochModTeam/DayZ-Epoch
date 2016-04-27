#include "defines.sqf";
_index = _this select 0;
_amount = parseNumber(_this select 1);
if(!isNil"_index" && _index > -1 && (typeName _amount == "SCALAR") && _amount > 0 )then {
	_temp = Z_BuyableArray select _index;
	_temp set [9,(ceil _amount)];
	Z_BuyingArray set [count(Z_BuyingArray),_temp];
	_index2 = lbAdd [Z_AT_BUYINGLIST, format["%1x: %2",_temp select 9,_temp select 3]];
	lbSetPicture [Z_AT_BUYINGLIST, _index2, _temp select 4];
	call Z_calcPrice;
};
