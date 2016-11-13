private ["_inList","_toAdd","_friends","_friendUID","_friendName","_userList"];
disableSerialization;

_userList = (findDisplay 711195) displayCtrl 7101;

_friendUID = _this select 0;
_friendName = _userList lbText (lbCurSel _userList);

if (_friendUID == "") exitWith {};

_friends = TheDoor getVariable ["doorfriends",[]];
_toAdd = [_friendUID,toArray _friendName];
_inList = false;

{ if ((_x  select 0) == (_toAdd select 0)) exitWith { _inList = true; }; } count _friends;
if (_inList) exitWith { systemChat localize "STR_EPOCH_PLOTMANAGEMENT_ADDFRIEND_ALREADYONTHELIST"; };
if ((count _friends) == DZE_doorManagementMaxFriends) exitWith { systemChat format[localize "STR_EPOCH_PLOTMANAGEMENT_ADDFRIEND_FRIENDLIMIT", DZE_doorManagementMaxFriends]; };

_friends set [(count _friends), _toAdd];
TheDoor setVariable ["doorfriends", _friends, true];

PVDZ_veh_Save = [TheDoor,"gear"];
publicVariableServer "PVDZ_veh_Save";

call DoorGetFriends;
call DoorNearbyHumans;
