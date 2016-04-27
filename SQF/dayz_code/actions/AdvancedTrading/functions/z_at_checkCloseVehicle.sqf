private ["_vehicle","_list","_result"];
Z_vehicle = objNull;
_vehicle = objNull;
_list = nearestObjects [(getPosATL player), ["AllVehicles"], Z_VehicleDistance];
{
	if(!isNull _x && local _x && !isPlayer _x && alive _x && !(_x isKindOf "zZombie_base"))then{
		systemChat format["Selected %1",typeOf _x];
		_vehicle = _x;
	};
}count _list;
_result = false;
if(!isNull _vehicle)then{
	Z_vehicle = _vehicle;
	_result = true;
	[format["Buying in %1.", typeOf Z_vehicle]] call Z_filleTradeTitle;
};
_result
