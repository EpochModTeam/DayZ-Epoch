#include "defines.sqf";
_index = _this select 0;
if(!isNil"_index" && _index > -1)then {
	lbDelete [Z_AT_SELLABLELIST, _index];
	_temp = Z_SellableArray select _index;
	//_item = [_temp select 0,_temp select 1 ,_temp select 2,_temp select 3, _temp select 4  ];
	Z_SellArray set [count(Z_SellArray),_temp];
	Z_SellableArray set [_index,"deleted"];
	Z_SellableArray = Z_SellableArray - ["deleted"];
	_index2 = lbAdd [Z_AT_SELLINGLIST, _temp select 3];
	lbSetPicture [Z_AT_SELLINGLIST, _index2, _temp select 4];
	call Z_calcPrice;
};