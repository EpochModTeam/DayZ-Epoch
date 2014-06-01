private ["_currentObjects","_newObjects","_checkObjects","_type","_qtyNow","_qtyBefore","_change"];
//_newObjects = [_previous,weapons player] call player_weaponCheck;
_currentObjects = 	_this select 0;
_checkObjects = 	_this select 1;

_change = false;

//Check if some of old loadout not there
_newObjects = [];
{
	if (!(_x in _newObjects)) then {
		_type = _x;
		_qtyNow = 		{_x == _type} count _checkObjects;
		_qtyBefore = 	{_x == _type} count _currentObjects;
		if (_qtyNow != _qtyBefore) then {
			_change = true;
		};
		_newObjects set [count _newObjects,_type];
	};
} forEach _currentObjects;

//Compare current loadout with old loadout
_newObjects = [];
{
	if (!(_x in _newObjects)) then {
		_type = _x;
		_qtyNow = 		{_x == _type} count _checkObjects;
		_qtyBefore = 	{_x == _type} count _currentObjects;
		if (_qtyNow != _qtyBefore) then {
			_change = true;
		};
		_newObjects set [count _newObjects,_type];
	};
} forEach _checkObjects;

_change;