private "_index";
#include "defines.sqf";
call Z_clearBuyList;
call Z_clearBuyingList;

{
	_index = lbAdd [Z_AT_BUYABLELIST,_x select 0];
	lbSetPicture [Z_AT_BUYABLELIST,_index,"\z\addons\dayz_code\gui\epoch\arrow_right.paa"];
} forEach Z_traderData;