#include "defines.sqf";
{  		
	_index = lbAdd [Z_AT_BUYINGLIST, _x select 3];
	lbSetPicture [Z_AT_BUYINGLIST, _index,  _x select 4];
}count Z_BuyingArray;