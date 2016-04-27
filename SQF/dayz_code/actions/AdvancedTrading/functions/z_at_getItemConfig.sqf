
#include "defines.sqf";
private ['_item', '_type'];
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
	case (_type == "trade_any_vehicle") :
	{
		[_item] call Z_displayVehicleInfo;
	};
	default {
		(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_ITEMINFO) ctrlSetStructuredText parseText "<t color='#ffffff'>No info found</t>";
	}
};
