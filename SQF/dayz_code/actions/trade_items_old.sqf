private ["_part_out","_part_in","_qty_out","_qty_in","_qty","_buy_o_sell","_textPartIn","_textPartOut","_bos","_needed","_started","_finished","_animState","_isMedic","_total_parts_out","_abort","_removed","_tradeCounter","_next_highest_bar","_third_highest_bar","_next_highest_conv","_third_highest_conv","_third_parts_out_raw","_third_parts_out","_remainder","_next_parts_out_raw","_next_parts_out","_activatingPlayer","_traderID","_total_trades"];
// [part_out,part_in, qty_out, qty_in,];

if(DZE_ActionInProgress) exitWith { cutText [(localize "str_epoch_player_103") , "PLAIN DOWN"] };
DZE_ActionInProgress = true;

_total_parts_out = 0;

_activatingPlayer = player;

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
	cutText [format[(localize "str_epoch_player_184"),_needed,_textPartIn] , "PLAIN DOWN"];
	DZE_ActionInProgress = false;
};

// perform number of total trades
for "_x" from 1 to _total_trades do {

	_removed = 0;
	_tradeCounter = _tradeCounter + 1;

	// cutText ["Starting trade, stand still to complete.", "PLAIN DOWN"];
	if(_total_trades == 1) then { 
		cutText [format[(localize "str_epoch_player_105"),_tradeCounter,_total_trades] , "PLAIN DOWN"];
	} else {
		cutText [format[(localize "str_epoch_player_187"),_tradeCounter,_total_trades] , "PLAIN DOWN"];
	};
	[1,1] call dayz_HungerThirst;
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
		if (_started && !_isMedic) then {
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
		if (vehicle player == player) then {
			[objNull, player, rSwitchMove,""] call RE;
			player playActionNow "stop";
		};
		cutText [(localize "str_epoch_player_106") , "PLAIN DOWN"];
	};

	if (_finished) then {
	
		_qty = {_x == _part_in} count magazines player;
		if (_qty >= _qty_in) then {
	
			_part_inClass =  configFile >> "CfgMagazines" >> _part_in;

			_removed = _removed + ([player,_part_inClass,_qty_in] call BIS_fnc_invRemove);
			if (_removed == _qty_in) then {
			
				// Continue with trade.
				if (isNil "_part_in") then { _part_in = "Unknown Item" };
				if (isNil "inTraderCity") then { inTraderCity = "Unknown Trader City" };
				PVDZE_obj_Trade = [_activatingPlayer,_traderID,_bos,_part_in,inTraderCity];
				publicVariableServer  "PVDZE_obj_Trade";

				waitUntil {!isNil "dayzTradeResult"};

				if(dayzTradeResult == "PASS") then {
			
					// total of all parts
					_total_parts_out = _total_parts_out + _qty_out;

					cutText [format[(localize "str_epoch_player_186"),_qty_in,_textPartIn,_qty_out,_textPartOut], "PLAIN DOWN"];

				} else {
					cutText [format[(localize "str_epoch_player_183"),_textPartOut] , "PLAIN DOWN"];
					_abort = true;

					// Return items taken
					for "_x" from 1 to _removed do {
						player addMagazine _part_in;
					};

				};

				dayzTradeResult = nil;

			} else {
			
				// Return items from botched trade. 
				for "_x" from 1 to _removed do {
					player addMagazine _part_in;
				};
				_abort = true;
			};

		} else {
			_needed =  _qty_in - _qty;
			cutText [format[(localize "str_epoch_player_184"),_needed,_textPartIn] , "PLAIN DOWN"];
		};
	};
	
	sleep 1;

	if(_abort) exitWith {};
};

