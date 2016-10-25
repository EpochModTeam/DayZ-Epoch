#include "defines.hpp"

Z_Selling = !Z_Selling;
if (Z_Selling) then {
	(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_SELLBUYTOGGLE) ctrlSetText localize "STR_EPOCH_PLAYER_291";
	(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_FILTERBUTTON) ctrlSetText localize "STR_UI_FILTER";
	{ctrlShow [_x,true];} forEach [Z_AT_SELLABLELIST,Z_AT_SELLINGLIST,Z_AT_SELLBUTTON,Z_AT_ADDSELLITEMBUTTON,Z_AT_ADDALLSELLITEMBUTTON,Z_AT_REMOVESELLITEMBUTTON,Z_AT_REMOVEALLSELLITEMBUTTON,Z_AT_FILTERBOX]; // show
	{ctrlShow [_x,false];} forEach [Z_AT_BUYABLELIST,Z_AT_BUYINGLIST,Z_AT_BUYBUTTON,Z_AT_ADDBUYITEMBUTTON,Z_AT_BUYINGAMOUNT,Z_AT_REMOVEBUYITEMBUTTON,Z_AT_REMOVEALLBUYITEMBUTTON,Z_AT_SLOTSDISPLAY,Z_AT_BACKBUTTON]; // hide											
} else {
	(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_SELLBUYTOGGLE) ctrlSetText localize "STR_EPOCH_PLAYER_292";
	(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_FILTERBUTTON) ctrlSetText localize "STR_UI_FILTER";
	{ctrlShow [_x,true];} forEach [Z_AT_BUYABLELIST,Z_AT_BUYINGLIST,Z_AT_BUYBUTTON,Z_AT_ADDBUYITEMBUTTON,Z_AT_BUYINGAMOUNT,Z_AT_REMOVEBUYITEMBUTTON,Z_AT_REMOVEALLBUYITEMBUTTON,Z_AT_SLOTSDISPLAY,Z_AT_FILTERBOX,Z_AT_BACKBUTTON]; // show
	{ctrlShow [_x,false];} forEach [Z_AT_SELLABLELIST,Z_AT_SELLINGLIST,Z_AT_SELLBUTTON,Z_AT_ADDSELLITEMBUTTON,Z_AT_ADDALLSELLITEMBUTTON,Z_AT_REMOVESELLITEMBUTTON,Z_AT_REMOVEALLSELLITEMBUTTON]; // hide
	(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_BUYABLELIST) ctrlSetFontHeight 0.023; // reset
	(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_BUYABLELIST) ctrlCommit 0;
	
	if (Z_CategoryView) then {
		(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_FILTERBUTTON) ctrlSetText localize "STR_EPOCH_VIEW";
		(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_BUYABLELIST) ctrlSetFontHeight 0.026; // Slightly bigger in category view	
		(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_BUYABLELIST) ctrlCommit 0;
		{ctrlShow [_x,false];} forEach [Z_AT_ADDBUYITEMBUTTON,Z_AT_BUYINGAMOUNT,Z_AT_FILTERBOX,Z_AT_BACKBUTTON]; // hide
		call Z_fillCategories;
	};
};

if (Z_ResetContainer) then {
	//Only reset to gear if dialog was closed or switching between buy and sell modes
	Z_ResetContainer = false;
	[2] call Z_getContainer;
} else {
	// Switching between categories
	(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_ITEMINFO) ctrlSetStructuredText parseText "";
	ctrlSetText [Z_AT_TRADERLINE2, " "];
	ctrlSetText [Z_AT_TRADERLINE1, localize "STR_EPOCH_TRADE_SELLING_ALL"];
};
