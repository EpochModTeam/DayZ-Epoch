private ["_index","_count","_type","_name","_weapons"];
#include "defines.hpp"

{
	_name = _x select 0;
	_type = _x select 1;

	if (_type == "trade_any_vehicle") then { 
		_count = { local _x } count (nearestObjects [(getPosATL player), [_name], Z_VehicleDistance]); 
	};
	if (_type == "trade_items") then {
		_count = {_x == _name} count magazines player;
	};
	if (_type == "trade_weapons") then {
		_weapons = weapons player;
		_weapons set [count _weapons,dayz_onBack];
		_count = {_x == _name} count _weapons;
	};
	if (_type == "trade_backpacks") then { 
		if (_name == typeOf (unitBackPack player)) then { _count = 1; } 
	};
	
	_index = lbAdd [Z_AT_BUYABLELIST,  _x select 3];
	lbSetPicture [Z_AT_BUYABLELIST, _index, _x select 4 ];
	if (_count > 0) then {
		lbSetColor [Z_AT_BUYABLELIST, _index, [0, 1, 0, 1]];
	};
} count Z_BuyableArray;
