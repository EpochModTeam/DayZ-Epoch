private ["_player","_toPay","_moneyInfo","_totalWorth","_moneyInGear","_moneyInBackpack","_moneyInVehicle","_success","_justChecking","_regularMagsToBuy"];

_player = _this select 0;
_toPay = _this select 1;
_moneyInfo = _this select 2;
_justChecking = _this select 3;
_regularMagsToBuy = _this select 4;
_totalWorth = _moneyInfo select 4;
_moneyInGear = _moneyInfo select 1;
_moneyInBackpack = _moneyInfo select 2;
_moneyInVehicle = _moneyInfo select 3;

if (!_justChecking) then {
	{
		_nil = [player, _x , 1] call BIS_fnc_invRemove;
	} count _moneyInGear;
	
	_moneyInGear = []; // Clear since money is removed now

	if (count _moneyInBackpack > 0) then {
		_nil = [unitBackpack _player, _moneyInBackpack, [], []] call ZUPA_fnc_removeWeaponsAndMagazinesCargo;
	};
	if (!isNull DZE_myVehicle && count _moneyInVehicle > 0) then {
		_nil = [DZE_myVehicle, _moneyInVehicle, [], []] call ZUPA_fnc_removeWeaponsAndMagazinesCargo;
	};
};

if (_totalWorth - _toPay == 0) then { // Money in inventory was exact amount
	_success = true;
} else {
	_success = [_toPay,_totalWorth,_justChecking,_regularMagsToBuy,_moneyInGear,_moneyInBackpack,false] call Z_returnChange;
};

_success
