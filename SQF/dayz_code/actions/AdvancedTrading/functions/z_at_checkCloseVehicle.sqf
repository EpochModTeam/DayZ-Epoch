private ["_list","_result","_pos","_vehName"];

_result = false;
_pos = [player] call FNC_GetPos;
_list = _pos nearEntities [["Air","LandVehicle","Ship"],Z_VehicleDistance];

if (!isNull DZE_myVehicle && {local DZE_myVehicle} && {alive DZE_myVehicle} && {DZE_myVehicle in _list}) then {
	_result = true;
	if (_this) then { // Set trade title, don't set on menu start up since gear is selected initially.
		_vehName = getText(configFile >> "CfgVehicles" >> typeOf DZE_myVehicle >> "displayname");
		systemChat format[localize "STR_EPOCH_TRADE_SELECTED",_vehName];
		if (Z_Selling) then {
			[format[localize "STR_EPOCH_TRADE_SELLING_FROM",_vehName]] call Z_fillTradeTitle;
		} else {
			[format[localize "STR_EPOCH_TRADE_BUYING_IN",_vehName]] call Z_fillTradeTitle;
		};
	};
};

_result
