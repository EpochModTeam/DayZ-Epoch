private ["_pos","_friends","_toRemove","_newList","_ownerPUID"];

_pos = _this select 0;
if (_pos < 0) exitWith {};
_friends = TheDoor getVariable ["doorfriends", []];
_ownerPUID = TheDoor getVariable ["ownerPUID","0"];
_toRemove = (_friends select _pos);

if ((_toRemove select 0) == _ownerPUID && (!(dayz_playerUID in DZE_doorManagementAdmins) && !(dayz_playerUID == _ownerPUID))) exitWith {systemChat localize "STR_EPOCH_DOORMANAGEMENT_CANT_REMOVE";};

_newList = [];
{
	if (_x select 0 != _toRemove select 0) then {
		_newList set [count _newList, _x ];
	};
} forEach _friends;
TheDoor setVariable ["doorfriends", _newList, true];

PVDZ_veh_Save = [TheDoor, "gear"];
publicVariableServer "PVDZ_veh_Save";

call DoorGetFriends;
call DoorNearbyHumans;
