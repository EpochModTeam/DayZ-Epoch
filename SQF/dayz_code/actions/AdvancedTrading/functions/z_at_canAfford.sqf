private ["_amounts","_backpackMoney","_backpackPlayer","_counter","_findGem","_inventoryMoney","_kinds","_mags","_part","_return","_totalToPay","_total_currency","_vehicleMoney","_worth"];

_totalToPay = _this;
_return = [false, [], [], [], 0];

_total_currency = 0;
_inventoryMoney = [];
{
  _part =  (configFile >> "CfgMagazines" >> _x);
  _worth =  (_part >> "worth");
  if isNumber (_worth) then {
    _total_currency = _total_currency + getNumber(_worth);
    _inventoryMoney set [count(_inventoryMoney),_x];
  } else {
	_findGem = DZE_GemList find _x;
	if (_findGem >= 0) then {
		_worth = DZE_GemWorthList select _findGem;
		_total_currency = _total_currency + _worth;
		_inventoryMoney set [count(_inventoryMoney),_x];
	};
  };
} count (magazines player);

_return set [1, _inventoryMoney];

if (Z_AllowTakingMoneyFromBackpack) then {
	_backpackPlayer = unitBackpack player;
	if (!isNull _backpackPlayer) then {
		_mags = getMagazineCargo _backpackPlayer;
		_backpackMoney = [];
		_kinds = _mags select 0;
		_amounts = _mags select 1;
		{
			_part =  (configFile >> "CfgMagazines" >> _x);
			_worth =  (_part >> "worth");
			if isNumber (_worth) then {
				_total_currency = _total_currency + (getNumber(_worth) * (_amounts select _forEachIndex));
				_counter = 0 ;
				while {_counter < (_amounts select _forEachIndex)} do {
				  _backpackMoney set [count(_backpackMoney),_x];
				  _counter = _counter + 1;
				};
			} else {
				_findGem = DZE_GemList find _x;
				if (_findGem >= 0) then {
					_worth = DZE_GemWorthList select _findGem;
					_total_currency = _total_currency + (_worth * (_amounts select _forEachIndex));
					_counter = 0;
					while {_counter < (_amounts select _forEachIndex)} do {
					  _backpackMoney set [count(_backpackMoney),_x];
					  _counter = _counter + 1;
					};
				};
			};
		} forEach _kinds;
		_return set [2, _backpackMoney];
	};
};

if (Z_AllowTakingMoneyFromVehicle) then {
	if (!isNull DZE_myVehicle) then {
		_mags = getMagazineCargo DZE_myVehicle;
		_vehicleMoney = [];
		_kinds = _mags select 0;
		_amounts = _mags select 1;
		{
			_part =  (configFile >> "CfgMagazines" >> _x);
			_worth =  (_part >> "worth");
			if isNumber (_worth) then {
				_total_currency = _total_currency + (getNumber(_worth) * (_amounts select _forEachIndex));
				_counter = 0;
				while {_counter < (_amounts select _forEachIndex)} do {
					_vehicleMoney set [count(_vehicleMoney),_x];
					_counter = _counter + 1;
				};
			} else {
				_findGem = DZE_GemList find _x;
				if (_findGem >= 0) then {
					_worth = DZE_GemWorthList select _findGem;
					_total_currency = _total_currency + (_worth * (_amounts select _forEachIndex));
					_counter = 0 ;
					while {_counter < (_amounts select _forEachIndex)} do {
					  _vehicleMoney set [count(_vehicleMoney),_x];
					  _counter = _counter + 1;
					};
				};
			};
		} forEach _kinds;
		_return set [3, _vehicleMoney];
	};
};

if (_totalToPay <= _total_currency) then {
  _return set [0, true];
  _return set [4, _total_currency];
};

_return
