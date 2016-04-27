#include "defines.sqf";
_index = _this select 0;
if(!isNil"_index" && _index > -1)then {
	lbDelete [Z_AT_SELLINGLIST, _index];
	_temp = Z_SellArray select _index;
	//_item = [_temp select 0,_temp select 1 ,_temp select 2,_temp select 3, _temp select 4  ];
	Z_SellableArray set [count(Z_SellableArray),_temp];
	Z_SellArray set [_index,"deleted"];
	Z_SellArray = Z_SellArray - ["deleted"];
	_index2 = lbAdd [Z_AT_SELLABLELIST,  _temp select 3];
	lbSetPicture [Z_AT_SELLABLELIST, _index2, _temp select 4];
	call Z_calcPrice;	
};