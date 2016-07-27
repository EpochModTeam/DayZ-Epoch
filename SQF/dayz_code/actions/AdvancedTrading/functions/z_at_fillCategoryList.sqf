private ["_categoryName","_categoryNumber"];
#include "defines.hpp"

_categoryName = lbText [Z_AT_BUYABLELIST,_this];
{
	if (_x select 0 == _categoryName) exitWith {
		_categoryNumber = _x select 1;
	};
} forEach Z_traderData;

_categoryNumber call Z_calcBuyableList;