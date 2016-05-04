private ["_vehicle","_list","_result","_pos"];
Z_vehicle = objNull;
_vehicle = objNull;
_pos = [player] call FNC_GetPos;
_list = nearestObjects [_pos, ["Air","LandVehicle","Ship"], Z_VehicleDistance];
{
	if (!isNull _x && local _x && alive _x) then {
		_vehicle = _x;
	};
}count _list;
_result = false;
if(!isNull _vehicle)then{
	Z_vehicle = _vehicle;
	systemChat format[localize "STR_EPOCH_TRADE_SELECTED",typeOf Z_vehicle];
	_result = true;
	if (_this) then { // Set trade title, don't set on menu start up since gear is selected initially.
		if (Z_Selling) then {
			[format[localize "STR_EPOCH_TRADE_SELLING_FROM", typeOf Z_vehicle]] call Z_filleTradeTitle;
		} else {
			[format[localize "STR_EPOCH_TRADE_BUYING_IN", typeOf Z_vehicle]] call Z_filleTradeTitle;
		};
	};
};
_result
