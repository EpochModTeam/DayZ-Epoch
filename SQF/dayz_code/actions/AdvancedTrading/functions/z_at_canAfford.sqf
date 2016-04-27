private ['_worth', '_total_currency','_return','_part','_totalToPay','_inventoryMoney','_backpackMoney',"_kinds","_kinds2","_kinds3","_ammmounts","_ammmounts2","_ammmounts3"
,"_vehicleMoney"];

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
  };
} count (magazines player);

_return set [1, _inventoryMoney];

if( Z_AllowTakingMoneyFromBackpack ) then {
  _backpackPlayer = unitBackpack player;

  if (!isNull _backpackPlayer) then {
    _mags = getMagazineCargo Z_vehicle;
    _backpackMoney = [];
    _kinds = _mags select 0;
    _ammmounts = _mags select 1;
    {
      _part =  (configFile >> "CfgMagazines" >> _x);
      _worth =  (_part >> "worth");

      if isNumber (_worth) then {
        _total_currency = _total_currency + ( getNumber(_worth) * (_ammmounts select _forEachIndex));

        _counter = 0 ;
        while{	_counter < ( 	_ammmounts select _forEachIndex)}do{
          _backpackMoney set [count(_backpackMoney),_x];
          _counter = _counter + 1;
        };
      };
    }forEach _kinds;
    _return set [2, _backpackMoney];

  };
};

if( Z_AllowTakingMoneyFromVehicle ) then {
    if (!isNull Z_vehicle) then {

      _mags = getMagazineCargo Z_vehicle;
      _vehicleMoney = [];
      _kinds = _mags select 0;
      _ammmounts = _mags select 1;
      {
        _part =  (configFile >> "CfgMagazines" >> _x);
        _worth =  (_part >> "worth");

        if isNumber (_worth) then {
          _total_currency = _total_currency + ( getNumber(_worth) * (_ammmounts select _forEachIndex));
          _counter = 0 ;
          while{	_counter < ( 	_ammmounts select _forEachIndex)}do{
            _vehicleMoney set [count(_vehicleMoney),_x];
            _counter = _counter + 1;
          };
        };
      }forEach _kinds;
      _return set [3, _vehicleMoney];
  };
};

if ( _totalToPay <= _total_currency) then {
  _return set [0, true];
  _return set [4, _total_currency];
};

_return
