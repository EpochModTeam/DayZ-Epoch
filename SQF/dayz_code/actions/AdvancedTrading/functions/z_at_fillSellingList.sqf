/**
*	call Z_fillSellingList
*
*	Visualy fills in the listbox of items currently being sold.
**/
private "_index";
#include "defines.hpp"

{  		
	_index = lbAdd [Z_AT_SELLINGLIST, _x select 3];
	lbSetPicture [Z_AT_SELLINGLIST, _index,  _x select 4];
} count Z_SellArray;
