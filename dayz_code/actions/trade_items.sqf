private["_iarray","_part_out","_part_in","_qty_out","_qty_in","_qty","_buy_o_sell","_textPartIn","_textPartOut","_bos","_isOk"];
// [part_out,part_in, qty_out, qty_in,];

if(TradeInprogress) exitWith { cutText ["Trade already in progress." , "PLAIN DOWN"] };
TradeInprogress = true;

_activatingPlayer = _this select 1;

_part_out = (_this select 3) select 0;
_part_in = (_this select 3) select 1;
_qty_out = (_this select 3) select 2;
_qty_in = (_this select 3) select 3;
_buy_o_sell = (_this select 3) select 4;
_textPartIn = (_this select 3) select 5;
_textPartOut = (_this select 3) select 6;
_traderID = (_this select 3) select 7;

_removed = 0;
_tradeCounter = 0;

_bos = 0;
if(_buy_o_sell == "sell") then {
	_bos = 1;
};

// Get total parts in
_qty = {_x == _part_in} count magazines player;

// Find number of possible trades
_total_trades = floor(_qty / _qty_in);

_abort = false;

if(_total_trades < 1) exitWith { 
	_needed =  _qty_in - _qty;
	cutText [format[("Need %1 More %2"),_needed,_textPartIn] , "PLAIN DOWN"];
	TradeInprogress = false;
};

// perform number of total trades
for "_x" from 1 to _total_trades do {

	_removed = 0;
	_tradeCounter = _tradeCounter + 1;

	// cutText ["Starting trade, stand still to complete.", "PLAIN DOWN"];
	if(_total_trades == 1) then { 
		cutText [format[("Starting trade, stand still to complete trade."),_tradeCounter,_total_trades] , "PLAIN DOWN"];
	} else {
		cutText [format[("Starting trade, stand still to complete trade %1 of %2."),_tradeCounter,_total_trades] , "PLAIN DOWN"];
	};
	player playActionNow "Medic";
	
	//_dis=20;
	//_sfx = "repair";
	//[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
	//[player,_dis,true,(getPosATL player)] spawn player_alertZombies;

	r_interrupt = false;
	_animState = animationState player;
	r_doLoop = true;
	_started = false;
	_finished = false;
	
	while {r_doLoop} do {
		_animState = animationState player;
		_isMedic = ["medic",_animState] call fnc_inString;
		if (_isMedic) then {
			_started = true;
		};
		if (_started and !_isMedic) then {
			r_doLoop = false;
			_finished = true;
		};
		if (r_interrupt) then {
			r_doLoop = false;
		};
		sleep 0.1;
	};
	r_doLoop = false;

	if (!_finished) exitWith { 
		r_interrupt = false;
		[objNull, player, rSwitchMove,""] call RE;
		player playActionNow "stop";
		cutText ["Canceled Trade." , "PLAIN DOWN"];
	};

	if (_finished) then {
	
		_qty = {_x == _part_in} count magazines player;
		if (_qty >= _qty_in) then {
	
			_removed = _removed + ([player,_part_in,_qty_in] call BIS_fnc_invRemove);
			if (_removed == _qty_in) then {
			
				// Continue with trade.
				dayzTradeObject = [_activatingPlayer,_traderID,_bos];
				publicVariableServer  "dayzTradeObject";

				waitUntil {!isNil "dayzTradeResult"};

				if(dayzTradeResult == "PASS") then {
			
					for "_x" from 1 to _qty_out do {
						player addMagazine _part_out;
					};

					cutText [format[("Traded %1 %2 for %3 %4"),_qty_in,_textPartIn,_qty_out,_textPartOut], "PLAIN DOWN"];
					
					

				} else {
					cutText [format[("Insufficient Stock %1"),_textPartOut] , "PLAIN DOWN"];
					_abort = true;

				};

				dayzTradeResult = nil;

			} else {
			
				// Return items from botched trade. 
				// TODO: this may never happen if so remove 
				for "_x" from 1 to _removed do {
					player addMagazine _part_in;
				};
				_abort = true;
			};

		} else {
			_needed =  _qty_in - _qty;
			cutText [format[("Need %1 More %2"),_needed,_textPartIn] , "PLAIN DOWN"];
		};
	};
	
	sleep 1;

	if(_abort) exitWith {};
};

TradeInprogress = false;