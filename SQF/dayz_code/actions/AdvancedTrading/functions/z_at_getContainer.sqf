/**
*	call Z_getContainer
*
*	Switches between selling and buying and the item container (gear/vehicle/backpack) and initiates item loading.
**/
private ["_lbIndex","_canBuyInVehicle","_backpack"];
#include "defines.hpp"

if (Z_Selling) then {
	call Z_clearBuyingList;
	Z_BuyingArray = [];
};
call Z_clearLists;
Z_SellableArray = [];
Z_SellArray = [];

_lbIndex = _this select 0;
_backpack = unitBackpack player;

(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_ITEMINFO) ctrlSetStructuredText parseText "";

call Z_calcPrice;

if (Z_Selling) then {
	switch (_lbIndex) do {
		case 0: { //backpack
			if (!isNull _backpack) then {
				[localize "STR_EPOCH_TRADE_SELLING_BACKPACK"] call Z_fillTradeTitle;
				Z_SellingFrom = 0;
				call Z_getBackpackItems;
			} else {
				ctrlSetText [Z_AT_TRADERLINE1, localize "STR_EPOCH_TRADE_NO_BACKPACK"];
				(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_SLOTSDISPLAY) ctrlSetStructuredText parseText " ";
			};
		};
		case 1: { //vehicle
			_canBuyInVehicle = true call Z_checkCloseVehicle;
			if (_canBuyInVehicle) then {
				[localize "STR_EPOCH_TRADE_SELLING_VEHICLE"] call Z_fillTradeTitle;
				Z_SellingFrom = 1;
				call Z_getVehicleItems;
			} else {
				ctrlSetText [Z_AT_TRADERLINE1, localize "STR_EPOCH_PLAYER_245"];
				(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_SLOTSDISPLAY) ctrlSetStructuredText parseText " ";
			};
		};
		case 2: { //gear
			[localize "STR_EPOCH_TRADE_SELLING_GEAR"] call Z_fillTradeTitle;
			Z_SellingFrom = 2;
			call Z_getGearItems;
		};
	};
} else {
	ctrlSetText [Z_AT_TRADERLINE2, " "];
	ctrlSetText [Z_AT_TRADERLINE1, localize "STR_EPOCH_TRADE_SELLING_ALL"];
	switch (_lbIndex) do {
		case 0: { //backpack
			if (!isNull _backpack) then {
				Z_SellingFrom = 0;
				[localize "STR_EPOCH_TRADE_BUYING_BACKPACK"] call Z_fillTradeTitle;
				[0] call Z_displayFreeSpace;
			} else {
				ctrlSetText [Z_AT_TRADERLINE1, localize "STR_EPOCH_TRADE_NO_BACKPACK"];
				(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_SLOTSDISPLAY) ctrlSetStructuredText parseText " ";
			};
		};
		case 1: { //vehicle
			_canBuyInVehicle = true call Z_checkCloseVehicle;
			if (_canBuyInVehicle) then {
				Z_SellingFrom = 1;
				[localize "STR_EPOCH_TRADE_BUYING_VEHICLE"] call Z_fillTradeTitle;
				[1] call Z_displayFreeSpace;
			} else {
				ctrlSetText [Z_AT_TRADERLINE1, localize "STR_EPOCH_PLAYER_245"];
				(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_SLOTSDISPLAY) ctrlSetStructuredText parseText " ";
			};
		};
		case 2: { //gear
			Z_SellingFrom = 2;
			[localize "STR_EPOCH_TRADE_BUYING_GEAR"] call Z_fillTradeTitle;
			[2] call Z_displayFreeSpace;
		};
	};
};
