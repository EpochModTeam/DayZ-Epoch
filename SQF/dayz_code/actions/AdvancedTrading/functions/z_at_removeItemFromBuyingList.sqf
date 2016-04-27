#include "defines.sqf";
_index = _this select 0;
if(!isNil"_index" && _index > -1)then {
	lbDelete [Z_AT_BUYINGLIST, _index];
	Z_BuyingArray set [_index,"deleted"];
	Z_BuyingArray = Z_BuyingArray - ["deleted"];		
	call Z_calcPrice;	
};