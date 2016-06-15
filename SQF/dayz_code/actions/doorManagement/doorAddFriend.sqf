private ["_pos","_plots","_inList"];
_pos = _this select 0;
if (_pos < 0) exitWith {};
_toAdd = (Humans select _pos);
_friends = TheDoor getVariable ["doorfriends",[]];
_inList = false;
{
	if((_x  select 0) == (_toAdd select 0)) exitWith { _inList = true; };
} forEach _friends;
if(_inList) exitWith { localize "STR_EPOCH_PLOTMANAGEMENT_ADDFRIEND_ALREADYONTHELIST" call dayz_rollingMessages; };
if(count _friends >= DZE_doorManagementMaxFriends) exitWith { format[localize "STR_EPOCH_PLOTMANAGEMENT_ADDFRIEND_FRIENDLIMIT", DZE_doorManagementMaxFriends] call dayz_rollingMessages; };
_friends set [count _friends, _toAdd];
TheDoor setVariable ["doorfriends", _friends, true];
PVDZ_veh_Save = [TheDoor,"gear"];
if (isServer) then {
	PVDZ_veh_Save call server_updateObject;
} else {
	publicVariableServer "PVDZ_veh_Save";
};

call DoorGetFriends;
call DoorNearbyHumans;
