private "_index";
#include "defines.hpp"
{
	_index = lbAdd [Z_AT_BUYABLELIST,  _x select 3];
	lbSetPicture [Z_AT_BUYABLELIST, _index, _x select 4 ];
} count Z_BuyableArray;
