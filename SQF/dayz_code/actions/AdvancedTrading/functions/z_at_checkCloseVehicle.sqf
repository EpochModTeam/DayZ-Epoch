private ["_vehicle","_list","_result"];
Z_vehicle = objNull;
_vehicle = objNull;
_list = nearestObjects [(getPosATL player), ["AllVehicles"], Z_VehicleDistance];
{
	if(!isNull _x && local _x && !isPlayer _x && alive _x && !(_x isKindOf "zZombie_base"))then{
		_vehicle = _x;
	};
}count _list;
_result = false;
if(!isNull _vehicle)then{
	Z_vehicle = _vehicle;
	systemChat format[localize "STR_EPOCH_TRADE_SELECTED",typeOf Z_vehicle];
	_result = true;
	[format[localize "STR_EPOCH_TRADE_BUYING_IN", typeOf Z_vehicle]] call Z_filleTradeTitle;
};
_result
