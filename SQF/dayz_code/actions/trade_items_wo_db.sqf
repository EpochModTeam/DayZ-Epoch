if (dayz_actionInProgress) exitWith {localize "str_epoch_player_103" call dayz_rollingMessages;};
dayz_actionInProgress = true;

private ["_vars","_part_out","_part_in","_qty_out","_qty_in","_textPartIn","_textPartOut","_qty","_needed","_finished","_abort","_removed","_tradeCounter","_total_trades","_humanityGain"];

_vars = _this select 3;
_part_out = _vars select 0;
_part_in = _vars select 1;
_qty_out = _vars select 2;
_qty_in = _vars select 3;
_humanityGain = [0,_vars select 4] select (count _vars > 4);
_textPartIn = getText (configFile >> "CfgMagazines" >> _part_in >> "displayName");
_textPartOut = getText (configFile >> "CfgMagazines" >> _part_out >> "displayName");

_qty = {_x == _part_in} count magazines player;

// find total number of possible trades
_total_trades = floor (_qty / _qty_in);

if(_total_trades < 1) exitWith {
	_needed =  _qty_in - _qty;
	format[localize "str_epoch_player_184",_needed,_textPartIn] call dayz_rollingMessages;
	dayz_actionInProgress = false;
};

_abort = false;
_tradeCounter = 0;

// trade all items
for "_x" from 1 to _total_trades do {

	_removed = 0;
	_tradeCounter = _tradeCounter + 1;

	if (_total_trades == 1) then {
		format[localize "str_epoch_player_105",_tradeCounter,_total_trades] call dayz_rollingMessages;
	} else {
		format[localize "str_epoch_player_187",_tradeCounter,_total_trades] call dayz_rollingMessages;
	};

	_finished = ["Medic",1] call fn_loopAction;

	if (!_finished) exitWith {
		localize "str_epoch_player_106" call dayz_rollingMessages;
	};

	_qty = {_x == _part_in} count magazines player;
	if (_qty >= _qty_in) then {

		_removed = _removed + ([player,_part_in,_qty_in] call BIS_fnc_invRemove);
		if (_removed == _qty_in) then {
			if (_part_out != "") exitwith {
				for "_x" from 1 to _qty_out do {
					player addMagazine _part_out;
				};
				if (_humanityGain != 0) exitwith {
					_humanityGain call player_humanityChange;
					format[localize "STR_EPOCH_PLAYER_186_HUMANITY",_qty_in,_textPartIn,_qty_out,_textPartOut,_humanityGain,localize "str_actions_stats_hm"] call dayz_rollingMessages;
				};
				format[localize "str_epoch_player_186",_qty_in,_textPartIn,_qty_out,_textPartOut] call dayz_rollingMessages;
			};

			if (_humanityGain != 0) exitwith {
				_humanityGain call player_humanityChange;
				format[localize "STR_EPOCH_PLAYER_186_2_HUMANITY",_qty_in,_textPartIn,_humanityGain,localize "str_actions_stats_hm"] call dayz_rollingMessages;
			};
			format[localize "STR_EPOCH_PLAYER_186_2",_qty_in,_textPartIn] call dayz_rollingMessages;
		} else {
			// Return items from botched trade.
			for "_x" from 1 to _removed do {
				player addMagazine _part_in;
			};
			_abort = true;
		};
	} else {
		_needed =  _qty_in - _qty;
		format[localize "str_epoch_player_184",_needed,_textPartIn] call dayz_rollingMessages;
	};

	uiSleep 1;

	if(_abort) exitWith {};
};

dayz_actionInProgress = false;
