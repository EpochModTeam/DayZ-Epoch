/**
*	call Z_fillSellList
*
*	Visualy fills in the listbox of items that can be sold.
**/
private "_index";
#include "defines.hpp"

{
	_index = lbAdd [Z_AT_SELLABLELIST,  _x select 3];
	lbSetPicture [Z_AT_SELLABLELIST, _index, _x select 4 ];
	if ((_x select 6) < 0) then { //color items only allowed to either be sold or purchased
		lbSetColor [Z_AT_SELLABLELIST, _index, [0, 0.57, 1, 1]];
	};
} count Z_SellableArray;
