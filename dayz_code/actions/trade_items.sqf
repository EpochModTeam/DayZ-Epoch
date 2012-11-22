private["_iarray","_part_out","_part_in","_qty_out","_qty_in","_qty","_buy_o_sell","_textPartIn","_textPartOut"];
// [part_out,part_in, qty_out, qty_in,];

_part_out = (_this select 3) select 0;
_part_in = (_this select 3) select 1;
_qty_out = (_this select 3) select 2;
_qty_in = (_this select 3) select 3;
_buy_o_sell = (_this select 3) select 4;
_textPartIn = (_this select 3) select 5;
_textPartOut = (_this select 3) select 6;

_qty = {_x == _part_in} count magazines player;

if (_qty >= _qty_in) then {

	for "_x" from 1 to _qty_in do {
		player removeMagazine _part_in;
	};
	
	for "_x" from 1 to _qty_out do {
		player addMagazine _part_out;
	};
	
	// [player,"repair",0,false] call dayz_zombieSpeak;
	cutText [format[("Traded %1 %2 for %3 %4"),_qty_in,_textPartIn,_qty_out,_textPartOut], "PLAIN DOWN"];

} else {
	_needed =  _qty_in - _qty;
	cutText [format[("Need %1 More %2"),_needed,_textPartIn] , "PLAIN DOWN"];
};