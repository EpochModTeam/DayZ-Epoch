
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
	case (_type in ["trade_any_vehicle", "trade_any_vehicle_free", "trade_any_vehicle_old", "trade_any_bicycle", "trade_any_bicycle_old", "trade_any_boat", "trade_any_boat_old"]) :
	{
		[_item] call Z_displayVehicleInfo;
	};
	default {
		(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_ITEMINFO) ctrlSetStructuredText parseText "<t color='#ffffff'>No info found</t>";
	}
};
