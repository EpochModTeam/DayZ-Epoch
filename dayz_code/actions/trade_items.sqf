private["_iarray","_part_out","_part_in","_qty_out","_qty_in","_qty","_buy_o_sell","_textPartIn","_textPartOut","_bos","_isOk"];
// [part_out,part_in, qty_out, qty_in,];

_activatingPlayer = _this select 1;

_part_out = (_this select 3) select 0;
_part_in = (_this select 3) select 1;
_qty_out = (_this select 3) select 2;
_qty_in = (_this select 3) select 3;
_buy_o_sell = (_this select 3) select 4;
_textPartIn = (_this select 3) select 5;
_textPartOut = (_this select 3) select 6;
_traderID = (_this select 3) select 7;

_qty = {_x == _part_in} count magazines player;

if (_qty >= _qty_in) then {

	_bos = 0;
	if(_buy_o_sell == "sell") then {
		_bos = 1;
	};
	

	
	["dayzTradeObject",[_activatingPlayer,_traderID,_bos]] call callRpcProcedure;

	diag_log format["DEBUG Starting to wait for answer: %1", dayzTradeObject];

	waitUntil {!isNil "dayzTradeResult"};

	diag_log format["DEBUG Complete Trade: %1", dayzTradeResult];

	if(dayzTradeResult == "PASS") then {
		for "_x" from 1 to _qty_in do {
			player removeMagazine _part_in;
		};
	
		for "_x" from 1 to _qty_out do {
			player addMagazine _part_out;
		};
	
		// [player,"repair",0,false] call dayz_zombieSpeak;
		cutText [format[("Traded %1 %2 for %3 %4"),_qty_in,_textPartIn,_qty_out,_textPartOut], "PLAIN DOWN"];
	} else {
		cutText [format[("Insufficient Stock %1"),_textPartOut] , "PLAIN DOWN"];
	};
	dayzTradeResult = nil;

	

} else {
	_needed =  _qty_in - _qty;
	cutText [format[("Need %1 More %2"),_needed,_textPartIn] , "PLAIN DOWN"];
};