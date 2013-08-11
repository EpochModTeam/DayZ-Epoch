private ["_trader_data", "_dialog"];

if (TradeInprogress) exitWith {
	cutText ["Trading already in progress." , "PLAIN DOWN"];
};

_trader_data = (_this select 3);

_dialog = createdialog "TraderDialog";
lbClear TraderDialogCatList;
lbClear TraderDialogItemList;

TraderCurrentCatIndex = -1;
TraderItemList = -1;

TraderCatList = [];
{
	private ["_index", "_x"];
	_index = lbAdd [TraderDialogCatList, _x select 0];
	TraderCatList set [count TraderCatList, _x select 1];
} forEach _trader_data;
waitUntil { !dialog };
TraderCurrentCatIndex = -1;
TraderCatList = -1;