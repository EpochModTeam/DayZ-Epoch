private ["_index","_count","_type","_name","_weapons","_typeOf"];
#include "defines.hpp"

_weapons = weapons player;
_weapons set [count _weapons,dayz_onBack];
_typeOf = typeOf (unitBackPack player);
_count = 0;

{
	_index = lbAdd [Z_AT_BUYABLELIST,  _x select 3];
	lbSetPicture [Z_AT_BUYABLELIST, _index, _x select 4 ];
	_name = _x select 0;
	_type = _x select 1;
	
	if (_type in ["trade_any_vehicle", "trade_any_vehicle_free", "trade_any_vehicle_old", "trade_any_bicycle", "trade_any_bicycle_old", "trade_any_boat", "trade_any_boat_old"]) then {
		_count = { local _x } count (nearestObjects [(getPosATL player), [_name], Z_VehicleDistance]);
	};

	if (_type == "trade_items") then {
		{
			if (isText(configFile >> "CfgWeapons" >> _x >> "Attachments" >> _name) or _name in getArray (configFile >> "CfgWeapons" >> _x >> "magazines")) then {
				lbSetColor [Z_AT_BUYABLELIST, _index, [0.2,0.75,1]];
			};
		} count _weapons;
		_count = {_x == _name} count magazines player;
	};
	if (_type == "trade_weapons") then {
		_count = {_x == _name} count _weapons;
	};
	if (_type == "trade_backpacks") then { 
		if (_name == _typeOf) then { _count = 1; }
	};
	
	if (_count > 0) then {
		lbSetColor [Z_AT_BUYABLELIST, _index, [0, 1, 0, 1]];
	};
} count Z_BuyableArray;
