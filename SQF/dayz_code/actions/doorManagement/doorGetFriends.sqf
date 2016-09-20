private ["_friends","_name"];

lbClear 7102;
_friends = TheDoor getVariable ["doorfriends",[]];
{
	_name = _x select 1;
	lbAdd [7102, if (typeName _name == "ARRAY") then {toString _name} else {_name}];
} forEach _friends;
