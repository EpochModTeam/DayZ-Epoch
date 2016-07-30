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
} count Z_SellableArray;
