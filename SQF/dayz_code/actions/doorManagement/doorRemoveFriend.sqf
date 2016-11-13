private ["_pos","_friends","_toRemove","_newList"];

_pos = _this select 0;
if (_pos < 0) exitWith {};
_friends = TheDoor getVariable ["doorfriends", []];
_toRemove = (_friends select _pos);
_newList = [];
{
	if(_x select 0  != _toRemove select 0) then {
		_newList set [count _newList, _x ];
	};
} forEach _friends;
TheDoor setVariable ["doorfriends", _newList, true];

PVDZ_veh_Save = [TheDoor, "gear"];
publicVariableServer "PVDZ_veh_Save";

call DoorGetFriends;
call DoorNearbyHumans;
