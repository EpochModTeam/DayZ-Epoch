private "_index";
#include "defines.hpp"

call Z_clearBuyList;

{
	_index = lbAdd [Z_AT_BUYABLELIST,_x select 0];
	lbSetPicture [Z_AT_BUYABLELIST,_index,"\z\addons\dayz_code\gui\grey\arrow_right.paa"];
} forEach Z_traderData;
