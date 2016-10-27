private ["_index","_count","_type","_name","_weapons","_typeOf"];
#include "defines.hpp"

_weapons = weapons player;
_weapons set [count _weapons,dayz_onBack];
_typeOf = typeOf (unitBackPack player);

{
	_index = lbAdd [Z_AT_BUYABLELIST,  _x select 3];
	lbSetPicture [Z_AT_BUYABLELIST, _index, _x select 4 ];
	_name = _x select 0;
	_type = _x select 1;
	_count = 0;
	
	if (_type in DZE_tradeVehicle && {_name == typeOf DZE_myVehicle}) then {
		_count = 1;
	};
	if (_type == "trade_items") then {
		{
			if (isText(configFile >> "CfgWeapons" >> _x >> "Attachments" >> _name) or _name in getArray (configFile >> "CfgWeapons" >> _x >> "magazines")) then {
				lbSetColor [Z_AT_BUYABLELIST, _index, [0.2,0.75,1,1]];
			};
		} count _weapons;
		_count = {_x == _name} count magazines player;
	};
	if (_type == "trade_weapons") then {
		_count = {_x == _name} count _weapons;
	};
	if (_type == "trade_backpacks" && {_name == _typeOf}) then {
		_count = 1;
	};
	
	if (_count > 0) then {
		lbSetColor [Z_AT_BUYABLELIST, _index, [0, 1, 0, 1]];
	} else {
		if ((_x select 6) < 0) then { //color items only allowed to either be sold or purchased
			lbSetColor [Z_AT_BUYABLELIST, _index, [0, 0.57, 1, 1]];
		};
	};
} count Z_BuyableArray;
