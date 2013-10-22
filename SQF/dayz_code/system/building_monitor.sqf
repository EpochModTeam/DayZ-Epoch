private ["_building","_GroupMarker","_nearby","_run","_items"];
_building = 		_this select 0;
_GroupMarker = 		_this select 1;
_items = 			_this select 2;
_run = true;
_nearby = false;
while {_run} do {
	if (isNull _building) then {_run = false};
	_nearby = false;
	{
		if (_x distance _building < 500) then {_nearby = true};
	} forEach (call BIS_fnc_listPlayers);
	if (!_nearby) then {_run = false};
	sleep 5;
};
{deleteVehicle _x;} forEach _items;

_building setVariable ["looted",(DateToNumber date),true];