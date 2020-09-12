private ['_item', '_type'];
#include "defines.hpp"

_item = _this select 0;
_type = _item select 1;

call {
	if (_type == "trade_items") exitwith
	{
		[_item] call Z_displayItemInfo;
	};
	if (_type == "trade_weapons") exitwith
	{
		[_item] call Z_displayWeaponInfo;
	};
	if (_type == "trade_backpacks") exitwith
	{
		[_item] call Z_displayBackpackInfo;
	};
	if (_type in DZE_tradeVehicle) exitwith
	{
		[_item] call Z_displayVehicleInfo;
	};
	(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_ITEMINFO) ctrlSetStructuredText (parseText format["<t color='#ffffff'>%1</t>",localize "STR_EPOCH_TRADE_NO_INFO"]);
};
