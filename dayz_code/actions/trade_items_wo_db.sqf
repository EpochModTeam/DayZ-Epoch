private["_activatingPlayer","_part_out","_part_in","_qty_out","_qty_in","_buy_o_sell","_textPartIn","_textPartOut","_traderID","_counter","_failed","_qty","_isOk","_needed"];
// [part_out,part_in, qty_out, qty_in,];

if(TradeInprogress) exitWith { cutText ["Trade already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

//_activatingPlayer = _this select 1;

_part_out = (_this select 3) select 0;
_part_in = (_this select 3) select 1;
_qty_out = (_this select 3) select 2;
_qty_in = (_this select 3) select 3;
_buy_o_sell = (_this select 3) select 4;
_textPartIn = (_this select 3) select 5;
_textPartOut = (_this select 3) select 6;
//_traderID = (_this select 3) select 7;


_success = false;
_failed = false;

_total_in = 0;
_total_out = 0;

_qty = {_x == _part_in} count magazines player;

// find total number of possible trades
_total_trades = floor (_qty / _qty_in);

if (_qty >= _qty_in) then {

	

	// trade all items
	for "_x" from 1 to _total_trades do {

		// Take currency
		for "_x" from 1 to _qty_in do {
			player removeMagazine _part_in;
		};
		
		_counter = 0;

		// check for space if buying and do not check if selling
		for "_x" from 1 to _qty_out do {
			
			if(_buy_o_sell == "buy") then {
				_isOk = [player,_part_out] call BIS_fnc_invAdd;
				if (_isOk) then {
					_counter = _counter + 1;
				};
				if (!_isOk) exitWith { _failed = true;  };
			} else {
				player addMagazine _part_out;
			};
		};

		// revert trade since it failed
		if(!_failed) then {
			_total_in = _total_in + _qty_in;
			_total_out = _total_out + _qty_out;
		} else {
			// Return currency
			for "_x" from 1 to _qty_in do {
				player addMagazine _part_in;
			};
			for "_x" from 1 to _counter do {
				player removeMagazine _part_out;
			};
		};
		if (_failed) exitWith {};
	};
	if(_total_out > 0) then {
		cutText [format[("Traded %1 %2 for %3 %4"),_total_in,_textPartIn,_total_out,_textPartOut], "PLAIN DOWN"];
		disableSerialization;
		call dayz_forceSave;
	};
	
} else {
	_needed =  _qty_in - _qty;
	cutText [format[("Need %1 More %2"),_needed,_textPartIn] , "PLAIN DOWN"];
};

TradeInprogress = false;