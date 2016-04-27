/**
*	call Z_getContainer
*
*	Switches between selling and buying and the item container (gear/vehicle/bakcpack) and initiates item loading.
**/
private ["_lbIndex","_formattedText","_canBuyInVehicle"];
#include "defines.sqf";
(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_SLOTSDISPLAY) ctrlSetText format["0 / 0 / 0"];
call Z_clearBuyingList;
call Z_clearLists;
Z_SellableArray = [];
Z_SellArray = [];
Z_BuyingArray = [];

_lbIndex = _this select 0;

_formattedText = format [''];

(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_ITEMINFO) ctrlSetStructuredText parseText _formattedText;

call Z_calcPrice;

if(Z_Selling)then{
	switch (_lbIndex) do {
		case 0: {
			["Selling from backpack."] call Z_filleTradeTitle;
			Z_SellingFrom = 0;
			call Z_getBackpackItems;
		};
		case 1: {
			["Selling from vehicle."] call Z_filleTradeTitle;
			Z_SellingFrom = 1;
			call Z_getVehicleItems;
		};
		case 2: {
			["Selling from gear."] call Z_filleTradeTitle;
			Z_SellingFrom = 2;
			call Z_getGearItems;
		};
	};
}else{
	_ctrltext = format[" "];
	ctrlSetText [Z_AT_TRADERLINE2, _ctrltext];

	_ctrltext = format["These are all the items I'm selling."];
	ctrlSetText [Z_AT_TRADERLINE1, _ctrltext];
	switch (_lbIndex) do {

		case 0: {
			Z_SellingFrom = 0;
			["Buying in backpack."] call Z_filleTradeTitle;
			[0] call Z_calculateFreeSpace;
		};
		case 1: {
			Z_SellingFrom = 1;
			["Buying in vehicle."] call Z_filleTradeTitle;
			_canBuyInVehicle = call Z_checkCloseVehicle;
			if(_canBuyInVehicle)then{
				[1] call Z_calculateFreeSpace;
			}else{
				systemChat format["Get in the driver seat to be able to trade to your vehicle."];
				(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_SLOTSDISPLAY) ctrlSetText format["%1 / %2 / %3",0,0,0];
			};
		};
		case 2: {
			Z_SellingFrom = 2;
			["Buying in gear."] call Z_filleTradeTitle;
			[2] call Z_calculateFreeSpace;
		};
	};
};
