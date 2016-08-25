private ["_trader_data", "_dialog"];

if (dayz_actionInProgress) exitWith {localize "STR_EPOCH_PLAYER_103" call dayz_rollingMessages;};

_trader_data = (_this select 3);

_dialog = createdialog "TraderDialog";
lbClear TraderDialogCatList;
lbClear TraderDialogItemList;

TraderCurrentCatIndex = -1;
TraderItemList = [];

TraderCatList = [];
{
	private ["_index", "_x"];
	_index = lbAdd [TraderDialogCatList, _x select 0];
	TraderCatList set [count TraderCatList, _x select 1];
} count _trader_data;
waitUntil { !dialog };
TraderCurrentCatIndex = -1;
TraderCatList = [];
