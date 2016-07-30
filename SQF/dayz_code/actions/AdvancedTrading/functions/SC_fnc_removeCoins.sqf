private ["_player","_amount","_wealth","_newwealth", "_result"];

_player = _this select 0;
_amount = _this select 1;
_result = false;
_wealth = _player getVariable[Z_MoneyVariable,0];
if (_amount > 0) then {
	if (_wealth < _amount) then {
		_result = false;
	} else {
		_newwealth = _wealth - _amount;
		_player setVariable[Z_MoneyVariable,_newwealth, true];
		_player setVariable ["moneychanged",1,true];
		_result = true;
		// can't use (magazines _player), server_playerSync expects nested array with ammo counts from player_countMagazines
		// also fourth parameter in PVDZ_plr_Save is now used for achievements
		if (_player == player) then { call player_forceSave; };
	};
} else {
	_result = true;
};

_result
