//_newObjects = [_previous,weapons player] call player_weaponCheck;
private["_change","_currentTypes","_currentQty","_previousTypes","_previousQty","_serial"];

_currentObjects = _this select 0;
_checkObjects = _this select 1;

_change = false;

if (count _currentObjects > 1) then {
	_currentTypes = _currentObjects select 0;
	_currentQty = _currentObjects select 1;
} else {
	_currentTypes = [];
	_currentQty = [];
};

if (count _checkObjects > 1) then {
	_previousTypes = _checkObjects select 0;
	_previousQty = _checkObjects select 1;
 } else {
	_previousTypes = [];
	_previousQty = [];
};
//Check if some of old loadout not there

//Review current loadout
_serial = 0;
{
	_itemVal = _x;
	_itemQty = _currentQty select _serial;

	_oldSerial = _previousTypes find _itemVal;
	_oldQty = 0;
	if (_oldSerial >= 0) then {
		_oldQty = _previousQty select _oldSerial;
	};
	if (_itemQty != _oldQty) then {_change = true};

	_serial = _serial + 1;
} forEach _currentTypes;

//Review old loadout
_serial = 0;
{
	_itemVal = _x;
	_itemQty = _previousQty select _serial;

	_oldSerial = _currentTypes find _itemVal;
	_oldQty = 0;
	if (_oldSerial >= 0) then {
		_oldQty = _currentQty select _oldSerial;
	};
	if (_itemQty != _oldQty) then {_change = true};

	_serial = _serial + 1;
} forEach _previousTypes;

_change;