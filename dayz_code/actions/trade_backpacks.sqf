private["_iarray","_part_out","_part_in","_qty_out","_qty_in","_qty"];
//		   [part_out,part_in, qty_out, qty_in,];

_part_out = (_this select 3) select 0;
_part_in = (_this select 3) select 1;
_qty_out = (_this select 3) select 2;
_qty_in = (_this select 3) select 3;
_buy_o_sell = (_this select 3) select 4;
_textPartIn = (_this select 3) select 5;
_textPartOut = (_this select 3) select 6;

if(_buy_o_sell == "buy") then {
	_qty = {_x == _part_in} count magazines player;
} else {
	_qty = 0;
	_bag = unitBackpack player;
	_class = typeOf _bag;
	if(_class == _part_in) then {
		_qty = 1;
	};
};

if (_qty >= _qty_in) then {

	if(_buy_o_sell == "buy") then {
		for "_x" from 1 to _qty_in do {
			player removeMagazine _part_in;
		};
		removeBackpack player;
		player addBackpack _part_out;
	} else {
		// Sell
		for "_x" from 1 to _qty_out do {
			player addMagazine _part_out;
		};	
		removeBackpack player;
		// player addBackpack _part_out;
	};

	cutText [format[("Traded %1 %2 for %3 %4"),_qty_in,_textPartIn,_qty_out,_textPartOut], "PLAIN DOWN"];
	
	{player removeAction _x} forEach s_player_parts;s_player_parts = [];
	s_player_parts_crtl = -1;
	
} else {
	_needed =  _qty_in - _qty;
	cutText [format[("Need %1 More %2"),_needed,_textPartIn] , "PLAIN DOWN"];
};