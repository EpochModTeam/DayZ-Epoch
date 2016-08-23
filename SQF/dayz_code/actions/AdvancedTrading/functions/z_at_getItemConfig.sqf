private ['_item', '_type'];
#include "defines.hpp"

_item = _this select 0;
_type = _item select 1;

switch (true) do {
	case (_type == "trade_items") :
	{
		[_item] call Z_displayItemInfo;
	};
	case (_type == "trade_weapons") :
	{
		[_item] call Z_displayWeaponInfo;
	};
	case (_type == "trade_backpacks") :
	{
		[_item] call Z_displayBackpackInfo;
	};
	case (_type in DZE_tradeVehicle) :
	{
		[_item] call Z_displayVehicleInfo;
	};
	default {
		(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_ITEMINFO) ctrlSetStructuredText (parseText format["<t color='#ffffff'>%1</t>",localize "STR_EPOCH_TRADE_NO_INFO"]);
	}
};
