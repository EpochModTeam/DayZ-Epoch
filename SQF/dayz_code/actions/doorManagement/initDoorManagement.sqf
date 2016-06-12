disableSerialization;
if(count(_this) > 0) then
{
	TheDoor = _this select 3;
} else {
	TheDoor = dayz_selectedDoor;
};

// close EyeScanner if open
_display = findDisplay 61144;
_display closeDisplay 3000;

// Check if player is door friend
_isDoorFriend = false;
_doorFriends = TheDoor getVariable ["doorfriends",[]];
{
	if((_x select 0) == dayz_playerUID) then { _isDoorFriend = true; };
} forEach _doorFriends;

// Check if player is owner or plot friend
_isowner = [player, TheDoor] call FNC_check_owner;

// Only Owner, plot friends and door friends may manage the door
if( !_isDoorFriend && !(_isowner select 0) && !(_isowner select 1)) ) exitWith { localize "STR_EPOCH_DOORMANAGEMENT_NORIGHTS" call dayz_rollingMessages; };


createDialog "DoorManagement";
call DoorNearbyHumans;
call DoorGetFriends;