// pay out
if(_total_parts_out >= 1) then {

	//diag_log format["DEBUG TRADE #: %1", _total_parts_out];

	if(_bos == 1) then { 
		//convert currency trades into next bar
		// 10 ItemCopperBar > ItemCopperBar10oz
		// 3 ItemCopperBar10oz > ItemSilverBar
		// 10 ItemSilverBar > ItemSilverBar10oz
		// 3 ItemSilverBar10oz > ItemGoldBar
		// 10 ItemGoldBar > ItemGoldBar10oz

		_next_highest_bar = "NA";
		_third_highest_bar = "NA";
		_next_highest_conv = 10000;
		_third_highest_conv = 10000;

		switch(true)do{ 
			case (_part_out == "ItemCopperBar"): { 			
				_next_highest_bar = "ItemCopperBar10oz";
				_third_highest_bar = "ItemSilverBar";
				_next_highest_conv = 10;
				_third_highest_conv = 3;
			}; 
			case (_part_out == "ItemCopperBar10oz"): { 
				_next_highest_bar = "ItemSilverBar";
				_third_highest_bar = "ItemSilverBar10oz";
				_next_highest_conv = 3;
				_third_highest_conv = 10;
			};
			case (_part_out == "ItemSilverBar"): { 
				_next_highest_bar = "ItemSilverBar10oz";
				_third_highest_bar = "ItemGoldBar";
				_next_highest_conv = 10;
				_third_highest_conv = 3;
			}; 
			case (_part_out == "ItemSilverBar10oz"): { 
				_next_highest_bar = "ItemGoldBar";
				_third_highest_bar = "ItemGoldBar10oz";
				_next_highest_conv = 3;
				_third_highest_conv = 10;
			};  
			case (_part_out == "ItemGoldBar"): { 
				_next_highest_bar = "ItemGoldBar10oz";
				_third_highest_bar = "NA";
				_next_highest_conv = 10;
				_third_highest_conv = 10000;
			};  
		}; 
	
		//diag_log format["DEBUG TRADE part: %1 next: %2", _part_out,_next_highest_bar];

		if(_total_parts_out >= _next_highest_conv) then {
			_next_parts_out_raw = _total_parts_out / _next_highest_conv;
			
			// whole parts 
			_next_parts_out = floor(_next_parts_out_raw);

			//diag_log format["DEBUG TRADE next whole parts: %1 part: %2", _next_parts_out,_next_highest_bar];
			
			// find any whole remains
			_remainder = floor((_next_parts_out_raw - _next_parts_out) * _next_highest_conv);

			//diag_log format["DEBUG TRADE remainder parts: %1 part: %2", _remainder,_part_out];

			for "_x" from 1 to _remainder do {
				player addMagazine _part_out;
			};

			// Find if needs further conversion
			if (_next_parts_out >= _third_highest_conv) then {
				
				_third_parts_out_raw = _next_parts_out / _third_highest_conv;
			
				// whole parts 
				_third_parts_out = floor(_third_parts_out_raw);

				//diag_log format["DEBUG TRADE third whole parts: %1 part: %2", _third_parts_out,_third_highest_bar];
			
				for "_x" from 1 to _third_parts_out do {
					player addMagazine _third_highest_bar;
				};

				// find any whole remains
				_remainder = floor((_third_parts_out_raw - _third_parts_out) * _third_highest_conv);

				//diag_log format["DEBUG TRADE remainder parts: %1 part: %2", _remainder,_next_highest_bar];

				for "_x" from 1 to _remainder do {
					player addMagazine _next_highest_bar;
				};

			} else {

				//diag_log format["DEBUG TRADE next parts: %1 part: %2", _next_parts_out,_next_highest_bar];
			
				for "_x" from 1 to _next_parts_out do {
					player addMagazine _next_highest_bar;
				};
			};

		} else {

			//diag_log "DEBUG TRADE SELLING NORMALLY";
		
			for "_x" from 1 to _total_parts_out do {
				player addMagazine _part_out;
			};
		};
	
	} else {

		//diag_log "DEBUG TRADE BUYING";
		
		for "_x" from 1 to _total_parts_out do {
			player addMagazine _part_out;
		};
	};
};

DZE_ActionInProgress = false;