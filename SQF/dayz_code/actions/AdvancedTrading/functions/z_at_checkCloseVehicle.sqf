private ["_list","_result","_pos"];

_result = false;
_pos = [player] call FNC_GetPos;
_list = nearestObjects [_pos, ["Air","LandVehicle","Ship"], Z_VehicleDistance];

if (!isNull DZE_myVehicle && {local DZE_myVehicle} && {alive DZE_myVehicle} && {DZE_myVehicle in _list}) then {
	_result = true;
	if (_this) then { // Set trade title, don't set on menu start up since gear is selected initially.
		systemChat format[localize "STR_EPOCH_TRADE_SELECTED",typeOf DZE_myVehicle];
		if (Z_Selling) then {
			[format[localize "STR_EPOCH_TRADE_SELLING_FROM", typeOf DZE_myVehicle]] call Z_fillTradeTitle;
		} else {
			[format[localize "STR_EPOCH_TRADE_BUYING_IN", typeOf DZE_myVehicle]] call Z_fillTradeTitle;
		};
	};
};

_result
